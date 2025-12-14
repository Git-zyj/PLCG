#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2636239916801887060LL;
unsigned short var_3 = (unsigned short)19855;
int var_4 = -846737828;
short var_5 = (short)26405;
unsigned long long int var_8 = 10092949949033462179ULL;
int zero = 0;
long long int var_10 = -6077235729103732479LL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 4232854108U;
_Bool var_13 = (_Bool)1;
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
