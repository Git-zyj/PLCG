#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)46;
long long int var_4 = 6540286623761980766LL;
short var_5 = (short)-20305;
unsigned short var_6 = (unsigned short)37103;
short var_11 = (short)4998;
int zero = 0;
long long int var_13 = 8488951402220118541LL;
unsigned int var_14 = 4292015362U;
short var_15 = (short)32463;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
