#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1493683109U;
unsigned long long int var_3 = 9462031949407090355ULL;
signed char var_4 = (signed char)-15;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)3;
unsigned long long int var_8 = 8896457096048862329ULL;
int zero = 0;
signed char var_10 = (signed char)9;
long long int var_11 = -2497985439757373498LL;
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
