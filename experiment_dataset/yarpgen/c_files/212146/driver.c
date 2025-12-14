#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13857;
unsigned int var_2 = 478442109U;
long long int var_4 = -1550072693345574550LL;
long long int var_8 = -9080151068360279395LL;
long long int var_10 = 2284696818236907799LL;
unsigned short var_12 = (unsigned short)64468;
signed char var_14 = (signed char)50;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_18 = 3501048819477206389LL;
unsigned short var_19 = (unsigned short)49216;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 13986473852729840451ULL;
unsigned int var_22 = 321039653U;
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
