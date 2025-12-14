#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1263369689;
unsigned int var_5 = 2508387204U;
signed char var_7 = (signed char)-72;
unsigned char var_8 = (unsigned char)39;
signed char var_11 = (signed char)94;
int zero = 0;
short var_19 = (short)10305;
unsigned int var_20 = 1005567569U;
unsigned int var_21 = 814211095U;
signed char var_22 = (signed char)-110;
void init() {
}

void checksum() {
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
