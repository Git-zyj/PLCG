#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6087250717217741094LL;
long long int var_1 = -7205550207433290629LL;
long long int var_3 = -5225643344287258143LL;
long long int var_6 = -5801348973211768602LL;
unsigned long long int var_9 = 10150439986897709254ULL;
long long int var_11 = 2750214873181038839LL;
short var_13 = (short)-29862;
int zero = 0;
short var_14 = (short)-16339;
long long int var_15 = -75749447616427133LL;
long long int var_16 = 8999117907231995177LL;
long long int var_17 = 2550791400700888516LL;
short var_18 = (short)19676;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
