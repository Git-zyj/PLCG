#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1388953425947010030LL;
long long int var_1 = 593099732115041269LL;
unsigned long long int var_3 = 16349081373022545357ULL;
unsigned long long int var_6 = 6318881446510716850ULL;
unsigned short var_7 = (unsigned short)22211;
unsigned long long int var_8 = 8483372573720551536ULL;
int var_10 = -1022928498;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 3905331517U;
unsigned long long int var_16 = 17998135041796552388ULL;
unsigned short var_17 = (unsigned short)46854;
unsigned long long int var_18 = 8827158358849178101ULL;
signed char var_19 = (signed char)-19;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
