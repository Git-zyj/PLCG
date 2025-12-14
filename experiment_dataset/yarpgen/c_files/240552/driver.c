#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3148996367U;
unsigned char var_3 = (unsigned char)240;
signed char var_6 = (signed char)0;
long long int var_11 = -7494822405092878857LL;
unsigned int var_14 = 3720998116U;
int zero = 0;
unsigned long long int var_15 = 6714003180603572079ULL;
int var_16 = -1945069228;
unsigned char var_17 = (unsigned char)176;
unsigned int var_18 = 1955862921U;
unsigned long long int var_19 = 6780058343991222037ULL;
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
