#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2565010864U;
long long int var_3 = 5961630690893357417LL;
long long int var_6 = 3712665353636332200LL;
unsigned char var_9 = (unsigned char)205;
int zero = 0;
unsigned long long int var_10 = 286100653778942847ULL;
_Bool var_11 = (_Bool)0;
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
