#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38907;
unsigned long long int var_2 = 6318959147002718266ULL;
unsigned int var_3 = 1902193223U;
signed char var_4 = (signed char)-94;
int var_10 = -797802494;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-70;
long long int var_15 = -2241905874251598793LL;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-27669;
int zero = 0;
long long int var_20 = -2485633370961312673LL;
int var_21 = 1157136768;
signed char var_22 = (signed char)-118;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
