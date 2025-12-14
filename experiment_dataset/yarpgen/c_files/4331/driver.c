#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)74;
unsigned short var_4 = (unsigned short)5662;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 2088249530U;
unsigned short var_11 = (unsigned short)22972;
unsigned long long int var_13 = 16606579935509453413ULL;
signed char var_14 = (signed char)-19;
_Bool var_15 = (_Bool)1;
unsigned short var_17 = (unsigned short)61159;
unsigned int var_18 = 2174777940U;
int zero = 0;
int var_19 = -1290582221;
signed char var_20 = (signed char)-72;
unsigned long long int var_21 = 9208762695779791183ULL;
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
