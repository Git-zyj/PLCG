#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 3517496258826781662LL;
int var_10 = -350522877;
unsigned int var_14 = 2997901843U;
int zero = 0;
short var_18 = (short)-20356;
unsigned long long int var_19 = 10329200299301372137ULL;
short var_20 = (short)18647;
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
