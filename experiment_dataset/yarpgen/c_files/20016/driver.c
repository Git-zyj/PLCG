#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = 7486028986608568506LL;
unsigned short var_9 = (unsigned short)34862;
int zero = 0;
int var_11 = 1684618017;
long long int var_12 = 446216352745205098LL;
unsigned short var_13 = (unsigned short)46572;
void init() {
}

void checksum() {
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
