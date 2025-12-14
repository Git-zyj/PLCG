#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)49797;
long long int var_8 = 3268181198742530081LL;
unsigned short var_9 = (unsigned short)53019;
short var_10 = (short)19421;
short var_11 = (short)-24599;
int var_15 = -2107266910;
unsigned char var_18 = (unsigned char)94;
int zero = 0;
unsigned long long int var_19 = 1434873389525755429ULL;
long long int var_20 = -1984383354995382215LL;
signed char var_21 = (signed char)107;
short var_22 = (short)23579;
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
