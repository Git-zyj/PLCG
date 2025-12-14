#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2188243075U;
signed char var_1 = (signed char)-82;
unsigned short var_2 = (unsigned short)19144;
short var_4 = (short)-20548;
short var_6 = (short)-11430;
unsigned int var_7 = 2464499573U;
unsigned short var_8 = (unsigned short)22753;
short var_9 = (short)7091;
unsigned short var_10 = (unsigned short)44680;
signed char var_13 = (signed char)-109;
unsigned char var_14 = (unsigned char)57;
long long int var_16 = -1681838571291492875LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)19634;
signed char var_19 = (signed char)124;
unsigned short var_20 = (unsigned short)53985;
unsigned short var_21 = (unsigned short)13474;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
