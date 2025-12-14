#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-43;
signed char var_7 = (signed char)108;
unsigned long long int var_11 = 15572252300785848910ULL;
int zero = 0;
long long int var_15 = -5619589836068847633LL;
unsigned long long int var_16 = 795701820829313362ULL;
unsigned long long int var_17 = 15115406342824121645ULL;
signed char var_18 = (signed char)74;
unsigned int var_19 = 3915588591U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
