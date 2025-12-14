#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26288;
short var_9 = (short)-3452;
short var_13 = (short)-9833;
int zero = 0;
signed char var_17 = (signed char)-82;
int var_18 = 1187464899;
unsigned short var_19 = (unsigned short)19434;
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
