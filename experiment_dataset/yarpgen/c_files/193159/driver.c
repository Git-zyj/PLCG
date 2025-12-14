#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 579988942674040198LL;
signed char var_6 = (signed char)49;
unsigned char var_10 = (unsigned char)68;
long long int var_12 = 7786305960969152978LL;
int zero = 0;
long long int var_19 = 3827949652561422880LL;
long long int var_20 = -587472398371892644LL;
long long int var_21 = -207167996530898787LL;
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
