#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)41;
short var_1 = (short)10271;
unsigned long long int var_2 = 12246028003894799681ULL;
unsigned long long int var_4 = 6679669990541835328ULL;
signed char var_5 = (signed char)15;
unsigned long long int var_6 = 5271788475396836042ULL;
_Bool var_7 = (_Bool)0;
short var_8 = (short)7777;
unsigned long long int var_9 = 7540317639206521991ULL;
int var_10 = -362669522;
int zero = 0;
signed char var_11 = (signed char)-105;
short var_12 = (short)30982;
short var_13 = (short)-27901;
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
