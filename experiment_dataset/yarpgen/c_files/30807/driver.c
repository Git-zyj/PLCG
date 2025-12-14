#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2885739148U;
unsigned long long int var_1 = 456082461020847700ULL;
unsigned char var_4 = (unsigned char)228;
signed char var_9 = (signed char)-87;
int zero = 0;
int var_15 = 1040036907;
unsigned int var_16 = 926534665U;
signed char var_17 = (signed char)103;
unsigned int var_18 = 1245754953U;
void init() {
}

void checksum() {
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
