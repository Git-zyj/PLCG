#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)87;
short var_3 = (short)13081;
signed char var_6 = (signed char)-58;
unsigned long long int var_7 = 17867499239388598208ULL;
unsigned short var_8 = (unsigned short)14944;
int zero = 0;
unsigned short var_11 = (unsigned short)54698;
_Bool var_12 = (_Bool)1;
int var_13 = -404995186;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
