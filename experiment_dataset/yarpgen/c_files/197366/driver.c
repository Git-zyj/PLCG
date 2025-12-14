#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)116;
unsigned long long int var_3 = 13311921334587552789ULL;
unsigned long long int var_14 = 10872489671871964432ULL;
unsigned char var_17 = (unsigned char)95;
int zero = 0;
int var_20 = 116321632;
short var_21 = (short)-1708;
signed char var_22 = (signed char)105;
unsigned long long int var_23 = 16440290563614357691ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
