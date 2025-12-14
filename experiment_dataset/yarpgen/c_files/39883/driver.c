#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9124981973492499973LL;
unsigned char var_3 = (unsigned char)41;
int var_5 = -721500486;
unsigned long long int var_6 = 6621666732025536834ULL;
unsigned char var_14 = (unsigned char)237;
int zero = 0;
signed char var_19 = (signed char)-31;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1757928035U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
