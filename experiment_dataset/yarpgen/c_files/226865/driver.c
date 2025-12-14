#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21475;
signed char var_2 = (signed char)-90;
signed char var_5 = (signed char)-54;
signed char var_6 = (signed char)-75;
short var_7 = (short)25759;
long long int var_8 = 5592226361525113969LL;
unsigned long long int var_9 = 2674946553605875633ULL;
int zero = 0;
signed char var_12 = (signed char)107;
int var_13 = -1345187609;
int var_14 = 1190969455;
signed char var_15 = (signed char)-77;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
