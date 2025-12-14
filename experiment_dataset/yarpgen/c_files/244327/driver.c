#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15938846511920594275ULL;
unsigned long long int var_3 = 7336564820132106790ULL;
unsigned long long int var_4 = 748886294852039155ULL;
unsigned long long int var_5 = 1483607776740097869ULL;
unsigned long long int var_10 = 5946867805465974200ULL;
unsigned long long int var_12 = 9732656462153004230ULL;
unsigned long long int var_13 = 5127744459150912523ULL;
unsigned long long int var_15 = 17116655132827720385ULL;
unsigned long long int var_17 = 14642791086562207749ULL;
int zero = 0;
unsigned long long int var_19 = 10691621923310853563ULL;
unsigned long long int var_20 = 1440703529526392860ULL;
unsigned long long int var_21 = 15716369144216938074ULL;
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
