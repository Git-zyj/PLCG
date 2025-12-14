#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
unsigned int var_1 = 262389312U;
int var_4 = 1579349854;
long long int var_6 = 5243871330896809502LL;
int var_15 = 362246212;
unsigned short var_16 = (unsigned short)59351;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 795572936U;
signed char var_19 = (signed char)-64;
signed char var_20 = (signed char)65;
unsigned char var_21 = (unsigned char)83;
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
