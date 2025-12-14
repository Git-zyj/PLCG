#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -8464549217584555931LL;
long long int var_8 = -8470156008772884227LL;
int var_9 = -1006205667;
int zero = 0;
signed char var_13 = (signed char)-89;
unsigned char var_14 = (unsigned char)75;
int var_15 = 2091165957;
unsigned char var_16 = (unsigned char)142;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
