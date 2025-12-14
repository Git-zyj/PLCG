#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7008584608079519344LL;
unsigned long long int var_1 = 15714015547740259437ULL;
unsigned char var_2 = (unsigned char)139;
long long int var_4 = 7473893175425893901LL;
unsigned long long int var_5 = 15489871612982845489ULL;
long long int var_7 = 3401420055949487665LL;
unsigned int var_8 = 3045425448U;
int zero = 0;
unsigned char var_10 = (unsigned char)246;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)129;
long long int var_13 = 6210991832700961831LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
