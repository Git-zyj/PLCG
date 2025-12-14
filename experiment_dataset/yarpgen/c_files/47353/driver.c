#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11895577998729545476ULL;
long long int var_2 = 4644466734002110913LL;
unsigned char var_3 = (unsigned char)180;
unsigned int var_5 = 848289798U;
unsigned short var_6 = (unsigned short)11255;
long long int var_7 = 7252661216858412487LL;
unsigned char var_8 = (unsigned char)63;
_Bool var_9 = (_Bool)0;
short var_10 = (short)26622;
int zero = 0;
unsigned short var_11 = (unsigned short)47438;
signed char var_12 = (signed char)88;
unsigned long long int var_13 = 11011549339093675554ULL;
signed char var_14 = (signed char)-25;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
