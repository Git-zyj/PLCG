#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 292844457;
long long int var_2 = -8809907182134172099LL;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)106;
short var_7 = (short)-21728;
int var_8 = -1261280728;
int var_9 = 900263914;
int var_11 = 665408568;
unsigned long long int var_15 = 10802994158607004702ULL;
int zero = 0;
unsigned int var_16 = 8272098U;
int var_17 = -1681667132;
unsigned int var_18 = 3096960689U;
int var_19 = 1116810066;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
