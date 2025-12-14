#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-39;
unsigned char var_2 = (unsigned char)64;
short var_6 = (short)-18259;
int var_7 = -578852455;
int var_11 = 2128658527;
int var_12 = 197012001;
int var_16 = 1060753625;
int zero = 0;
signed char var_20 = (signed char)-67;
signed char var_21 = (signed char)118;
signed char var_22 = (signed char)-27;
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
