#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)98;
unsigned short var_6 = (unsigned short)56569;
int var_7 = 641933132;
unsigned long long int var_9 = 12958062045510242172ULL;
int zero = 0;
long long int var_10 = 1606129480990088906LL;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-61;
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
