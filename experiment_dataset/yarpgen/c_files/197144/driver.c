#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-57;
unsigned short var_3 = (unsigned short)14266;
short var_4 = (short)22434;
unsigned short var_6 = (unsigned short)21225;
signed char var_14 = (signed char)43;
int var_15 = -1132390638;
signed char var_17 = (signed char)-82;
int zero = 0;
int var_18 = -1123723127;
unsigned long long int var_19 = 2962513927933321858ULL;
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
