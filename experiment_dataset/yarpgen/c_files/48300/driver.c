#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3801316661998491713ULL;
short var_2 = (short)-28309;
long long int var_5 = -4420535298193638037LL;
int zero = 0;
short var_10 = (short)-6322;
int var_11 = -427197707;
unsigned long long int var_12 = 6774747963045556213ULL;
unsigned int var_13 = 3340281360U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
