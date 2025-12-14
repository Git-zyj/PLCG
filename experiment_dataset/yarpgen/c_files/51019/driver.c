#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-46;
unsigned char var_3 = (unsigned char)238;
_Bool var_4 = (_Bool)1;
int var_6 = 195755462;
unsigned short var_8 = (unsigned short)42348;
long long int var_9 = 902046103201249720LL;
int zero = 0;
short var_10 = (short)-25152;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
