#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)38537;
short var_5 = (short)-27681;
short var_6 = (short)25855;
unsigned char var_7 = (unsigned char)216;
long long int var_8 = -2694371726242753461LL;
unsigned short var_9 = (unsigned short)51113;
signed char var_10 = (signed char)11;
int zero = 0;
signed char var_12 = (signed char)84;
unsigned char var_13 = (unsigned char)182;
unsigned short var_14 = (unsigned short)60233;
short var_15 = (short)9321;
short var_16 = (short)5047;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
