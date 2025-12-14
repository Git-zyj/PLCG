#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 174110867969890260LL;
long long int var_6 = 4414755032510138512LL;
int zero = 0;
unsigned long long int var_20 = 9057990496426523220ULL;
unsigned char var_21 = (unsigned char)139;
long long int var_22 = 7148776534589825374LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
