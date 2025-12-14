#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)244;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 6917864848075246754ULL;
unsigned short var_5 = (unsigned short)54885;
unsigned long long int var_6 = 6539024271843119194ULL;
unsigned int var_9 = 1111732805U;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)187;
int zero = 0;
signed char var_14 = (signed char)34;
signed char var_15 = (signed char)-71;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
