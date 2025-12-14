#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)45;
unsigned int var_4 = 3298004351U;
int var_6 = -2118171030;
unsigned long long int var_8 = 10341481861558578321ULL;
long long int var_9 = -137899732126362833LL;
int zero = 0;
signed char var_12 = (signed char)-58;
unsigned char var_13 = (unsigned char)150;
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
