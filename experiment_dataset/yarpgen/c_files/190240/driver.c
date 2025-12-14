#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28364;
unsigned long long int var_1 = 6983591690050131055ULL;
long long int var_2 = -3832914738002569848LL;
signed char var_4 = (signed char)-45;
unsigned char var_6 = (unsigned char)204;
unsigned short var_7 = (unsigned short)25818;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_11 = 1891329711;
short var_12 = (short)-17200;
unsigned short var_13 = (unsigned short)56763;
unsigned long long int var_14 = 7977708439709579264ULL;
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
