#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13830;
short var_3 = (short)-26903;
signed char var_5 = (signed char)-12;
signed char var_7 = (signed char)-45;
unsigned long long int var_8 = 15160007357369014411ULL;
unsigned long long int var_9 = 3855879343943549968ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)35385;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
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
