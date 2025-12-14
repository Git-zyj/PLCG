#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8627395166109267588LL;
long long int var_2 = 5592792387148517735LL;
short var_3 = (short)-9336;
short var_4 = (short)8656;
signed char var_5 = (signed char)103;
signed char var_6 = (signed char)-58;
short var_9 = (short)-15011;
int var_11 = -1939479266;
int zero = 0;
signed char var_13 = (signed char)83;
long long int var_14 = -4075333796306505931LL;
signed char var_15 = (signed char)107;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
