#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4186740524882838274ULL;
unsigned int var_2 = 2039739943U;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)19209;
unsigned char var_7 = (unsigned char)78;
int zero = 0;
unsigned char var_10 = (unsigned char)188;
unsigned int var_11 = 137903118U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
