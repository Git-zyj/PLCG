#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7299482400315939262LL;
long long int var_4 = 2395622435256728902LL;
long long int var_5 = 7702200717762248261LL;
long long int var_8 = -6897112081728100948LL;
long long int var_10 = -1204115582025924807LL;
long long int var_11 = 8446606863997285227LL;
long long int var_12 = 4373767248490287225LL;
long long int var_14 = 8548547540583915510LL;
int zero = 0;
long long int var_15 = -7567638127990049778LL;
long long int var_16 = -7954094292959544577LL;
long long int var_17 = -3616908673201389358LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
