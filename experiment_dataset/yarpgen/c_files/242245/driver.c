#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1900211516;
unsigned int var_2 = 4260299472U;
long long int var_5 = 8802943499827839778LL;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)35;
short var_9 = (short)-12223;
signed char var_10 = (signed char)7;
unsigned int var_12 = 1276330273U;
int zero = 0;
signed char var_13 = (signed char)98;
short var_14 = (short)21347;
short var_15 = (short)21235;
int var_16 = 1083101815;
long long int var_17 = 8833827417651302592LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
