#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16447028684475298791ULL;
int var_1 = 261472672;
unsigned short var_4 = (unsigned short)45523;
int var_14 = 760295621;
int zero = 0;
unsigned long long int var_18 = 17619963164130321906ULL;
unsigned long long int var_19 = 17621979502124075877ULL;
int var_20 = 988511301;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
