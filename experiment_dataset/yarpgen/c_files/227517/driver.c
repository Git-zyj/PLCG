#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-118;
int var_2 = -1420410898;
signed char var_3 = (signed char)-72;
signed char var_4 = (signed char)-49;
int var_7 = 1074172580;
int var_9 = -1563747412;
int zero = 0;
signed char var_12 = (signed char)41;
signed char var_13 = (signed char)40;
signed char var_14 = (signed char)-17;
int var_15 = -1364755981;
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
