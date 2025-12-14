#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2960693375398412718LL;
long long int var_1 = 8715703299619442999LL;
long long int var_3 = 2573074028827244966LL;
unsigned long long int var_5 = 3074537033413203896ULL;
long long int var_6 = 6175816697839826763LL;
long long int var_7 = -425427698389957730LL;
short var_8 = (short)22482;
unsigned short var_10 = (unsigned short)34098;
long long int var_11 = -568165109544688203LL;
unsigned char var_15 = (unsigned char)149;
int zero = 0;
long long int var_16 = -639294149473379840LL;
long long int var_17 = -6874496200602970773LL;
short var_18 = (short)-4221;
long long int var_19 = 2888624853364036506LL;
unsigned char var_20 = (unsigned char)74;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
