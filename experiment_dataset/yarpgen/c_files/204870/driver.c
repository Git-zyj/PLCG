#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7993010769081384035LL;
unsigned short var_8 = (unsigned short)15671;
long long int var_11 = -9145117535334515183LL;
unsigned char var_12 = (unsigned char)214;
short var_13 = (short)2313;
short var_14 = (short)-2813;
int zero = 0;
unsigned short var_16 = (unsigned short)52272;
long long int var_17 = 9146118894228351172LL;
int var_18 = 818838657;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
