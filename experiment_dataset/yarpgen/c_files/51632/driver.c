#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8319264888288882347LL;
_Bool var_3 = (_Bool)0;
signed char var_9 = (signed char)92;
unsigned int var_11 = 48451628U;
int var_13 = -806907797;
int zero = 0;
unsigned char var_14 = (unsigned char)92;
signed char var_15 = (signed char)-111;
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
