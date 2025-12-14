#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13268793213565157743ULL;
unsigned char var_5 = (unsigned char)115;
unsigned long long int var_12 = 4249131997268719598ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)27788;
unsigned long long int var_14 = 4700234109047139790ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
