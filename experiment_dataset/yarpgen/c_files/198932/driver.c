#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2919106756889240557ULL;
int var_2 = -1035024579;
unsigned long long int var_3 = 3765659537837349841ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 17228980467935294576ULL;
short var_7 = (short)19292;
unsigned long long int var_8 = 7906729942184764045ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)252;
unsigned long long int var_11 = 16689201020229652950ULL;
short var_12 = (short)8223;
unsigned long long int var_13 = 15932244184938557801ULL;
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
