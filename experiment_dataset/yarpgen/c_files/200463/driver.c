#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1173699812416411951ULL;
unsigned long long int var_3 = 7257382686147203804ULL;
unsigned long long int var_5 = 353272828870991041ULL;
unsigned long long int var_9 = 17800634720604110411ULL;
int var_12 = -1054209080;
long long int var_14 = 6417615338219143602LL;
int zero = 0;
short var_19 = (short)-13556;
unsigned long long int var_20 = 15053822455590064729ULL;
int var_21 = 1503197784;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
