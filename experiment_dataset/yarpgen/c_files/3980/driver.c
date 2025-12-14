#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-94;
signed char var_5 = (signed char)-118;
unsigned int var_6 = 446321808U;
unsigned int var_7 = 1942217327U;
unsigned int var_8 = 3267887735U;
unsigned int var_9 = 1112783789U;
int zero = 0;
unsigned long long int var_11 = 6156761883142314202ULL;
long long int var_12 = 3917509200297192618LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
