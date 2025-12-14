#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13179197811838391923ULL;
signed char var_4 = (signed char)70;
short var_9 = (short)-24071;
short var_10 = (short)-9524;
unsigned long long int var_11 = 7605636726749702336ULL;
short var_16 = (short)31960;
int zero = 0;
unsigned long long int var_19 = 15805495310549025581ULL;
unsigned long long int var_20 = 8451410489691821368ULL;
unsigned short var_21 = (unsigned short)61389;
short var_22 = (short)13448;
long long int var_23 = 5254530639195286835LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
