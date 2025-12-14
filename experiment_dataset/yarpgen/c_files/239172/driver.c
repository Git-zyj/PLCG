#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)217;
short var_10 = (short)-11373;
unsigned long long int var_11 = 11977982520542886414ULL;
unsigned long long int var_12 = 11808312034560086518ULL;
int zero = 0;
long long int var_13 = -5889050206210913623LL;
signed char var_14 = (signed char)-82;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
