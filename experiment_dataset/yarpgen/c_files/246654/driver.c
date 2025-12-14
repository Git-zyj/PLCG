#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)49;
long long int var_6 = 4234528398400000772LL;
long long int var_9 = 8410197254297350956LL;
long long int var_10 = 3295596079188099919LL;
int zero = 0;
unsigned char var_11 = (unsigned char)182;
unsigned char var_12 = (unsigned char)85;
unsigned char var_13 = (unsigned char)208;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
