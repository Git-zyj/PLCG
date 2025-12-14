#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8036731626851429560LL;
unsigned short var_1 = (unsigned short)36094;
unsigned short var_2 = (unsigned short)12089;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)39;
unsigned char var_6 = (unsigned char)150;
long long int var_7 = 6450743393349913517LL;
unsigned char var_8 = (unsigned char)99;
long long int var_10 = 7999294014193616908LL;
unsigned int var_13 = 199915473U;
int zero = 0;
long long int var_17 = 2783556266339165843LL;
signed char var_18 = (signed char)46;
long long int var_19 = -8289332414901741079LL;
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
