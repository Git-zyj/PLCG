#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1509902867844683072LL;
short var_1 = (short)25406;
signed char var_2 = (signed char)-65;
unsigned char var_3 = (unsigned char)95;
unsigned short var_4 = (unsigned short)4126;
unsigned char var_5 = (unsigned char)160;
unsigned long long int var_6 = 11212302475952303357ULL;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-120;
short var_10 = (short)-20351;
int zero = 0;
long long int var_11 = 2128924158177197534LL;
int var_12 = 288581330;
unsigned int var_13 = 4084275768U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
