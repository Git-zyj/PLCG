#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2864274077874660274ULL;
long long int var_2 = 2849792671034315395LL;
int var_3 = 1297291682;
unsigned short var_4 = (unsigned short)58891;
short var_5 = (short)-26563;
unsigned int var_8 = 3413622372U;
signed char var_9 = (signed char)-91;
short var_10 = (short)27065;
signed char var_12 = (signed char)-46;
int zero = 0;
unsigned long long int var_13 = 1060198079977140542ULL;
signed char var_14 = (signed char)-25;
long long int var_15 = -4561572348803025525LL;
signed char var_16 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
