#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-11581;
unsigned long long int var_10 = 8438839042178256556ULL;
unsigned long long int var_13 = 18122832439216429675ULL;
signed char var_18 = (signed char)94;
int zero = 0;
unsigned char var_19 = (unsigned char)31;
signed char var_20 = (signed char)-71;
unsigned long long int var_21 = 10586111208497888779ULL;
unsigned long long int var_22 = 14875609499098685550ULL;
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
