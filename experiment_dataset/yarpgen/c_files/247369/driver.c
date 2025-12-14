#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9561;
long long int var_1 = -2368996732315653224LL;
signed char var_2 = (signed char)-127;
int var_4 = 975198390;
signed char var_6 = (signed char)49;
unsigned long long int var_7 = 9777894304920910660ULL;
unsigned int var_8 = 2555553304U;
signed char var_10 = (signed char)-13;
int var_15 = -81790955;
unsigned long long int var_16 = 1190750652917333105ULL;
int zero = 0;
unsigned int var_19 = 914815532U;
short var_20 = (short)-10581;
unsigned int var_21 = 1052471718U;
signed char var_22 = (signed char)-64;
long long int var_23 = 5495948451541945648LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
