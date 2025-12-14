#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4027490955U;
long long int var_1 = 4180814808457050311LL;
unsigned short var_3 = (unsigned short)18424;
unsigned int var_5 = 825799396U;
long long int var_6 = -7023746347049652795LL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)46746;
unsigned short var_9 = (unsigned short)47816;
int zero = 0;
unsigned short var_10 = (unsigned short)28716;
unsigned int var_11 = 3731605029U;
int var_12 = 401754774;
unsigned int var_13 = 1972778212U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
