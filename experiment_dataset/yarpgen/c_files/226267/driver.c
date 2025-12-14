#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31407;
unsigned char var_1 = (unsigned char)78;
signed char var_2 = (signed char)-125;
unsigned short var_4 = (unsigned short)4907;
unsigned char var_5 = (unsigned char)229;
short var_9 = (short)2293;
unsigned char var_10 = (unsigned char)95;
unsigned short var_11 = (unsigned short)50952;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 937004576917680665ULL;
void init() {
}

void checksum() {
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
