#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6851235656595570003LL;
_Bool var_5 = (_Bool)1;
long long int var_8 = 2410009770277526213LL;
unsigned long long int var_9 = 5976880985970178904ULL;
unsigned short var_11 = (unsigned short)28253;
int zero = 0;
unsigned short var_12 = (unsigned short)20906;
unsigned long long int var_13 = 1370657843572650706ULL;
unsigned long long int var_14 = 14063215058297230332ULL;
long long int var_15 = 5681266825843311295LL;
long long int var_16 = -6355459205983840476LL;
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
