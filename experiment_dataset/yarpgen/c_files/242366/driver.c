#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3876694229019574879LL;
signed char var_2 = (signed char)104;
unsigned long long int var_4 = 13896616350529479118ULL;
_Bool var_7 = (_Bool)0;
signed char var_11 = (signed char)-87;
long long int var_12 = -2325681620292889151LL;
long long int var_13 = -4192282761471230675LL;
int var_17 = 1216439737;
int zero = 0;
unsigned long long int var_18 = 6827872265457733688ULL;
int var_19 = -872555618;
short var_20 = (short)-1275;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-93;
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
