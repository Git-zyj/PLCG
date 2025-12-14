#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4851072780669899244LL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)24516;
unsigned char var_6 = (unsigned char)223;
unsigned char var_7 = (unsigned char)66;
signed char var_9 = (signed char)-103;
unsigned char var_10 = (unsigned char)32;
short var_11 = (short)-28191;
long long int var_13 = -1356978871947488041LL;
int zero = 0;
long long int var_15 = 6377299937081565299LL;
unsigned short var_16 = (unsigned short)20724;
unsigned short var_17 = (unsigned short)29020;
short var_18 = (short)-8953;
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
