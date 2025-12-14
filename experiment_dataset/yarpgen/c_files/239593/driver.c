#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9131550406300139500LL;
short var_4 = (short)29507;
long long int var_11 = 7066848423506642786LL;
unsigned long long int var_14 = 7423086325139673140ULL;
int zero = 0;
long long int var_20 = 8327752740710169912LL;
int var_21 = -1068881145;
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
