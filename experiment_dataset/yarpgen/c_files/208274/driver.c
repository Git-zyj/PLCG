#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 869145225;
long long int var_2 = 8656439671396576296LL;
unsigned long long int var_5 = 3796976774780776250ULL;
unsigned long long int var_6 = 8419267279420711840ULL;
unsigned short var_9 = (unsigned short)47080;
long long int var_13 = -8382764014573458784LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -1964161588;
unsigned int var_19 = 3577831386U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
