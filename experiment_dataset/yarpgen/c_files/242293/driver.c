#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)148;
int var_1 = -1864880117;
long long int var_3 = 2054358091410171281LL;
unsigned char var_5 = (unsigned char)84;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)140;
unsigned long long int var_8 = 7746876475827282061ULL;
unsigned short var_9 = (unsigned short)52350;
short var_13 = (short)-11889;
short var_14 = (short)10764;
int var_16 = -39019725;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 3353190154888793511ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
