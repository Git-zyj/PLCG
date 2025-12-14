#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)41;
long long int var_1 = 1030234451930865126LL;
unsigned char var_6 = (unsigned char)46;
signed char var_8 = (signed char)-11;
unsigned long long int var_9 = 1343586561532631570ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_15 = (unsigned short)54886;
unsigned int var_16 = 448654621U;
int zero = 0;
unsigned int var_18 = 4143250932U;
unsigned long long int var_19 = 16449027820330104592ULL;
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
