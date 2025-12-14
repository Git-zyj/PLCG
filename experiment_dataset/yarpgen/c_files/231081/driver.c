#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1864383521;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)53195;
signed char var_6 = (signed char)102;
unsigned short var_9 = (unsigned short)15297;
int zero = 0;
int var_11 = 1304178134;
unsigned short var_12 = (unsigned short)18418;
unsigned char var_13 = (unsigned char)41;
unsigned short var_14 = (unsigned short)28684;
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
