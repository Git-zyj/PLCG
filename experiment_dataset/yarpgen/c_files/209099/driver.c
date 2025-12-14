#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)89;
short var_5 = (short)32712;
unsigned short var_7 = (unsigned short)14904;
signed char var_9 = (signed char)-37;
int var_10 = 2130480969;
unsigned long long int var_11 = 1013332106325725083ULL;
short var_13 = (short)-11027;
unsigned short var_17 = (unsigned short)41133;
int zero = 0;
unsigned long long int var_19 = 1465154787063445689ULL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-25303;
void init() {
}

void checksum() {
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
