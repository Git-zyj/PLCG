#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1836463267;
long long int var_4 = -4387978682221054773LL;
unsigned char var_5 = (unsigned char)116;
long long int var_11 = -4547987575930219498LL;
unsigned char var_12 = (unsigned char)2;
int zero = 0;
unsigned long long int var_15 = 2454679972861458944ULL;
signed char var_16 = (signed char)25;
int var_17 = 1803850533;
unsigned long long int var_18 = 15078479703836493331ULL;
unsigned long long int var_19 = 7725630836937833313ULL;
unsigned int var_20 = 3926989338U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
