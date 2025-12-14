#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-103;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 11940433U;
unsigned long long int var_12 = 14971245022262547173ULL;
int zero = 0;
unsigned long long int var_17 = 14504339791157630588ULL;
unsigned short var_18 = (unsigned short)7567;
void init() {
}

void checksum() {
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
