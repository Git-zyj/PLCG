#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)53614;
int var_6 = -1260144712;
unsigned char var_7 = (unsigned char)20;
unsigned char var_8 = (unsigned char)166;
short var_9 = (short)31918;
unsigned long long int var_15 = 2466862672827513163ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-12128;
int var_21 = 1629259313;
void init() {
}

void checksum() {
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
