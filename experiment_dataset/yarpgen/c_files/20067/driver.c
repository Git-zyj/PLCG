#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7548500707843995637ULL;
unsigned char var_4 = (unsigned char)66;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
int var_12 = 1172557688;
unsigned short var_18 = (unsigned short)9771;
long long int var_19 = 6870925036349952240LL;
int zero = 0;
short var_20 = (short)-17879;
short var_21 = (short)27942;
void init() {
}

void checksum() {
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
