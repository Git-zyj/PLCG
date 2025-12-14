#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60463;
unsigned long long int var_1 = 6467477100188635948ULL;
unsigned long long int var_6 = 5212377492443968620ULL;
short var_7 = (short)-20005;
signed char var_9 = (signed char)-31;
unsigned long long int var_11 = 11014893556929025574ULL;
int zero = 0;
signed char var_13 = (signed char)-79;
unsigned long long int var_14 = 13757833426809492566ULL;
void init() {
}

void checksum() {
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
