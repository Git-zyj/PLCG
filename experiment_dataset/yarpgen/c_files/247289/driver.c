#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17430854002819192854ULL;
_Bool var_2 = (_Bool)0;
short var_4 = (short)-30567;
long long int var_6 = 6583630409721542974LL;
long long int var_9 = 6326935220739414953LL;
signed char var_10 = (signed char)-119;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 968375921282171013ULL;
unsigned int var_15 = 2751339972U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
