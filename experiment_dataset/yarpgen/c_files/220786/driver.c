#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3373120707799799562LL;
unsigned long long int var_5 = 6579213931585907435ULL;
unsigned long long int var_8 = 794211302194383208ULL;
signed char var_11 = (signed char)51;
long long int var_15 = 8191459415816844229LL;
int zero = 0;
unsigned long long int var_19 = 1439613391567224613ULL;
int var_20 = 1978991581;
void init() {
}

void checksum() {
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
