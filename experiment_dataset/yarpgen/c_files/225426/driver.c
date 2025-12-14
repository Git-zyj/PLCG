#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4149;
unsigned char var_7 = (unsigned char)11;
signed char var_10 = (signed char)-34;
signed char var_11 = (signed char)-72;
unsigned short var_12 = (unsigned short)11891;
short var_15 = (short)27628;
unsigned char var_18 = (unsigned char)28;
int zero = 0;
signed char var_20 = (signed char)-37;
unsigned short var_21 = (unsigned short)32777;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 8540364341670724951ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
