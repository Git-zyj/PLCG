#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3555291147023294478LL;
signed char var_1 = (signed char)103;
int var_6 = -685818637;
_Bool var_7 = (_Bool)1;
int zero = 0;
long long int var_11 = 8027807743440725860LL;
long long int var_12 = -1245971411509314600LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
