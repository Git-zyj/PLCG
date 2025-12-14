#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6748573862869045017LL;
unsigned int var_2 = 1260955162U;
unsigned int var_8 = 1351410072U;
int var_9 = -974229447;
unsigned short var_11 = (unsigned short)59701;
int var_16 = 1778003861;
int zero = 0;
unsigned int var_19 = 1166288559U;
long long int var_20 = -4228903048592205557LL;
void init() {
}

void checksum() {
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
