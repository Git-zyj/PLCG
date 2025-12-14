#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)107;
unsigned long long int var_8 = 15599145518031396792ULL;
unsigned long long int var_9 = 16805051866261721442ULL;
int zero = 0;
unsigned long long int var_10 = 13812591714957566382ULL;
unsigned char var_11 = (unsigned char)235;
unsigned int var_12 = 561709845U;
unsigned char var_13 = (unsigned char)180;
signed char var_14 = (signed char)-74;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
