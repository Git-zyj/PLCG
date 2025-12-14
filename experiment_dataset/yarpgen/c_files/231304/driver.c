#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1758200656;
int var_2 = -1970800159;
unsigned int var_4 = 2907767373U;
unsigned char var_5 = (unsigned char)208;
unsigned char var_7 = (unsigned char)216;
unsigned long long int var_9 = 16564794524788890742ULL;
int zero = 0;
int var_15 = -1167575125;
signed char var_16 = (signed char)-119;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-67;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
