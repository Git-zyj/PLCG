#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)122;
signed char var_1 = (signed char)8;
unsigned long long int var_4 = 3857228390392695750ULL;
long long int var_5 = -547499590624174493LL;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)97;
long long int var_16 = -3512692217340241596LL;
int zero = 0;
unsigned char var_17 = (unsigned char)250;
short var_18 = (short)13505;
int var_19 = 1049856988;
int var_20 = 1169876759;
long long int var_21 = -7927318620472561236LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
