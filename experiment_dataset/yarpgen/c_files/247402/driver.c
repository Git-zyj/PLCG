#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2431111299316214223LL;
unsigned short var_2 = (unsigned short)29844;
unsigned short var_3 = (unsigned short)32680;
long long int var_5 = 2647689443860306069LL;
long long int var_10 = -219044921236563043LL;
signed char var_11 = (signed char)-66;
int var_12 = -1566027852;
int zero = 0;
signed char var_13 = (signed char)21;
unsigned int var_14 = 4187521570U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
