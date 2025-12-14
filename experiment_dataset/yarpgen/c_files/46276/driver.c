#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)41513;
short var_3 = (short)976;
signed char var_4 = (signed char)-121;
unsigned short var_5 = (unsigned short)26096;
int var_6 = -1370739877;
long long int var_7 = 5529462363870392873LL;
int zero = 0;
signed char var_10 = (signed char)8;
unsigned short var_11 = (unsigned short)7202;
signed char var_12 = (signed char)9;
unsigned short var_13 = (unsigned short)16168;
signed char var_14 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
