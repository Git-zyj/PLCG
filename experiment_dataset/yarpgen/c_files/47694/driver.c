#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1937054713597248288ULL;
short var_1 = (short)-12503;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1950141228U;
unsigned int var_4 = 3732010131U;
int var_5 = 1495841256;
unsigned long long int var_6 = 7613717198559614218ULL;
unsigned long long int var_7 = 9103731021038170295ULL;
unsigned short var_8 = (unsigned short)31369;
unsigned int var_9 = 626019571U;
unsigned short var_10 = (unsigned short)497;
int zero = 0;
unsigned long long int var_11 = 4005262770036937611ULL;
unsigned char var_12 = (unsigned char)241;
int var_13 = -744654165;
unsigned int var_14 = 3679514627U;
int var_15 = -333428090;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
