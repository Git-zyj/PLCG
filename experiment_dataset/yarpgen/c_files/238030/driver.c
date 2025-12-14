#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2197862522U;
long long int var_4 = 2469672519843133941LL;
short var_7 = (short)15083;
unsigned char var_8 = (unsigned char)167;
signed char var_12 = (signed char)94;
int zero = 0;
unsigned int var_18 = 3499625833U;
unsigned short var_19 = (unsigned short)34721;
unsigned short var_20 = (unsigned short)14546;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
