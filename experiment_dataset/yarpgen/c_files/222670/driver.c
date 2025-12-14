#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20783;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-60;
short var_4 = (short)-27764;
long long int var_5 = -1727762078423879100LL;
unsigned short var_6 = (unsigned short)1971;
unsigned int var_7 = 2369117884U;
signed char var_8 = (signed char)127;
signed char var_9 = (signed char)106;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)222;
unsigned short var_12 = (unsigned short)17145;
long long int var_13 = 148730292779273537LL;
unsigned char var_14 = (unsigned char)19;
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
