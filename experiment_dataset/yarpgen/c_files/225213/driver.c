#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60135;
short var_1 = (short)-10800;
unsigned long long int var_2 = 15246773869785191337ULL;
int var_3 = -1639910368;
int var_4 = -292643772;
unsigned short var_7 = (unsigned short)15608;
signed char var_9 = (signed char)-77;
_Bool var_10 = (_Bool)0;
short var_11 = (short)11295;
int zero = 0;
long long int var_12 = 971023598877248150LL;
_Bool var_13 = (_Bool)0;
int var_14 = -1575548002;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
