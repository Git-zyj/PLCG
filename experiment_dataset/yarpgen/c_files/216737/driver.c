#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = 521854385;
unsigned char var_4 = (unsigned char)131;
unsigned int var_6 = 4057819564U;
unsigned long long int var_8 = 8776421859068864726ULL;
long long int var_12 = 8064825200876629055LL;
unsigned short var_15 = (unsigned short)63966;
unsigned short var_16 = (unsigned short)32769;
int zero = 0;
unsigned char var_18 = (unsigned char)228;
int var_19 = 281227206;
unsigned long long int var_20 = 15482164218346112239ULL;
unsigned char var_21 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
