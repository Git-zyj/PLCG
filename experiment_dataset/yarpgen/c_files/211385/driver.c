#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 391856372576579040LL;
long long int var_4 = -772090209471242734LL;
short var_15 = (short)-2312;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_19 = -763336610039017340LL;
long long int var_20 = -1193902138919374253LL;
unsigned short var_21 = (unsigned short)21193;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
