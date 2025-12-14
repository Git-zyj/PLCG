#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18242817348775410280ULL;
long long int var_6 = 8101312137400887667LL;
long long int var_7 = 8532401533986288447LL;
unsigned short var_8 = (unsigned short)54217;
int zero = 0;
long long int var_14 = -5980461101973619866LL;
long long int var_15 = -5239451558195857140LL;
short var_16 = (short)4265;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
