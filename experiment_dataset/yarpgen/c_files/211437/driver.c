#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)99;
int var_9 = 428296418;
signed char var_13 = (signed char)-57;
int var_15 = -1859951717;
int zero = 0;
unsigned short var_17 = (unsigned short)7937;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)60698;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
