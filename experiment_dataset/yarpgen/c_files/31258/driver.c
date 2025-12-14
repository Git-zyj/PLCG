#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-8;
unsigned long long int var_3 = 15556315566315537112ULL;
unsigned char var_4 = (unsigned char)18;
long long int var_5 = -4531525316382836565LL;
unsigned int var_6 = 4284182199U;
unsigned long long int var_9 = 6195348374500476370ULL;
int zero = 0;
long long int var_18 = 4086506241165796229LL;
long long int var_19 = 4231992534285409624LL;
unsigned int var_20 = 864309397U;
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
