#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1361598465;
unsigned int var_3 = 1835870345U;
unsigned long long int var_11 = 15062239308495298261ULL;
long long int var_13 = 4191878861674191740LL;
short var_15 = (short)-32312;
unsigned short var_16 = (unsigned short)41666;
int zero = 0;
long long int var_18 = -6056388423515064617LL;
short var_19 = (short)14238;
signed char var_20 = (signed char)-83;
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
