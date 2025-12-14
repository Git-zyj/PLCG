#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)81;
short var_1 = (short)-2305;
unsigned int var_6 = 1575782560U;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)224;
int zero = 0;
signed char var_15 = (signed char)-103;
unsigned int var_16 = 1665505671U;
unsigned long long int var_17 = 15977499298123818534ULL;
unsigned long long int var_18 = 2330070592012013868ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
