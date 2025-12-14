#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-60;
short var_4 = (short)20598;
int var_5 = -1272248880;
unsigned short var_8 = (unsigned short)7585;
unsigned long long int var_12 = 5468989097246355201ULL;
int zero = 0;
int var_14 = 464587468;
short var_15 = (short)24460;
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
