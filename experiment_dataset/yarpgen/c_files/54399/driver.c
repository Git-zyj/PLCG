#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_3 = (short)-6516;
unsigned long long int var_6 = 2870088573228449716ULL;
unsigned char var_7 = (unsigned char)196;
unsigned long long int var_11 = 6961833949098496682ULL;
int zero = 0;
long long int var_12 = 8750340523196854175LL;
long long int var_13 = -7964403890303087720LL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
