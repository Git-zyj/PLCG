#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11960407687591334664ULL;
int var_1 = 256549662;
int var_2 = -738036444;
unsigned char var_3 = (unsigned char)2;
unsigned long long int var_6 = 15837409630701415936ULL;
unsigned long long int var_7 = 349746292302710212ULL;
unsigned long long int var_8 = 16514591466606741865ULL;
unsigned long long int var_11 = 17077330244061978948ULL;
unsigned short var_15 = (unsigned short)52416;
unsigned int var_16 = 1555674813U;
int zero = 0;
signed char var_19 = (signed char)-20;
signed char var_20 = (signed char)-120;
short var_21 = (short)-4820;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
