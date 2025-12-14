#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2453679689U;
int var_3 = 1712212215;
signed char var_5 = (signed char)-63;
signed char var_6 = (signed char)-37;
unsigned int var_7 = 3575368604U;
unsigned char var_9 = (unsigned char)211;
unsigned long long int var_10 = 8833744758359048678ULL;
unsigned char var_11 = (unsigned char)73;
long long int var_12 = -3884417590977230184LL;
long long int var_14 = 2876203352302208787LL;
unsigned char var_15 = (unsigned char)4;
int zero = 0;
long long int var_18 = 3087866197064891747LL;
unsigned char var_19 = (unsigned char)76;
unsigned short var_20 = (unsigned short)35525;
void init() {
}

void checksum() {
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
