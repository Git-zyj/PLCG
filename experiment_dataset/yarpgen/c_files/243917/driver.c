#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6318868698488240423ULL;
signed char var_5 = (signed char)-30;
unsigned int var_6 = 3099271586U;
signed char var_9 = (signed char)-39;
unsigned long long int var_10 = 13338389432773895077ULL;
short var_11 = (short)-7049;
unsigned long long int var_13 = 5523880396619593827ULL;
signed char var_16 = (signed char)-51;
int zero = 0;
unsigned long long int var_17 = 3477475948913525508ULL;
unsigned short var_18 = (unsigned short)31307;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
