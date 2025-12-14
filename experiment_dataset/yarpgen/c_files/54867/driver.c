#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1715488613894399956LL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)4345;
unsigned char var_4 = (unsigned char)105;
short var_7 = (short)-21324;
long long int var_8 = 6132971797510819147LL;
int zero = 0;
signed char var_10 = (signed char)104;
signed char var_11 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
