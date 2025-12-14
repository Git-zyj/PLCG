#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)135;
long long int var_7 = -7078921288402927971LL;
unsigned int var_8 = 1234697770U;
unsigned int var_9 = 204981676U;
unsigned long long int var_10 = 12878402053179425719ULL;
unsigned char var_16 = (unsigned char)122;
int zero = 0;
signed char var_20 = (signed char)23;
unsigned int var_21 = 2764536256U;
long long int var_22 = -3771290152708388769LL;
unsigned long long int var_23 = 16224106404754506674ULL;
unsigned long long int var_24 = 6356080319194519028ULL;
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
