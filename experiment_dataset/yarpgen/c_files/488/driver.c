#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20592;
unsigned long long int var_2 = 1232412551859670041ULL;
unsigned char var_3 = (unsigned char)67;
int var_9 = -1518806413;
signed char var_14 = (signed char)25;
signed char var_17 = (signed char)-85;
int zero = 0;
unsigned long long int var_19 = 2215394030493959239ULL;
unsigned int var_20 = 1896797838U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
