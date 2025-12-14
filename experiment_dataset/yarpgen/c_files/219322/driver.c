#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8373860994516760877LL;
unsigned long long int var_4 = 12895277237631713498ULL;
unsigned long long int var_5 = 12861351177416560838ULL;
_Bool var_6 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)26;
signed char var_13 = (signed char)57;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2494637564U;
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
