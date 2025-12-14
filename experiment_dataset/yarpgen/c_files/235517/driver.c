#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-50;
unsigned short var_6 = (unsigned short)44012;
unsigned int var_9 = 3963900624U;
int var_10 = -1684958691;
int var_12 = -457047987;
int zero = 0;
signed char var_14 = (signed char)-119;
signed char var_15 = (signed char)10;
signed char var_16 = (signed char)102;
signed char var_17 = (signed char)-48;
unsigned char var_18 = (unsigned char)139;
unsigned char var_19 = (unsigned char)190;
long long int var_20 = -2796113954207936926LL;
long long int var_21 = 1676202649709887225LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
