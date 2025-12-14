#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1890625368307295373ULL;
_Bool var_3 = (_Bool)0;
int zero = 0;
int var_12 = -1638358372;
unsigned long long int var_13 = 9358433194998115268ULL;
signed char var_14 = (signed char)-60;
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
