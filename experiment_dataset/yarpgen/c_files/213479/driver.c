#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)106;
unsigned char var_1 = (unsigned char)27;
long long int var_4 = 1392792968863386448LL;
long long int var_5 = 5836375079352841969LL;
signed char var_7 = (signed char)20;
long long int var_8 = 8318990597746183113LL;
unsigned char var_11 = (unsigned char)36;
short var_17 = (short)26899;
int zero = 0;
unsigned short var_18 = (unsigned short)11086;
unsigned short var_19 = (unsigned short)17939;
void init() {
}

void checksum() {
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
