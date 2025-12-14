#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-110;
unsigned short var_1 = (unsigned short)41019;
unsigned long long int var_2 = 591150323556379995ULL;
signed char var_5 = (signed char)-20;
signed char var_10 = (signed char)51;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_14 = (short)2692;
int var_15 = -1118374662;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
