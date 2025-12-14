#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26430;
signed char var_2 = (signed char)-72;
unsigned long long int var_10 = 13212115692778226791ULL;
int zero = 0;
unsigned long long int var_18 = 10384677350661391403ULL;
unsigned short var_19 = (unsigned short)23025;
void init() {
}

void checksum() {
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
