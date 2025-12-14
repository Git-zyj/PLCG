#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 5220893235649479023ULL;
unsigned char var_6 = (unsigned char)161;
_Bool var_7 = (_Bool)1;
int var_8 = -436485886;
short var_9 = (short)-26212;
_Bool var_10 = (_Bool)1;
long long int var_11 = 5515313977693395438LL;
int var_12 = -527492221;
unsigned short var_13 = (unsigned short)28709;
int var_15 = 812789736;
long long int var_17 = -8012155765920471794LL;
int zero = 0;
int var_20 = -849603265;
unsigned short var_21 = (unsigned short)64987;
long long int var_22 = 8687078526890171421LL;
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
