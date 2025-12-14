#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1592167676U;
unsigned int var_5 = 1448376998U;
unsigned int var_7 = 3521541287U;
long long int var_9 = 1286369903711247560LL;
short var_10 = (short)-24460;
int zero = 0;
int var_11 = -1438270549;
int var_12 = 1182528436;
unsigned int var_13 = 4039867538U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
