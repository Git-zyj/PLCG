#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)18663;
unsigned char var_5 = (unsigned char)16;
short var_7 = (short)25762;
signed char var_8 = (signed char)-72;
unsigned char var_9 = (unsigned char)98;
int zero = 0;
signed char var_12 = (signed char)-25;
unsigned long long int var_13 = 1947278543636975738ULL;
_Bool var_14 = (_Bool)1;
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
