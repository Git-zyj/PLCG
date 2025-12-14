#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5290006518659598923LL;
unsigned char var_3 = (unsigned char)239;
signed char var_5 = (signed char)-49;
int var_9 = -1650836316;
int zero = 0;
unsigned int var_11 = 999879925U;
unsigned int var_12 = 3065691121U;
unsigned char var_13 = (unsigned char)154;
long long int var_14 = -9194024244345265811LL;
unsigned short var_15 = (unsigned short)523;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
