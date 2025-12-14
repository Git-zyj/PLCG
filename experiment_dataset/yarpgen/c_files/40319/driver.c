#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 510159084;
short var_6 = (short)5960;
int var_7 = 1547087951;
unsigned char var_12 = (unsigned char)53;
long long int var_15 = 5917580175095172817LL;
int zero = 0;
long long int var_18 = 8952877445934942077LL;
unsigned char var_19 = (unsigned char)156;
int var_20 = 1166615307;
signed char var_21 = (signed char)2;
void init() {
}

void checksum() {
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
