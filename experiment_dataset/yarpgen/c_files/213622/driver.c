#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8773100662957339315LL;
int var_4 = -995597254;
int var_13 = 1713614803;
int var_15 = 208488095;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -4176657533093999060LL;
int var_21 = 35175667;
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
