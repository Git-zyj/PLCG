#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 12699107080703268733ULL;
unsigned long long int var_8 = 12206602060926484287ULL;
unsigned long long int var_9 = 17540936944362403455ULL;
unsigned long long int var_14 = 17869840821742604217ULL;
unsigned char var_15 = (unsigned char)102;
int zero = 0;
unsigned int var_18 = 4063495871U;
unsigned char var_19 = (unsigned char)117;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
