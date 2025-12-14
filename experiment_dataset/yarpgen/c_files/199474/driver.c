#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-73;
short var_3 = (short)-16347;
long long int var_5 = 6619475202604825042LL;
unsigned char var_6 = (unsigned char)211;
unsigned int var_12 = 2819206005U;
int zero = 0;
signed char var_13 = (signed char)-80;
long long int var_14 = -2015227272104800964LL;
void init() {
}

void checksum() {
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
