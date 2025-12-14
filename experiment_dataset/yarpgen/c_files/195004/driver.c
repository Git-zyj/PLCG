#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-9;
int var_7 = 2027909886;
unsigned int var_8 = 3883311869U;
unsigned long long int var_9 = 5659327375574097006ULL;
signed char var_11 = (signed char)-28;
signed char var_12 = (signed char)41;
unsigned long long int var_13 = 16921183712488641614ULL;
signed char var_14 = (signed char)27;
int zero = 0;
unsigned long long int var_20 = 4884613442526892534ULL;
signed char var_21 = (signed char)-116;
signed char var_22 = (signed char)-13;
signed char var_23 = (signed char)-2;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
