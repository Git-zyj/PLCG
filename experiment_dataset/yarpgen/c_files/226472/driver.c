#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -907286515;
unsigned short var_8 = (unsigned short)12986;
long long int var_9 = -1319820227961568620LL;
int zero = 0;
unsigned short var_11 = (unsigned short)10622;
signed char var_12 = (signed char)-110;
int var_13 = 1264850286;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
