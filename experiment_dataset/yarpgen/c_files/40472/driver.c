#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53432;
unsigned int var_11 = 3616995200U;
_Bool var_14 = (_Bool)1;
unsigned long long int var_17 = 13106738097403487520ULL;
int zero = 0;
int var_18 = 2041849786;
unsigned char var_19 = (unsigned char)105;
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
