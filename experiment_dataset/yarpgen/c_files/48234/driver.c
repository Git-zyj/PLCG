#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 302458148863719228LL;
long long int var_9 = 1692022638807748579LL;
signed char var_12 = (signed char)-30;
int var_14 = -1715014901;
long long int var_15 = -4925122799384949700LL;
int zero = 0;
unsigned int var_17 = 4056732335U;
long long int var_18 = -5375113134675925156LL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3265745577U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
