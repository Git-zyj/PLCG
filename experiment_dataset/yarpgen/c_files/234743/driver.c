#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)138;
signed char var_6 = (signed char)-24;
int var_11 = -759778998;
signed char var_13 = (signed char)-17;
int zero = 0;
unsigned int var_17 = 3726733470U;
long long int var_18 = -1759009795298176020LL;
long long int var_19 = -741137174417333277LL;
unsigned short var_20 = (unsigned short)5819;
signed char var_21 = (signed char)-73;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
