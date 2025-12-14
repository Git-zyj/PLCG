#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)4;
long long int var_3 = -5911899277944797026LL;
unsigned char var_4 = (unsigned char)199;
long long int var_7 = -5286481445426254421LL;
int var_9 = 756761056;
short var_11 = (short)5601;
long long int var_12 = -3988992601042934552LL;
unsigned short var_14 = (unsigned short)12132;
short var_16 = (short)-14130;
unsigned short var_17 = (unsigned short)21349;
int zero = 0;
unsigned long long int var_20 = 17312020277307650077ULL;
unsigned int var_21 = 1823443072U;
unsigned char var_22 = (unsigned char)121;
short var_23 = (short)-8602;
short var_24 = (short)12790;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
