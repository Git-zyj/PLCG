#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 13634349962172096705ULL;
int zero = 0;
int var_18 = -458632264;
unsigned short var_19 = (unsigned short)50418;
unsigned short var_20 = (unsigned short)54384;
unsigned long long int var_21 = 9728487389128401145ULL;
unsigned short var_22 = (unsigned short)64285;
unsigned short var_23 = (unsigned short)31560;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
