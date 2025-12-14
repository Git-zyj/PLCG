#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17503;
short var_4 = (short)-24012;
signed char var_5 = (signed char)-68;
signed char var_6 = (signed char)10;
short var_7 = (short)17989;
unsigned long long int var_9 = 5899133486865485770ULL;
unsigned long long int var_11 = 5191759118064454578ULL;
unsigned long long int var_12 = 6638648225739193557ULL;
unsigned long long int var_13 = 6148209181373915707ULL;
signed char var_15 = (signed char)-16;
int zero = 0;
signed char var_17 = (signed char)2;
long long int var_18 = -4361283853702826827LL;
long long int var_19 = 7849398547271410539LL;
unsigned long long int var_20 = 13218556464197524123ULL;
short var_21 = (short)-4911;
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
