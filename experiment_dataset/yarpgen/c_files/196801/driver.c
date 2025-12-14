#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-58;
signed char var_7 = (signed char)94;
unsigned char var_8 = (unsigned char)237;
unsigned char var_9 = (unsigned char)231;
unsigned long long int var_10 = 13689151211074267314ULL;
signed char var_18 = (signed char)111;
unsigned char var_19 = (unsigned char)170;
int zero = 0;
signed char var_20 = (signed char)-35;
unsigned short var_21 = (unsigned short)27899;
void init() {
}

void checksum() {
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
