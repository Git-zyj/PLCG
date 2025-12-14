#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2698776263884961288LL;
unsigned short var_3 = (unsigned short)5685;
_Bool var_5 = (_Bool)0;
long long int var_6 = 506675107885439981LL;
long long int var_7 = -5638240919634429766LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 8613712530629198159ULL;
unsigned long long int var_11 = 17942460080002639261ULL;
unsigned long long int var_13 = 6452033857247535019ULL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_17 = 2858922830502013442ULL;
unsigned char var_19 = (unsigned char)62;
int zero = 0;
int var_20 = 1314531471;
int var_21 = 285769645;
int var_22 = -1990118227;
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
