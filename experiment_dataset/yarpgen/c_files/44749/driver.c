#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)44;
long long int var_3 = -5433798633802391449LL;
unsigned short var_6 = (unsigned short)12541;
signed char var_8 = (signed char)120;
unsigned int var_10 = 421731877U;
_Bool var_13 = (_Bool)0;
unsigned char var_15 = (unsigned char)239;
int var_16 = 1208965037;
signed char var_18 = (signed char)-116;
int zero = 0;
long long int var_20 = 771349550527618036LL;
unsigned char var_21 = (unsigned char)184;
unsigned long long int var_22 = 17863683966982277834ULL;
unsigned char var_23 = (unsigned char)164;
void init() {
}

void checksum() {
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
