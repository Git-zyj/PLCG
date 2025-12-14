#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2254;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-6077;
short var_3 = (short)20263;
short var_4 = (short)-5781;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
short var_7 = (short)29341;
short var_8 = (short)22205;
unsigned char var_9 = (unsigned char)16;
int zero = 0;
short var_10 = (short)16981;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-13552;
short var_13 = (short)27269;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
