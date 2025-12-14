#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17824789163404031167ULL;
unsigned long long int var_1 = 9849696242659129097ULL;
unsigned long long int var_5 = 3678678600850409159ULL;
signed char var_6 = (signed char)75;
unsigned long long int var_7 = 15986766496535209970ULL;
signed char var_9 = (signed char)6;
int zero = 0;
signed char var_10 = (signed char)-24;
unsigned long long int var_11 = 17658997363948881230ULL;
unsigned long long int var_12 = 8976250936757182142ULL;
unsigned long long int var_13 = 4694161176216805109ULL;
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
