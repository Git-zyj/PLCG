#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3905358491703325862LL;
signed char var_1 = (signed char)58;
signed char var_3 = (signed char)-56;
unsigned char var_4 = (unsigned char)86;
int var_5 = -1075358299;
long long int var_7 = 649330433433363948LL;
int var_10 = -1956857644;
short var_11 = (short)26683;
short var_15 = (short)-29005;
int zero = 0;
signed char var_17 = (signed char)64;
short var_18 = (short)-14512;
long long int var_19 = 6081329818014205885LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
