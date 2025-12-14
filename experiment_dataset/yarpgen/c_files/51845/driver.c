#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2432612499521430837LL;
unsigned short var_3 = (unsigned short)4285;
long long int var_4 = 1940594602011651704LL;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)25;
int zero = 0;
unsigned char var_10 = (unsigned char)165;
unsigned short var_11 = (unsigned short)44374;
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
