#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5417;
unsigned long long int var_6 = 6042670786620227608ULL;
long long int var_7 = 2324932831509557991LL;
short var_13 = (short)-2261;
int zero = 0;
long long int var_16 = -5755907465025904118LL;
short var_17 = (short)-28474;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
