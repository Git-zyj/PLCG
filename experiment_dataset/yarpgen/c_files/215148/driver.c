#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13335418780288977358ULL;
unsigned long long int var_4 = 17716971416208194319ULL;
unsigned long long int var_5 = 11586493230361829182ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 17145641312461800955ULL;
unsigned char var_8 = (unsigned char)170;
unsigned long long int var_9 = 4712062676120162300ULL;
signed char var_10 = (signed char)53;
unsigned long long int var_11 = 11133921827348833262ULL;
int zero = 0;
unsigned int var_12 = 3267244167U;
unsigned long long int var_13 = 15101214557207215894ULL;
int var_14 = 959097926;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
