#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7469347869985952412LL;
long long int var_2 = -5515975855571473294LL;
unsigned short var_3 = (unsigned short)4375;
signed char var_5 = (signed char)-38;
int var_6 = 985972505;
short var_7 = (short)18305;
int zero = 0;
signed char var_10 = (signed char)-53;
signed char var_11 = (signed char)-109;
unsigned char var_12 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
