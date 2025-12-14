#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27981;
unsigned long long int var_2 = 5985266026640707771ULL;
unsigned long long int var_4 = 11927994595746030283ULL;
unsigned long long int var_6 = 11958462956855920518ULL;
unsigned short var_12 = (unsigned short)32441;
unsigned char var_13 = (unsigned char)54;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_15 = -962440691930527053LL;
unsigned short var_16 = (unsigned short)9771;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
