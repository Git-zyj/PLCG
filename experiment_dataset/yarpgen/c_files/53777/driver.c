#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15547108585924271874ULL;
unsigned long long int var_8 = 13658062681161739370ULL;
unsigned long long int var_11 = 2602950394133202241ULL;
int zero = 0;
unsigned long long int var_17 = 11915827202222687208ULL;
unsigned long long int var_18 = 10371558173821131065ULL;
unsigned int var_19 = 2882426151U;
unsigned long long int var_20 = 7790912174084182442ULL;
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
