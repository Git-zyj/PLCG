#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-8;
signed char var_5 = (signed char)-34;
signed char var_7 = (signed char)-58;
unsigned char var_8 = (unsigned char)85;
unsigned char var_9 = (unsigned char)130;
int var_11 = 1220650312;
signed char var_12 = (signed char)-88;
unsigned long long int var_14 = 2364441480302767986ULL;
unsigned short var_15 = (unsigned short)53858;
unsigned long long int var_16 = 14621496620391155510ULL;
int zero = 0;
signed char var_17 = (signed char)-114;
unsigned char var_18 = (unsigned char)145;
unsigned char var_19 = (unsigned char)149;
signed char var_20 = (signed char)-4;
signed char var_21 = (signed char)82;
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
