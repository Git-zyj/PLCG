#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1053374362;
unsigned int var_1 = 4166713089U;
int var_2 = 938608430;
_Bool var_3 = (_Bool)1;
unsigned char var_7 = (unsigned char)95;
unsigned short var_19 = (unsigned short)13622;
int zero = 0;
unsigned long long int var_20 = 3230425457706790177ULL;
unsigned char var_21 = (unsigned char)169;
short var_22 = (short)5154;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
