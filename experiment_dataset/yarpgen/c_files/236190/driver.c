#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7080543947547143978LL;
long long int var_4 = -6209633599146206641LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 8032558482928485611ULL;
int var_14 = -788000577;
signed char var_15 = (signed char)-116;
long long int var_19 = 4852267849187680249LL;
int zero = 0;
unsigned int var_20 = 222778532U;
long long int var_21 = -3724987610085550579LL;
void init() {
}

void checksum() {
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
