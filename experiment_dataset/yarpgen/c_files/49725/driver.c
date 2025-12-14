#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)57454;
int var_5 = 1880193868;
unsigned char var_7 = (unsigned char)226;
unsigned long long int var_10 = 4244300707917846693ULL;
int var_11 = -656914656;
int zero = 0;
unsigned char var_13 = (unsigned char)51;
signed char var_14 = (signed char)-38;
short var_15 = (short)-24634;
unsigned long long int var_16 = 6543098100933830436ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
