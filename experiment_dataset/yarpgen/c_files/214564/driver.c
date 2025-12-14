#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44685;
unsigned int var_2 = 439789307U;
int var_4 = 1039297748;
long long int var_8 = -7300274696037752021LL;
int var_9 = 480231219;
unsigned char var_10 = (unsigned char)60;
int zero = 0;
signed char var_11 = (signed char)-45;
signed char var_12 = (signed char)62;
int var_13 = -620393492;
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
