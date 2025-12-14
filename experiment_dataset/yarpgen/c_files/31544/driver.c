#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 7737897756033143336ULL;
long long int var_6 = 1718167244653560266LL;
_Bool var_8 = (_Bool)0;
long long int var_9 = -2966643260698633647LL;
short var_12 = (short)-3045;
int zero = 0;
short var_13 = (short)-10044;
unsigned long long int var_14 = 9966891118850328309ULL;
_Bool var_15 = (_Bool)1;
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
