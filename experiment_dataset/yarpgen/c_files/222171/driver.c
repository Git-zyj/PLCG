#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7735249087492271671LL;
long long int var_2 = 9129540242313341170LL;
short var_9 = (short)3847;
unsigned long long int var_10 = 9142358032623019110ULL;
signed char var_11 = (signed char)-54;
int var_12 = -747407189;
int zero = 0;
unsigned long long int var_17 = 9070124135240811357ULL;
short var_18 = (short)4755;
int var_19 = -479696811;
signed char var_20 = (signed char)77;
signed char var_21 = (signed char)68;
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
