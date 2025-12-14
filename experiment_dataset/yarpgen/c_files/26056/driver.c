#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -451724383;
int var_1 = -1687941680;
short var_3 = (short)-27115;
long long int var_4 = 6146473021051366936LL;
long long int var_6 = -822647797536433273LL;
long long int var_9 = -651472489866224043LL;
int var_10 = -325646190;
unsigned char var_11 = (unsigned char)123;
int zero = 0;
unsigned int var_13 = 3676520546U;
long long int var_14 = -3911607772586136303LL;
long long int var_15 = 3387648020006562480LL;
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
