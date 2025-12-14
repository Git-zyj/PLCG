#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6440516343066173883LL;
unsigned int var_3 = 29618676U;
unsigned long long int var_7 = 12434657664007209721ULL;
unsigned long long int var_8 = 7312813973227580194ULL;
unsigned int var_13 = 723893596U;
unsigned long long int var_16 = 931583112274088477ULL;
unsigned int var_17 = 3352712728U;
int zero = 0;
unsigned char var_18 = (unsigned char)162;
unsigned char var_19 = (unsigned char)208;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
