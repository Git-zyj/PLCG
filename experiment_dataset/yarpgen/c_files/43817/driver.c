#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60091;
unsigned long long int var_4 = 155028449062164092ULL;
unsigned char var_5 = (unsigned char)186;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-28425;
int var_14 = 932349199;
int zero = 0;
unsigned int var_15 = 1809667670U;
unsigned int var_16 = 2907871118U;
unsigned short var_17 = (unsigned short)49138;
short var_18 = (short)11460;
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
