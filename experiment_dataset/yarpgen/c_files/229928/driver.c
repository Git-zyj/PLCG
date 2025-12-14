#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)10442;
unsigned short var_2 = (unsigned short)31786;
_Bool var_5 = (_Bool)1;
short var_10 = (short)32631;
int var_17 = -1223360483;
int zero = 0;
unsigned short var_18 = (unsigned short)8775;
signed char var_19 = (signed char)-114;
short var_20 = (short)-9845;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
