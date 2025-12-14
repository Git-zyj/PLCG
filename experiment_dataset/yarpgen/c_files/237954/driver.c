#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2290936679U;
signed char var_4 = (signed char)35;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 15851877125085232407ULL;
unsigned int var_9 = 1084316074U;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)26;
int zero = 0;
unsigned long long int var_12 = 11233395591772692371ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 4499330638783413133ULL;
short var_15 = (short)-10575;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
