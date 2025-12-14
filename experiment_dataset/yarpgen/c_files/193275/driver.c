#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1620075782U;
unsigned long long int var_3 = 4721926846617405235ULL;
unsigned long long int var_4 = 3607048766656552581ULL;
_Bool var_7 = (_Bool)1;
int var_9 = 1888471572;
signed char var_11 = (signed char)-1;
unsigned int var_12 = 2655696960U;
int zero = 0;
unsigned int var_13 = 2921942491U;
unsigned int var_14 = 1276702871U;
unsigned long long int var_15 = 17810294574614014042ULL;
unsigned long long int var_16 = 7205215571848818247ULL;
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
