#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2065395628;
short var_1 = (short)-2809;
unsigned long long int var_2 = 17016196206298002242ULL;
short var_3 = (short)-16440;
signed char var_4 = (signed char)73;
_Bool var_5 = (_Bool)0;
unsigned char var_9 = (unsigned char)165;
long long int var_10 = 6992197789995082993LL;
int zero = 0;
unsigned long long int var_18 = 17444674194107928027ULL;
short var_19 = (short)-28574;
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
