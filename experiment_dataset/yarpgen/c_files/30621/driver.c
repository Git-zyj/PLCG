#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3296003196U;
signed char var_1 = (signed char)-101;
unsigned int var_2 = 3828955324U;
unsigned int var_3 = 2074065870U;
unsigned short var_4 = (unsigned short)62449;
signed char var_8 = (signed char)57;
short var_9 = (short)20849;
int var_10 = -930598167;
int zero = 0;
unsigned char var_13 = (unsigned char)40;
int var_14 = -961150741;
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
