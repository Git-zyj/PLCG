#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2573429517U;
unsigned long long int var_2 = 14247207876209035841ULL;
signed char var_3 = (signed char)125;
unsigned long long int var_5 = 12358026909452464027ULL;
unsigned char var_7 = (unsigned char)163;
long long int var_8 = 2518366450547864944LL;
short var_9 = (short)-21518;
unsigned long long int var_11 = 5942204430396254251ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = -1143130973;
void init() {
}

void checksum() {
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
