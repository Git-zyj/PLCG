#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -9056331483281596562LL;
long long int var_3 = 3977666532028715781LL;
long long int var_4 = -5491688381796898386LL;
long long int var_5 = 1919219149661391947LL;
long long int var_6 = -6250110102253358530LL;
long long int var_9 = -3125369060278618906LL;
int zero = 0;
long long int var_10 = -828218423947164791LL;
long long int var_11 = 3046576425608324568LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
