#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17682;
short var_1 = (short)-25680;
unsigned short var_3 = (unsigned short)20552;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)107;
short var_9 = (short)26601;
int var_10 = 1208433902;
long long int var_12 = 8535954036900621834LL;
int zero = 0;
short var_19 = (short)19514;
unsigned short var_20 = (unsigned short)24770;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
