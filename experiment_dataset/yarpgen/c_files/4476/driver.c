#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2693990015751794790ULL;
unsigned char var_2 = (unsigned char)180;
signed char var_6 = (signed char)-5;
unsigned int var_13 = 245204005U;
unsigned int var_14 = 1860732854U;
signed char var_15 = (signed char)37;
signed char var_16 = (signed char)-101;
int var_18 = -1503930779;
int zero = 0;
unsigned char var_19 = (unsigned char)118;
unsigned long long int var_20 = 2506136643395402764ULL;
unsigned char var_21 = (unsigned char)100;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
