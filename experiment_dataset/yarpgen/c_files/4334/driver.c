#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-13;
unsigned short var_1 = (unsigned short)10145;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)19;
long long int var_7 = -8397433900852876460LL;
int var_8 = 213105833;
unsigned short var_10 = (unsigned short)51366;
unsigned char var_12 = (unsigned char)116;
int zero = 0;
signed char var_13 = (signed char)127;
unsigned long long int var_14 = 1509017147953225649ULL;
unsigned short var_15 = (unsigned short)14879;
int var_16 = -1788723031;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
