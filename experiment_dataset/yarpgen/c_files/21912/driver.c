#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8072819120163542564LL;
signed char var_4 = (signed char)-74;
unsigned short var_7 = (unsigned short)57808;
unsigned int var_8 = 1373623632U;
int var_13 = -1269406692;
int zero = 0;
short var_18 = (short)26171;
short var_19 = (short)20466;
signed char var_20 = (signed char)54;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
