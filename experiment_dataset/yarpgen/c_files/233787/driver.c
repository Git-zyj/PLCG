#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3243902457628047119ULL;
unsigned int var_3 = 3384910427U;
signed char var_8 = (signed char)-27;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)33;
unsigned int var_19 = 2137963163U;
signed char var_20 = (signed char)-116;
unsigned long long int var_21 = 12231564340455483300ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
