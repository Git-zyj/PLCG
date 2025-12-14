#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6059082306372904114LL;
unsigned int var_8 = 3808385024U;
long long int var_9 = -125054510746035072LL;
int zero = 0;
signed char var_14 = (signed char)-49;
unsigned char var_15 = (unsigned char)94;
int var_16 = 506236162;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
