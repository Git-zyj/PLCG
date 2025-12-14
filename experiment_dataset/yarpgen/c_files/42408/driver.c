#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)202;
long long int var_2 = -5553101701756467122LL;
unsigned long long int var_3 = 803650584959612199ULL;
_Bool var_6 = (_Bool)0;
signed char var_9 = (signed char)-5;
unsigned int var_10 = 669658865U;
int zero = 0;
long long int var_13 = -8504702291862920875LL;
int var_14 = 521561046;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
