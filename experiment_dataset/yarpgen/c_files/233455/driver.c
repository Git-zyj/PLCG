#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1596720566;
unsigned long long int var_6 = 5548962255566806575ULL;
int var_7 = -682281629;
int var_9 = 1010107389;
int zero = 0;
unsigned long long int var_12 = 11897872296866059801ULL;
unsigned long long int var_13 = 13547707133039844946ULL;
int var_14 = -1288230018;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
