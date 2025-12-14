#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-76;
signed char var_6 = (signed char)67;
unsigned long long int var_7 = 11559401477999221313ULL;
unsigned long long int var_8 = 1194277890708938930ULL;
unsigned long long int var_9 = 12126770416262934129ULL;
unsigned long long int var_13 = 15595623161734956094ULL;
unsigned long long int var_16 = 4856912161016359461ULL;
signed char var_17 = (signed char)96;
unsigned long long int var_18 = 257317040009229359ULL;
int zero = 0;
long long int var_19 = -8500527354835817303LL;
unsigned long long int var_20 = 10774621851973305054ULL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 1979273938659127342ULL;
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
