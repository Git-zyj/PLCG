#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)4;
signed char var_5 = (signed char)-24;
unsigned long long int var_7 = 9004465536857025ULL;
unsigned long long int var_8 = 13220682953250289508ULL;
unsigned long long int var_9 = 9295499873500948960ULL;
int zero = 0;
signed char var_10 = (signed char)-66;
unsigned long long int var_11 = 9613840769182547625ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
