#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1051902725;
unsigned long long int var_2 = 4515981428528489579ULL;
signed char var_3 = (signed char)78;
unsigned int var_4 = 2328524146U;
unsigned char var_5 = (unsigned char)28;
short var_7 = (short)15845;
signed char var_8 = (signed char)-90;
unsigned long long int var_9 = 1678988908475532360ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 12417631304770952346ULL;
unsigned short var_12 = (unsigned short)399;
int var_13 = 1251118454;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
