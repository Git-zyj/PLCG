#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)50;
unsigned char var_4 = (unsigned char)132;
unsigned long long int var_5 = 13768433986628229406ULL;
signed char var_9 = (signed char)-108;
int zero = 0;
short var_10 = (short)6430;
unsigned long long int var_11 = 7291141169399036036ULL;
unsigned long long int var_12 = 14699530220717338244ULL;
short var_13 = (short)26880;
unsigned long long int var_14 = 15320978175342583991ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
