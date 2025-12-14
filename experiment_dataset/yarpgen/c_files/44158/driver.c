#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8631834718054863912LL;
int var_2 = -83638588;
unsigned long long int var_4 = 10336680844994006535ULL;
unsigned char var_5 = (unsigned char)210;
int var_7 = -745619929;
unsigned char var_9 = (unsigned char)218;
unsigned int var_10 = 451776655U;
int var_12 = -1612361539;
long long int var_13 = -7920010805474986985LL;
_Bool var_15 = (_Bool)1;
long long int var_16 = 4090843458989055109LL;
int zero = 0;
long long int var_19 = -382288095809094176LL;
unsigned char var_20 = (unsigned char)66;
long long int var_21 = 6762434866816991291LL;
long long int var_22 = 1762830870556120520LL;
long long int var_23 = 5412884966595856026LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
