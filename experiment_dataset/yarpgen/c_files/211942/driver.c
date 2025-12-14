#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_13 = 797370910U;
long long int var_14 = 7930906922774759588LL;
int zero = 0;
long long int var_18 = -6433724996878295989LL;
unsigned char var_19 = (unsigned char)19;
unsigned int var_20 = 659806697U;
unsigned long long int var_21 = 4936345619848266520ULL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
