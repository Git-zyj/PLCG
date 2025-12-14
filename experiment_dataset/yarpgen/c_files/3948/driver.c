#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-125;
unsigned int var_2 = 2372470170U;
signed char var_6 = (signed char)-118;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)32;
long long int var_15 = 1536661284908102088LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
