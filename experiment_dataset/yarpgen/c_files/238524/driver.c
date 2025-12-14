#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8803273244518129454LL;
unsigned short var_2 = (unsigned short)63560;
long long int var_4 = -9211873309956282443LL;
long long int var_5 = 7588991295083620989LL;
int var_7 = 161483299;
int var_8 = 60275442;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-25268;
unsigned short var_11 = (unsigned short)21137;
signed char var_12 = (signed char)-46;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)58;
signed char var_17 = (signed char)-117;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
