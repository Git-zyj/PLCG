#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 572756489652738310LL;
unsigned short var_9 = (unsigned short)28974;
signed char var_11 = (signed char)83;
unsigned short var_15 = (unsigned short)34042;
int zero = 0;
signed char var_19 = (signed char)-101;
int var_20 = -2052386608;
short var_21 = (short)-10580;
short var_22 = (short)29617;
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
