#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32006;
long long int var_3 = -2833576086441276697LL;
unsigned int var_7 = 3415027546U;
unsigned char var_8 = (unsigned char)182;
int var_9 = -893527920;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-77;
int zero = 0;
unsigned int var_17 = 4086442023U;
unsigned short var_18 = (unsigned short)43384;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
