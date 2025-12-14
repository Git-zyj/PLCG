#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)64;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)39557;
signed char var_8 = (signed char)61;
unsigned short var_9 = (unsigned short)12952;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_19 = -1982723854670076527LL;
unsigned char var_20 = (unsigned char)34;
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
