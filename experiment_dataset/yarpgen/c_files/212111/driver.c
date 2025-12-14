#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)7295;
unsigned long long int var_12 = 4451640367531710319ULL;
unsigned long long int var_13 = 10857303194182179514ULL;
int var_17 = 1660678651;
int var_18 = -602391920;
int zero = 0;
signed char var_19 = (signed char)-49;
unsigned long long int var_20 = 18352988261078498025ULL;
unsigned int var_21 = 2663722636U;
short var_22 = (short)16907;
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
