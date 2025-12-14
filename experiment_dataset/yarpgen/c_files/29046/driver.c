#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)153;
unsigned short var_4 = (unsigned short)6661;
unsigned char var_6 = (unsigned char)210;
long long int var_9 = -5774445174565387048LL;
long long int var_11 = -136657868818997856LL;
long long int var_14 = -8622380322676031881LL;
int var_16 = -118010210;
int zero = 0;
long long int var_17 = 1733549167567954248LL;
long long int var_18 = -4758302337276899796LL;
unsigned long long int var_19 = 1479788341146118200ULL;
long long int var_20 = -446052517932023947LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
