#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2109142620;
_Bool var_11 = (_Bool)1;
int var_12 = 608781404;
int var_14 = 531918400;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)92;
unsigned long long int var_18 = 12519026768537515552ULL;
unsigned long long int var_19 = 6433765694472747890ULL;
unsigned int var_20 = 3381905392U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
