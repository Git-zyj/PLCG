#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2855488167920934216LL;
long long int var_1 = -1356730321794308930LL;
short var_5 = (short)4980;
unsigned long long int var_16 = 15238571985117247940ULL;
int zero = 0;
long long int var_18 = -4476403814408690874LL;
int var_19 = 485006820;
long long int var_20 = -5847199288541913603LL;
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
