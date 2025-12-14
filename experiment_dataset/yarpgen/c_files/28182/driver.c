#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59224;
signed char var_2 = (signed char)-59;
short var_4 = (short)-14234;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_12 = -2082902318;
int var_13 = -865304717;
signed char var_14 = (signed char)-79;
void init() {
}

void checksum() {
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
