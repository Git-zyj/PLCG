#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -1609615264567537786LL;
signed char var_10 = (signed char)-118;
int zero = 0;
signed char var_19 = (signed char)83;
unsigned int var_20 = 3520482530U;
unsigned long long int var_21 = 6445366685491091710ULL;
unsigned int var_22 = 187232891U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
