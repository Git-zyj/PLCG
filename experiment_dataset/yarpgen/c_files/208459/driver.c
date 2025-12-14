#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
signed char var_1 = (signed char)107;
signed char var_2 = (signed char)-10;
short var_3 = (short)-22036;
unsigned int var_7 = 76703659U;
unsigned int var_8 = 3175563360U;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)248;
int zero = 0;
unsigned long long int var_15 = 5047678950271443350ULL;
long long int var_16 = -8090934380624825046LL;
long long int var_17 = 2340806382768348539LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
