#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28352;
signed char var_2 = (signed char)11;
unsigned int var_4 = 3290403312U;
unsigned char var_7 = (unsigned char)156;
unsigned short var_8 = (unsigned short)7722;
unsigned short var_9 = (unsigned short)3317;
unsigned long long int var_10 = 631186735855181769ULL;
int zero = 0;
signed char var_11 = (signed char)32;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-116;
signed char var_14 = (signed char)104;
void init() {
}

void checksum() {
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
