#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2294937577883060238LL;
short var_4 = (short)26185;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)163;
_Bool var_10 = (_Bool)1;
int var_11 = 1900377614;
int zero = 0;
signed char var_12 = (signed char)37;
unsigned long long int var_13 = 6599988490447904145ULL;
int var_14 = -2101338430;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
