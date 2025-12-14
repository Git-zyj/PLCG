#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 461086662;
unsigned char var_1 = (unsigned char)37;
unsigned short var_7 = (unsigned short)59256;
int var_8 = -909718782;
unsigned char var_9 = (unsigned char)188;
short var_11 = (short)-1018;
unsigned long long int var_12 = 8698333820751926717ULL;
int zero = 0;
signed char var_13 = (signed char)-61;
long long int var_14 = 878860777217401140LL;
unsigned char var_15 = (unsigned char)196;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
