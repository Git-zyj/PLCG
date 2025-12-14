#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-11124;
unsigned long long int var_7 = 4645441791296651397ULL;
unsigned char var_10 = (unsigned char)249;
unsigned long long int var_13 = 11514274746604237545ULL;
int zero = 0;
unsigned int var_15 = 3032454281U;
unsigned long long int var_16 = 7975461845221265784ULL;
long long int var_17 = -4198580398098395587LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
