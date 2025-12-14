#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4084563460793167270LL;
_Bool var_2 = (_Bool)0;
unsigned short var_6 = (unsigned short)19076;
unsigned int var_7 = 4140472139U;
short var_9 = (short)29613;
signed char var_10 = (signed char)5;
unsigned long long int var_12 = 17810136043711889425ULL;
unsigned long long int var_13 = 3272749830488435540ULL;
unsigned char var_14 = (unsigned char)195;
int zero = 0;
unsigned long long int var_15 = 14631430982925085113ULL;
unsigned long long int var_16 = 2854804570672030443ULL;
int var_17 = -1154739899;
void init() {
}

void checksum() {
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
