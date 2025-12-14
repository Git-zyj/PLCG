#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)164;
unsigned int var_7 = 1363420375U;
long long int var_9 = 5540793762700593647LL;
long long int var_10 = 371784805620408502LL;
int zero = 0;
unsigned int var_12 = 2920163888U;
long long int var_13 = -5188483422744700019LL;
short var_14 = (short)22897;
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
