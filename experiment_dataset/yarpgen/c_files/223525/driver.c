#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)113;
int var_12 = -231219128;
long long int var_13 = 9197883115370275169LL;
signed char var_14 = (signed char)26;
int zero = 0;
unsigned long long int var_19 = 3391771857723590714ULL;
int var_20 = 239322193;
int var_21 = 339703110;
long long int var_22 = -5799271037362610730LL;
void init() {
}

void checksum() {
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
