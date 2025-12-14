#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15806;
unsigned long long int var_1 = 12652239601631453020ULL;
short var_3 = (short)-30782;
int var_4 = -412472732;
unsigned short var_6 = (unsigned short)39602;
long long int var_8 = -1550811600444972786LL;
unsigned long long int var_9 = 6403729809025262792ULL;
int zero = 0;
short var_11 = (short)-32239;
short var_12 = (short)5644;
unsigned long long int var_13 = 14287937343149197996ULL;
void init() {
}

void checksum() {
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
