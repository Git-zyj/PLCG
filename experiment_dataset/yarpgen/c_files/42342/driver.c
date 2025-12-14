#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)1;
unsigned short var_3 = (unsigned short)4636;
unsigned long long int var_4 = 10988097209037406781ULL;
long long int var_6 = 6748228678753330982LL;
unsigned int var_8 = 3299082780U;
short var_10 = (short)30548;
long long int var_15 = -6659424774767205770LL;
int zero = 0;
unsigned short var_18 = (unsigned short)35479;
long long int var_19 = 6488626372110686655LL;
signed char var_20 = (signed char)-69;
signed char var_21 = (signed char)-40;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
