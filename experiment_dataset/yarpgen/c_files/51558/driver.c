#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)51;
long long int var_1 = 2592381411465112155LL;
long long int var_2 = -4009090284956909117LL;
_Bool var_4 = (_Bool)0;
long long int var_7 = -8383004703699657066LL;
int var_8 = -709029530;
long long int var_11 = -642453595969608773LL;
int zero = 0;
int var_12 = -1559184773;
long long int var_13 = 1793415891570607803LL;
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
