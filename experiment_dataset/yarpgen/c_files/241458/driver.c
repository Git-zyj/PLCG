#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)229;
unsigned char var_7 = (unsigned char)167;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)10;
int zero = 0;
int var_10 = -889622776;
unsigned long long int var_11 = 4103828168027749509ULL;
unsigned int var_12 = 3956307985U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
