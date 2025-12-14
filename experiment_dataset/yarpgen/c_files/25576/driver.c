#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7436669014757774478LL;
long long int var_6 = -6643833506266493790LL;
long long int var_9 = -3643741100580304648LL;
int zero = 0;
long long int var_19 = 1758872353747917173LL;
long long int var_20 = -1537553653516759911LL;
long long int var_21 = 4015761549940023111LL;
long long int var_22 = 498004339234736780LL;
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
