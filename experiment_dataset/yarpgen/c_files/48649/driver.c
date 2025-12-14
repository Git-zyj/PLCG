#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2123014321U;
long long int var_6 = -2651478876949999527LL;
long long int var_10 = 8509736984583827303LL;
_Bool var_11 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)23753;
long long int var_19 = -496274057212174249LL;
int zero = 0;
unsigned char var_20 = (unsigned char)167;
unsigned int var_21 = 579580936U;
unsigned short var_22 = (unsigned short)35511;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
