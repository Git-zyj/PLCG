#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4944571934791207424LL;
int var_4 = -1592377684;
unsigned char var_6 = (unsigned char)97;
short var_8 = (short)-23909;
_Bool var_9 = (_Bool)0;
long long int var_10 = 2563346879854808245LL;
int zero = 0;
unsigned long long int var_12 = 5357020908019655303ULL;
_Bool var_13 = (_Bool)0;
long long int var_14 = 8241801427922949554LL;
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
