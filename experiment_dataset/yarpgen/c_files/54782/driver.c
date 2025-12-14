#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-28079;
long long int var_5 = 5737737613181271663LL;
signed char var_6 = (signed char)-54;
unsigned int var_7 = 82728610U;
unsigned int var_9 = 1449774864U;
unsigned long long int var_15 = 15403670895134643029ULL;
int zero = 0;
signed char var_17 = (signed char)-105;
signed char var_18 = (signed char)21;
short var_19 = (short)8706;
unsigned long long int var_20 = 7291423258298732400ULL;
unsigned char var_21 = (unsigned char)209;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
