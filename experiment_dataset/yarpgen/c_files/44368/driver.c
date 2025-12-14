#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 918219101715964253ULL;
unsigned long long int var_4 = 14947466251347750590ULL;
unsigned int var_5 = 2160541211U;
_Bool var_7 = (_Bool)1;
unsigned int var_10 = 510556101U;
unsigned int var_13 = 3591196285U;
int var_15 = 1760328992;
int zero = 0;
int var_17 = 1180322040;
signed char var_18 = (signed char)-82;
unsigned long long int var_19 = 7168802246639667835ULL;
void init() {
}

void checksum() {
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
