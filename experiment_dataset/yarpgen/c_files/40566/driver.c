#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-88;
long long int var_7 = -436518773510211605LL;
int var_9 = 834564161;
long long int var_10 = 3405450751572819415LL;
long long int var_11 = -4514773366041652111LL;
signed char var_12 = (signed char)28;
int zero = 0;
long long int var_14 = 7650809042342738613LL;
unsigned char var_15 = (unsigned char)34;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
