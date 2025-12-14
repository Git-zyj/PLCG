#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-75;
unsigned int var_2 = 564339362U;
unsigned short var_3 = (unsigned short)59657;
long long int var_4 = -1168020580348353842LL;
unsigned short var_7 = (unsigned short)41432;
long long int var_8 = 8660639937161810905LL;
long long int var_9 = -7266247270761270638LL;
long long int var_11 = 3702908043249815424LL;
long long int var_12 = 249024819697178072LL;
int zero = 0;
long long int var_16 = 303191587015929394LL;
long long int var_17 = -4099354037689586432LL;
long long int var_18 = -8857756988047285789LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
