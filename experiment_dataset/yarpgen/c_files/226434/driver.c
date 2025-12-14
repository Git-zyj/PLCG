#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)58;
unsigned long long int var_13 = 13074631952723679986ULL;
unsigned short var_14 = (unsigned short)3771;
int var_16 = 1133947592;
int zero = 0;
unsigned long long int var_17 = 12380338984813034045ULL;
long long int var_18 = 8439773358057670993LL;
unsigned char var_19 = (unsigned char)181;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
