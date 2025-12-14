#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-27;
int var_7 = 1187520710;
int var_15 = -1152985722;
int zero = 0;
unsigned long long int var_20 = 5726139955943221946ULL;
signed char var_21 = (signed char)-70;
short var_22 = (short)15086;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
