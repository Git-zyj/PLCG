#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-127;
unsigned long long int var_2 = 2318031350319745896ULL;
unsigned long long int var_3 = 18344788716802894851ULL;
unsigned long long int var_9 = 8311832716182253884ULL;
short var_11 = (short)-23197;
unsigned long long int var_12 = 15583729381310660086ULL;
int zero = 0;
signed char var_13 = (signed char)-114;
short var_14 = (short)8780;
signed char var_15 = (signed char)-117;
short var_16 = (short)-31569;
int var_17 = 506084017;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
