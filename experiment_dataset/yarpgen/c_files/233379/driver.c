#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7371026583047663491LL;
long long int var_2 = 4893009438312732045LL;
_Bool var_9 = (_Bool)0;
unsigned short var_12 = (unsigned short)56838;
int zero = 0;
signed char var_19 = (signed char)-76;
unsigned char var_20 = (unsigned char)138;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
