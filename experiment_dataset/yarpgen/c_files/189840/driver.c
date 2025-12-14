#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-38;
unsigned long long int var_2 = 10939224854935462127ULL;
unsigned long long int var_3 = 12082619438863028024ULL;
signed char var_7 = (signed char)35;
signed char var_8 = (signed char)120;
unsigned long long int var_9 = 12977226234005183978ULL;
short var_10 = (short)9229;
int zero = 0;
unsigned long long int var_12 = 10958872124303887769ULL;
signed char var_13 = (signed char)-89;
short var_14 = (short)-21153;
signed char var_15 = (signed char)-103;
unsigned long long int var_16 = 11452059693488585592ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
