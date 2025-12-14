#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7912912459831118084LL;
unsigned short var_1 = (unsigned short)492;
unsigned int var_2 = 2222276507U;
int var_3 = 1367851565;
short var_5 = (short)-6775;
signed char var_8 = (signed char)-2;
int zero = 0;
unsigned long long int var_10 = 9596184893163468190ULL;
unsigned char var_11 = (unsigned char)8;
short var_12 = (short)26393;
long long int var_13 = 6424043985320733302LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
