#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2678574287609635259ULL;
signed char var_2 = (signed char)-45;
signed char var_3 = (signed char)50;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)102;
unsigned short var_7 = (unsigned short)50591;
long long int var_8 = -5950188029221969429LL;
unsigned short var_9 = (unsigned short)16590;
unsigned int var_10 = 156665409U;
int zero = 0;
unsigned short var_13 = (unsigned short)17581;
unsigned long long int var_14 = 15117125347241066688ULL;
unsigned int var_15 = 2416767778U;
unsigned short var_16 = (unsigned short)59093;
unsigned char var_17 = (unsigned char)206;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
