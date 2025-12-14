#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)50;
short var_1 = (short)20204;
signed char var_2 = (signed char)-121;
unsigned char var_3 = (unsigned char)68;
unsigned long long int var_4 = 7550184189412643610ULL;
unsigned char var_5 = (unsigned char)215;
unsigned long long int var_6 = 15112555810809030728ULL;
signed char var_7 = (signed char)31;
unsigned long long int var_8 = 12922248130873826214ULL;
unsigned long long int var_9 = 18141361502441434112ULL;
unsigned char var_10 = (unsigned char)112;
int zero = 0;
short var_11 = (short)-31608;
signed char var_12 = (signed char)-76;
unsigned long long int var_13 = 17390160412653314301ULL;
unsigned long long int var_14 = 1151749095281694875ULL;
unsigned long long int var_15 = 7428220203273101171ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
