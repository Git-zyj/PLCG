#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4058038181431941021ULL;
unsigned short var_16 = (unsigned short)49734;
int zero = 0;
unsigned short var_18 = (unsigned short)64330;
unsigned long long int var_19 = 15346340968539553607ULL;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 2185733762394914656ULL;
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
