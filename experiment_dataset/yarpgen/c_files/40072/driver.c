#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6963946812403333326ULL;
unsigned long long int var_2 = 16204190466734996359ULL;
unsigned short var_4 = (unsigned short)9757;
signed char var_8 = (signed char)-65;
unsigned long long int var_10 = 5918164290995167799ULL;
unsigned short var_12 = (unsigned short)15391;
signed char var_16 = (signed char)-104;
short var_17 = (short)-7718;
unsigned short var_18 = (unsigned short)45223;
int zero = 0;
short var_19 = (short)-5959;
unsigned long long int var_20 = 3273267338056730011ULL;
unsigned short var_21 = (unsigned short)22540;
short var_22 = (short)17075;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
