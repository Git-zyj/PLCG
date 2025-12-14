#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16037912891176807165ULL;
unsigned long long int var_2 = 3695946946477471940ULL;
int var_5 = 1844958507;
long long int var_7 = 4624982585890010260LL;
unsigned short var_8 = (unsigned short)54101;
signed char var_9 = (signed char)-39;
int zero = 0;
int var_11 = 1420884265;
short var_12 = (short)11047;
short var_13 = (short)-14041;
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
