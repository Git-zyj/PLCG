#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 181021458U;
signed char var_3 = (signed char)25;
long long int var_6 = -4395733568000826361LL;
signed char var_7 = (signed char)-89;
unsigned short var_9 = (unsigned short)41304;
int var_11 = -1925966672;
int zero = 0;
int var_12 = 542777799;
long long int var_13 = -4666085228929569806LL;
void init() {
}

void checksum() {
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
