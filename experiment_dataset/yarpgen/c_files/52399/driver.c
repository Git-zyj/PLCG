#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)115;
long long int var_6 = 7299123060828273646LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_12 = (short)-4295;
signed char var_13 = (signed char)-19;
unsigned short var_14 = (unsigned short)26144;
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
