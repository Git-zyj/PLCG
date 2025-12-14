#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1148275849922543399LL;
unsigned char var_6 = (unsigned char)123;
unsigned char var_7 = (unsigned char)127;
unsigned char var_9 = (unsigned char)94;
int zero = 0;
unsigned long long int var_13 = 9382236578063779899ULL;
unsigned char var_14 = (unsigned char)177;
unsigned char var_15 = (unsigned char)195;
void init() {
}

void checksum() {
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
