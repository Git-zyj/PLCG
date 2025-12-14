#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1306495840;
long long int var_4 = 3820632668995945315LL;
signed char var_9 = (signed char)10;
unsigned long long int var_10 = 2309867739527530012ULL;
unsigned long long int var_15 = 15917211660203961497ULL;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-15150;
int zero = 0;
unsigned char var_20 = (unsigned char)68;
unsigned long long int var_21 = 11909312426989920571ULL;
unsigned short var_22 = (unsigned short)21829;
_Bool var_23 = (_Bool)0;
int var_24 = 740580138;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
