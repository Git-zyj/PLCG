#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-8728;
unsigned long long int var_5 = 5535398021798334256ULL;
unsigned long long int var_7 = 8831293822304447160ULL;
unsigned char var_14 = (unsigned char)75;
int zero = 0;
unsigned int var_15 = 3728753887U;
_Bool var_16 = (_Bool)0;
int var_17 = -868791380;
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
