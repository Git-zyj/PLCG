#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-11269;
int var_5 = -1536190461;
int var_6 = -1677418603;
int var_7 = -1791453420;
signed char var_8 = (signed char)91;
int var_9 = 675660921;
unsigned long long int var_11 = 17533223600833646439ULL;
int var_12 = -77043233;
int var_14 = -460622170;
unsigned int var_15 = 3476481541U;
unsigned short var_16 = (unsigned short)60282;
signed char var_17 = (signed char)-2;
unsigned char var_18 = (unsigned char)22;
int var_19 = -1162083849;
int zero = 0;
int var_20 = -65430307;
short var_21 = (short)-3129;
unsigned char var_22 = (unsigned char)183;
signed char var_23 = (signed char)-1;
short var_24 = (short)-18524;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
