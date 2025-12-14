#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-33;
signed char var_1 = (signed char)64;
int var_2 = -307204568;
unsigned long long int var_3 = 13344399886213126640ULL;
int var_5 = -1351976001;
unsigned short var_12 = (unsigned short)17368;
int var_15 = -606136991;
signed char var_16 = (signed char)-118;
signed char var_17 = (signed char)-33;
int zero = 0;
unsigned long long int var_20 = 2604660053257893229ULL;
unsigned long long int var_21 = 6554197049084897709ULL;
void init() {
}

void checksum() {
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
