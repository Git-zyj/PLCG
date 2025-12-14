#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)57600;
unsigned short var_14 = (unsigned short)9057;
_Bool var_15 = (_Bool)0;
long long int var_16 = -1024428747846725413LL;
int zero = 0;
unsigned long long int var_17 = 8776326672074609935ULL;
unsigned short var_18 = (unsigned short)22732;
int var_19 = -698227732;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
