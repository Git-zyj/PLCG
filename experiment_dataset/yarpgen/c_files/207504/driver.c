#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 28859296U;
_Bool var_1 = (_Bool)0;
int var_3 = 1207680530;
short var_4 = (short)-6830;
int var_5 = -139312207;
unsigned long long int var_9 = 2949757360423367898ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3463818800U;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)48245;
unsigned int var_15 = 1393627768U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
