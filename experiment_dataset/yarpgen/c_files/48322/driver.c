#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-44;
unsigned int var_2 = 578532990U;
unsigned char var_4 = (unsigned char)219;
unsigned short var_9 = (unsigned short)52085;
long long int var_11 = 3096560964462600102LL;
long long int var_13 = 4317503418556065825LL;
int zero = 0;
int var_14 = 1926666331;
long long int var_15 = 4500521534777432548LL;
signed char var_16 = (signed char)-80;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
