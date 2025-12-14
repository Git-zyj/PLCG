#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15818027576358777751ULL;
unsigned long long int var_5 = 5125277163140814375ULL;
_Bool var_6 = (_Bool)0;
int var_7 = -1254491213;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 9165205122430064662ULL;
int zero = 0;
int var_12 = 519048396;
int var_13 = 14223116;
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
