#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)2529;
unsigned long long int var_7 = 7731597193348248816ULL;
unsigned long long int var_9 = 1156182289669707760ULL;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)178;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 13777780497516183535ULL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 8237698989547899018ULL;
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
