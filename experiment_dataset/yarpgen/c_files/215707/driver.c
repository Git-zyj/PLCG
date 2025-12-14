#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2301286344074097767ULL;
unsigned long long int var_4 = 5179363859734119751ULL;
signed char var_5 = (signed char)-34;
long long int var_6 = -5162740123390083610LL;
unsigned char var_7 = (unsigned char)182;
_Bool var_9 = (_Bool)0;
long long int var_12 = 2761013121601610525LL;
unsigned long long int var_13 = 10313693596174176001ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
