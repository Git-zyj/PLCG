#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-96;
short var_6 = (short)26061;
short var_7 = (short)-11790;
_Bool var_9 = (_Bool)1;
signed char var_12 = (signed char)97;
long long int var_16 = -5477917489600010452LL;
int zero = 0;
unsigned char var_17 = (unsigned char)25;
long long int var_18 = -5051018251406065766LL;
unsigned long long int var_19 = 2301713233531637900ULL;
short var_20 = (short)8233;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
