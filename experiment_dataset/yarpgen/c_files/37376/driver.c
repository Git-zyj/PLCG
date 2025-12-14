#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -120402212;
unsigned long long int var_6 = 16319737610342191711ULL;
long long int var_16 = -4942200739510403498LL;
short var_17 = (short)20680;
int zero = 0;
int var_18 = -1508977088;
int var_19 = 409786726;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
