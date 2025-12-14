#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16301003959595352777ULL;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-90;
int var_9 = 1269351939;
short var_17 = (short)-937;
int zero = 0;
signed char var_18 = (signed char)-24;
unsigned long long int var_19 = 14191595812105929252ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
