#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5029;
int var_3 = 564420507;
short var_5 = (short)-8937;
long long int var_6 = -7598958848999548969LL;
unsigned long long int var_8 = 10250801237337731881ULL;
long long int var_12 = 3695835092592681731LL;
unsigned short var_13 = (unsigned short)455;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)15450;
short var_17 = (short)-18716;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
