#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5234703996295352000LL;
unsigned short var_2 = (unsigned short)20238;
long long int var_4 = -6061419611180054332LL;
long long int var_5 = 6446260355718792115LL;
long long int var_8 = 4762340624571974786LL;
unsigned char var_10 = (unsigned char)75;
long long int var_11 = 5103643964242372847LL;
unsigned short var_15 = (unsigned short)18263;
unsigned short var_16 = (unsigned short)1724;
int zero = 0;
unsigned short var_19 = (unsigned short)62374;
int var_20 = 1562556072;
int var_21 = -1780745369;
int var_22 = 522299435;
int var_23 = -2311065;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
