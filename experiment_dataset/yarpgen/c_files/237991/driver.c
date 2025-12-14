#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)49;
unsigned int var_1 = 2796333523U;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-90;
short var_6 = (short)-18478;
long long int var_10 = 1747393695896199984LL;
int zero = 0;
unsigned long long int var_17 = 17653851539405282396ULL;
signed char var_18 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
