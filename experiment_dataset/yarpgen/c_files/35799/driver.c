#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3289817157641992765LL;
unsigned int var_10 = 1812115164U;
unsigned char var_15 = (unsigned char)68;
int zero = 0;
short var_19 = (short)21138;
short var_20 = (short)19855;
_Bool var_21 = (_Bool)0;
short var_22 = (short)14767;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
