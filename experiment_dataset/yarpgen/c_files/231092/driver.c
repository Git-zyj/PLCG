#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-125;
unsigned int var_2 = 1123269052U;
signed char var_4 = (signed char)6;
unsigned char var_6 = (unsigned char)63;
short var_7 = (short)25358;
int zero = 0;
unsigned int var_18 = 2700269298U;
unsigned int var_19 = 1006383055U;
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
