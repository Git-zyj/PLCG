#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)11;
unsigned char var_2 = (unsigned char)60;
long long int var_6 = 6404117370045963248LL;
unsigned long long int var_7 = 9029863330602715919ULL;
unsigned char var_9 = (unsigned char)68;
unsigned char var_10 = (unsigned char)11;
unsigned long long int var_11 = 6491732489664221764ULL;
int zero = 0;
long long int var_12 = 7133351400448653440LL;
unsigned long long int var_13 = 16995372651898536077ULL;
void init() {
}

void checksum() {
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
