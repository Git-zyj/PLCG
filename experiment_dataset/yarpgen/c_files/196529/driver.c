#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8759087223488975439LL;
short var_1 = (short)-3307;
long long int var_2 = 2154143984062278060LL;
long long int var_3 = -4204436016390390083LL;
int var_4 = 2122807083;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)14722;
int zero = 0;
int var_10 = -379748193;
short var_11 = (short)-27749;
unsigned long long int var_12 = 3289143816584465702ULL;
int var_13 = -135009078;
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
