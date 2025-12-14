#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1934;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)1158;
unsigned long long int var_8 = 3711863671315168941ULL;
unsigned long long int var_9 = 4035018554551956679ULL;
int zero = 0;
unsigned int var_11 = 2270849201U;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
