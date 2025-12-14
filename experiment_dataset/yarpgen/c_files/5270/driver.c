#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4275518341U;
long long int var_5 = 3032858209628917760LL;
signed char var_6 = (signed char)-78;
short var_7 = (short)-25884;
unsigned char var_8 = (unsigned char)34;
short var_10 = (short)291;
unsigned short var_11 = (unsigned short)57099;
int zero = 0;
signed char var_12 = (signed char)73;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)223;
void init() {
}

void checksum() {
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
