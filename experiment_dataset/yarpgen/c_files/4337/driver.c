#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-6927;
unsigned long long int var_9 = 15908557796657116181ULL;
long long int var_13 = -6185366255459825230LL;
_Bool var_14 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)61487;
unsigned long long int var_19 = 17995919274068994035ULL;
unsigned short var_20 = (unsigned short)36270;
void init() {
}

void checksum() {
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
