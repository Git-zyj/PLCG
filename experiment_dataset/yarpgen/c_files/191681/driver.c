#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 111314889009393937ULL;
unsigned long long int var_2 = 14415357105659447381ULL;
unsigned long long int var_4 = 7698087203814819227ULL;
unsigned long long int var_6 = 8954670635397579836ULL;
short var_7 = (short)-18102;
unsigned long long int var_9 = 11450161200986510660ULL;
int zero = 0;
short var_11 = (short)-24933;
unsigned char var_12 = (unsigned char)35;
unsigned long long int var_13 = 107300416042107650ULL;
unsigned long long int var_14 = 2968599517567346340ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
