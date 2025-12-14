#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 655331597;
unsigned int var_2 = 2764259569U;
int var_4 = -1144131148;
unsigned short var_5 = (unsigned short)50977;
signed char var_7 = (signed char)-100;
unsigned long long int var_8 = 12236508610405487069ULL;
int var_9 = -163417356;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)38001;
unsigned int var_12 = 1772102146U;
unsigned long long int var_13 = 6802994395455282557ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
