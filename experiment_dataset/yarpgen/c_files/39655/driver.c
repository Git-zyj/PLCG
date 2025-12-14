#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)32;
long long int var_1 = 6213419175987908156LL;
unsigned short var_2 = (unsigned short)63289;
int var_3 = 380714850;
unsigned int var_4 = 1360502190U;
signed char var_5 = (signed char)-13;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 2069793932U;
signed char var_11 = (signed char)-74;
signed char var_12 = (signed char)-28;
int zero = 0;
signed char var_13 = (signed char)25;
signed char var_14 = (signed char)-85;
_Bool var_15 = (_Bool)1;
long long int var_16 = -1310800266253549640LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
