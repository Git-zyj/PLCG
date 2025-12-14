#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)-74;
long long int var_12 = 5716353195530473329LL;
short var_13 = (short)-10040;
int zero = 0;
signed char var_17 = (signed char)-58;
unsigned int var_18 = 1363141641U;
long long int var_19 = 5979089229606989137LL;
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
