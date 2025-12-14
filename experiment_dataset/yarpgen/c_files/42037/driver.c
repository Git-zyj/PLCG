#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16029409106972914516ULL;
unsigned char var_6 = (unsigned char)82;
unsigned int var_8 = 3774281805U;
int var_9 = -1995254980;
int zero = 0;
signed char var_12 = (signed char)54;
unsigned int var_13 = 2562380031U;
void init() {
}

void checksum() {
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
