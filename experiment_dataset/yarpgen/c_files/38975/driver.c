#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)22933;
_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)53741;
unsigned long long int var_9 = 17685160639598290077ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)222;
unsigned short var_11 = (unsigned short)26317;
short var_12 = (short)17441;
unsigned long long int var_13 = 15697533162416882683ULL;
unsigned long long int var_14 = 9488100468796673931ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
