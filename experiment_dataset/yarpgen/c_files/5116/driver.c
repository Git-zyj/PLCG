#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23601;
int var_1 = 321915377;
unsigned char var_4 = (unsigned char)19;
unsigned long long int var_5 = 222487526561183505ULL;
unsigned char var_8 = (unsigned char)107;
short var_10 = (short)10867;
_Bool var_11 = (_Bool)0;
short var_16 = (short)23605;
int zero = 0;
long long int var_19 = -8776234023880980735LL;
long long int var_20 = 7622003601831625748LL;
unsigned int var_21 = 733104049U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
