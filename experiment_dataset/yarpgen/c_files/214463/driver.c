#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 328449482845542892ULL;
unsigned long long int var_11 = 15361306339346196858ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-54;
unsigned int var_15 = 951005596U;
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
