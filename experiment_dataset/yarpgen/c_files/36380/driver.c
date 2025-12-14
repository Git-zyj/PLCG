#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)36;
long long int var_7 = 4225653349609975956LL;
int var_10 = -1044126588;
unsigned short var_11 = (unsigned short)31863;
long long int var_14 = 4100314143218948592LL;
int zero = 0;
unsigned short var_17 = (unsigned short)22237;
signed char var_18 = (signed char)-18;
long long int var_19 = 89178605175268826LL;
unsigned int var_20 = 3373049298U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
