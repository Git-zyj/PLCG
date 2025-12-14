#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1788019357;
short var_2 = (short)29985;
int var_4 = 1723199448;
unsigned int var_5 = 1399204297U;
short var_9 = (short)22975;
long long int var_10 = -3844610221177536692LL;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 397361763U;
unsigned short var_16 = (unsigned short)59937;
long long int var_17 = -8028951069115776155LL;
int zero = 0;
long long int var_18 = 6045976863424360493LL;
long long int var_19 = 1257719756147772551LL;
unsigned short var_20 = (unsigned short)35755;
signed char var_21 = (signed char)35;
signed char var_22 = (signed char)-27;
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
