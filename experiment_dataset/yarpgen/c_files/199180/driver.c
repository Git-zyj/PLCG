#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7328660298858472204LL;
_Bool var_2 = (_Bool)1;
long long int var_3 = 3456528623334563008LL;
long long int var_4 = 2667183605019483819LL;
long long int var_5 = 440230854700285989LL;
long long int var_7 = -7139572746367842928LL;
long long int var_8 = 2798167103395413749LL;
_Bool var_9 = (_Bool)0;
long long int var_11 = -3820980892480255520LL;
int zero = 0;
long long int var_14 = 4834154867838183619LL;
long long int var_15 = -1257879450786685675LL;
long long int var_16 = 7145340410406671088LL;
long long int var_17 = 3958738905279018361LL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
