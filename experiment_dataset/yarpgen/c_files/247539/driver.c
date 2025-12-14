#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7105335256766420437ULL;
unsigned long long int var_4 = 7883824037210425507ULL;
signed char var_5 = (signed char)-58;
unsigned long long int var_6 = 11827865856367975993ULL;
long long int var_8 = -749742966953358211LL;
long long int var_9 = -5856608013636330203LL;
short var_10 = (short)-29758;
unsigned int var_13 = 3189387026U;
long long int var_14 = -1239459961967571008LL;
unsigned long long int var_15 = 14815474170030036774ULL;
unsigned long long int var_16 = 1947350691883187345ULL;
int var_18 = 1164188740;
long long int var_19 = 237195806010991769LL;
int zero = 0;
unsigned short var_20 = (unsigned short)53934;
long long int var_21 = 2353318789930856118LL;
long long int var_22 = 8564225416588719601LL;
unsigned int var_23 = 3011286402U;
unsigned short var_24 = (unsigned short)38878;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
