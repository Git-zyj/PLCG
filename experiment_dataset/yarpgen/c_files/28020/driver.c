#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3625028609726985867LL;
unsigned int var_7 = 582183270U;
long long int var_11 = -4682021849749647838LL;
int zero = 0;
short var_17 = (short)7007;
unsigned int var_18 = 3909996491U;
unsigned char var_19 = (unsigned char)123;
void init() {
}

void checksum() {
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
