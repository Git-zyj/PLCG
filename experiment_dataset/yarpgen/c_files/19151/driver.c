#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
unsigned int var_2 = 2624082640U;
unsigned long long int var_5 = 452309069234742406ULL;
signed char var_9 = (signed char)-40;
int zero = 0;
unsigned short var_13 = (unsigned short)17411;
long long int var_14 = 5869806709326931358LL;
signed char var_15 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
