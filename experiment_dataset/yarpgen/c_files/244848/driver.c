#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22434;
signed char var_2 = (signed char)42;
unsigned char var_3 = (unsigned char)237;
unsigned char var_4 = (unsigned char)55;
long long int var_5 = 1983626294623321451LL;
unsigned char var_6 = (unsigned char)106;
short var_7 = (short)-2039;
unsigned long long int var_9 = 18375517975992004968ULL;
unsigned short var_10 = (unsigned short)25217;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 1779257098U;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3068204705U;
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
