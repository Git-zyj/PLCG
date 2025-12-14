#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3241707084U;
unsigned int var_7 = 954990562U;
unsigned long long int var_10 = 3999868847999794890ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)33670;
unsigned long long int var_20 = 85882380398066169ULL;
unsigned long long int var_21 = 9060793420274144001ULL;
void init() {
}

void checksum() {
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
