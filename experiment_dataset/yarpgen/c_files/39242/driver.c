#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5933999158840465539ULL;
unsigned int var_3 = 2427832892U;
unsigned int var_4 = 2888922234U;
unsigned char var_5 = (unsigned char)89;
unsigned int var_8 = 3982913675U;
long long int var_10 = -949835658068741209LL;
int var_11 = 243246921;
signed char var_12 = (signed char)113;
short var_13 = (short)13608;
unsigned int var_18 = 107561165U;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-61;
int var_22 = -148688873;
long long int var_23 = -7468180754133121069LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
