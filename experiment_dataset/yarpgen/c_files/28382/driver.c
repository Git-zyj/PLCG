#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-30143;
unsigned long long int var_3 = 3550247133750255581ULL;
unsigned int var_4 = 1920723181U;
_Bool var_7 = (_Bool)0;
short var_8 = (short)11561;
int var_9 = -279978666;
signed char var_12 = (signed char)-10;
unsigned char var_14 = (unsigned char)7;
signed char var_15 = (signed char)91;
int zero = 0;
unsigned char var_16 = (unsigned char)111;
long long int var_17 = 5628258171786187360LL;
void init() {
}

void checksum() {
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
