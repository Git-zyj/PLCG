#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32709;
unsigned int var_5 = 2180825200U;
unsigned long long int var_7 = 10172937008199383390ULL;
int var_8 = 419712611;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 1724981731U;
unsigned short var_13 = (unsigned short)40343;
int var_15 = 1288898713;
unsigned char var_16 = (unsigned char)54;
int var_17 = 1725748571;
int zero = 0;
unsigned char var_19 = (unsigned char)136;
unsigned short var_20 = (unsigned short)17848;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
