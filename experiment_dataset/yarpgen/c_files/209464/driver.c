#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)2;
unsigned int var_5 = 3771544020U;
unsigned long long int var_11 = 9190359522310110976ULL;
unsigned long long int var_17 = 2574541912582230585ULL;
int zero = 0;
int var_18 = 215475105;
unsigned long long int var_19 = 6415031481507885113ULL;
unsigned long long int var_20 = 13125723105731047589ULL;
void init() {
}

void checksum() {
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
