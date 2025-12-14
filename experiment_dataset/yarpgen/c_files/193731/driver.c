#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 975119373U;
unsigned int var_3 = 3666979385U;
unsigned char var_8 = (unsigned char)105;
unsigned long long int var_10 = 16288731788955348892ULL;
unsigned char var_12 = (unsigned char)92;
unsigned int var_13 = 654425428U;
short var_14 = (short)12600;
int zero = 0;
long long int var_15 = -8957252843848953969LL;
unsigned int var_16 = 4168941634U;
long long int var_17 = 4295344030993742453LL;
unsigned int var_18 = 3758005275U;
unsigned long long int var_19 = 8257256686172411529ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
