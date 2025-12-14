#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7667695390160302283LL;
signed char var_6 = (signed char)40;
signed char var_7 = (signed char)-56;
long long int var_8 = -8154344121473236879LL;
long long int var_9 = -5428453514463176834LL;
short var_13 = (short)-9498;
int var_15 = -399372768;
signed char var_16 = (signed char)-124;
signed char var_17 = (signed char)119;
int zero = 0;
int var_18 = -1136016147;
int var_19 = 1344820946;
short var_20 = (short)-4975;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
