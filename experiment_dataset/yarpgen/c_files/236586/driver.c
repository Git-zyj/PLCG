#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7729626230060529860LL;
long long int var_9 = -5407352754355762963LL;
long long int var_12 = -8540305581312678042LL;
unsigned int var_17 = 2028013456U;
int zero = 0;
int var_19 = 2123771680;
long long int var_20 = 6546316604789684279LL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)51;
void init() {
}

void checksum() {
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
