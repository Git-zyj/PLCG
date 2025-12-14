#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)19;
unsigned long long int var_3 = 701240282755007706ULL;
long long int var_8 = -5805960944268468635LL;
signed char var_9 = (signed char)-43;
long long int var_10 = -2781163922895774706LL;
short var_11 = (short)-25729;
unsigned int var_12 = 2810741026U;
int var_16 = -631092724;
int zero = 0;
long long int var_18 = 4667349040994253337LL;
unsigned long long int var_19 = 5108223321219411457ULL;
unsigned char var_20 = (unsigned char)61;
void init() {
}

void checksum() {
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
