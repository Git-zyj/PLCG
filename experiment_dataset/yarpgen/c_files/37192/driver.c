#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)221;
unsigned char var_3 = (unsigned char)106;
short var_4 = (short)17054;
unsigned long long int var_5 = 16609616033063734407ULL;
unsigned short var_6 = (unsigned short)44377;
signed char var_8 = (signed char)-104;
unsigned short var_9 = (unsigned short)53206;
short var_11 = (short)-27864;
short var_12 = (short)-25469;
int var_13 = 1626782464;
int zero = 0;
unsigned int var_14 = 2933721786U;
unsigned char var_15 = (unsigned char)239;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
