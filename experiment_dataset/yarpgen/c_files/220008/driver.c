#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)106;
short var_5 = (short)-19056;
unsigned int var_6 = 1000415664U;
short var_7 = (short)4762;
_Bool var_11 = (_Bool)0;
signed char var_18 = (signed char)-62;
int zero = 0;
signed char var_19 = (signed char)117;
long long int var_20 = -1411210480836262539LL;
short var_21 = (short)-7457;
unsigned int var_22 = 3340041731U;
unsigned char var_23 = (unsigned char)88;
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
