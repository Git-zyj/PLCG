#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-26;
unsigned long long int var_11 = 13193732927918096188ULL;
unsigned char var_13 = (unsigned char)6;
unsigned char var_14 = (unsigned char)166;
signed char var_15 = (signed char)-104;
int zero = 0;
int var_17 = 589733501;
unsigned long long int var_18 = 8188551645378784578ULL;
void init() {
}

void checksum() {
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
