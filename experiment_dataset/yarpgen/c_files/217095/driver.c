#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47207;
unsigned long long int var_2 = 466935841843337750ULL;
int zero = 0;
unsigned long long int var_18 = 3827929985737304435ULL;
unsigned long long int var_19 = 5118328378485645440ULL;
long long int var_20 = 3938534364919924173LL;
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
