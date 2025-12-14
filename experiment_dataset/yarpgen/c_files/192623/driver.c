#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2094944374U;
unsigned short var_1 = (unsigned short)35596;
unsigned int var_2 = 239878153U;
unsigned short var_4 = (unsigned short)56914;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 2870189235352562242ULL;
unsigned short var_9 = (unsigned short)31030;
unsigned long long int var_13 = 9320488385586136463ULL;
int zero = 0;
unsigned long long int var_16 = 16862776863894990838ULL;
unsigned char var_17 = (unsigned char)203;
unsigned long long int var_18 = 2476107253342699630ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
