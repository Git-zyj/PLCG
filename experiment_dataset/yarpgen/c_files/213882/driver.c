#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)59;
short var_5 = (short)6538;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-11574;
unsigned long long int var_9 = 17387625350367979105ULL;
unsigned short var_10 = (unsigned short)51632;
unsigned short var_12 = (unsigned short)52938;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-117;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-15861;
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
