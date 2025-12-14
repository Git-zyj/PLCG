#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3754194755862623034ULL;
unsigned short var_3 = (unsigned short)42661;
long long int var_4 = 3293033420216031465LL;
unsigned long long int var_5 = 11868178131720740057ULL;
long long int var_8 = -7499094460766361025LL;
long long int var_9 = 522937525191784840LL;
int var_10 = 1689596777;
long long int var_12 = -7214850352160972355LL;
int zero = 0;
long long int var_13 = -7307728145892673123LL;
int var_14 = -1645550275;
long long int var_15 = -1430425266970225341LL;
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
