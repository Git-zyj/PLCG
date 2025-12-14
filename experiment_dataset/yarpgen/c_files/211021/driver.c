#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7227539268620744458ULL;
unsigned char var_4 = (unsigned char)177;
int var_9 = 429916278;
int var_17 = 1939539573;
int zero = 0;
unsigned char var_19 = (unsigned char)225;
unsigned long long int var_20 = 14327184912448272117ULL;
unsigned char var_21 = (unsigned char)59;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
