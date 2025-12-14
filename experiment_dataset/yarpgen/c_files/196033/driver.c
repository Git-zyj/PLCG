#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1048560175;
unsigned char var_5 = (unsigned char)168;
unsigned char var_6 = (unsigned char)101;
unsigned int var_7 = 2624617386U;
int var_8 = -1450749469;
unsigned short var_13 = (unsigned short)37492;
int var_14 = 1986919848;
int zero = 0;
unsigned int var_17 = 1472866340U;
unsigned int var_18 = 3374926894U;
long long int var_19 = -4941159887108090949LL;
unsigned short var_20 = (unsigned short)28009;
unsigned short var_21 = (unsigned short)64851;
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
