#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9857511913785581547ULL;
unsigned int var_2 = 2172123865U;
unsigned char var_4 = (unsigned char)154;
unsigned long long int var_5 = 3400901051407700545ULL;
int var_6 = 1472827441;
long long int var_8 = -4530154695552572367LL;
long long int var_9 = 137492184518133415LL;
int zero = 0;
unsigned long long int var_10 = 10426917941199735335ULL;
unsigned int var_11 = 3099061956U;
unsigned long long int var_12 = 534853002502768260ULL;
unsigned long long int var_13 = 8472640037125383911ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
