#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9406216195186648713ULL;
long long int var_3 = 229252308190869950LL;
unsigned long long int var_4 = 17412551729262177410ULL;
long long int var_5 = -4054627656645172701LL;
int zero = 0;
unsigned char var_11 = (unsigned char)174;
long long int var_12 = -4169658475974079902LL;
short var_13 = (short)-11436;
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
