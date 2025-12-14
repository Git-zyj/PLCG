#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3405152143650897302LL;
unsigned int var_3 = 1258013135U;
unsigned short var_7 = (unsigned short)3169;
unsigned int var_10 = 2446663698U;
long long int var_12 = 7420085249432337551LL;
signed char var_13 = (signed char)-52;
unsigned long long int var_14 = 13886988106360831625ULL;
unsigned char var_17 = (unsigned char)49;
signed char var_18 = (signed char)98;
int zero = 0;
short var_20 = (short)-18754;
unsigned long long int var_21 = 2561016744977380310ULL;
long long int var_22 = 6100075792726553099LL;
signed char var_23 = (signed char)59;
void init() {
}

void checksum() {
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
