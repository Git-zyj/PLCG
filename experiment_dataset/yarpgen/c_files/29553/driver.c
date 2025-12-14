#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17478;
long long int var_1 = -2908320374586528286LL;
short var_6 = (short)-31182;
signed char var_9 = (signed char)95;
int var_11 = -655480932;
unsigned short var_12 = (unsigned short)52528;
int zero = 0;
unsigned char var_16 = (unsigned char)38;
_Bool var_17 = (_Bool)0;
int var_18 = 1109526131;
signed char var_19 = (signed char)-113;
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
