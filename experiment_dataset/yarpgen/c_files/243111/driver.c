#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_4 = (unsigned char)127;
long long int var_5 = -2118511152429401920LL;
long long int var_6 = -2221823319349632165LL;
long long int var_7 = 6701063141808978978LL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)47;
int zero = 0;
int var_10 = 945427301;
_Bool var_11 = (_Bool)1;
long long int var_12 = 2794067482955659354LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
