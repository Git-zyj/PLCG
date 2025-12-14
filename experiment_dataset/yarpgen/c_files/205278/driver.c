#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3518708257U;
long long int var_2 = -5053213000534658103LL;
unsigned int var_7 = 1169611563U;
unsigned int var_9 = 502689165U;
unsigned long long int var_10 = 13975159822116766404ULL;
unsigned int var_16 = 4209396462U;
int zero = 0;
unsigned int var_17 = 3460825059U;
unsigned long long int var_18 = 9092653098819022214ULL;
signed char var_19 = (signed char)-43;
long long int var_20 = -510558009120908084LL;
signed char var_21 = (signed char)17;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
