#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6945594777353648814LL;
long long int var_7 = 6744211519224733281LL;
long long int var_9 = 5705330130524375665LL;
int zero = 0;
long long int var_12 = 579543849043698971LL;
long long int var_13 = 4811517496159470535LL;
void init() {
}

void checksum() {
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
