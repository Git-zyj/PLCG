#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)4;
unsigned long long int var_9 = 13133230820657766548ULL;
long long int var_14 = -4657310843160848061LL;
int zero = 0;
int var_16 = 2018300743;
int var_17 = 241156468;
unsigned long long int var_18 = 13264470120565502118ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
