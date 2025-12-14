#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1056910339150643173LL;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 4055154648U;
long long int var_9 = 4945759638083417338LL;
int zero = 0;
unsigned char var_10 = (unsigned char)225;
short var_11 = (short)29661;
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
