#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)252;
_Bool var_7 = (_Bool)1;
unsigned short var_12 = (unsigned short)31934;
unsigned short var_15 = (unsigned short)13151;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 8679135228993557044ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 13038676972131430280ULL;
signed char var_21 = (signed char)-98;
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
