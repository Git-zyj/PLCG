#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17111392685353499469ULL;
unsigned long long int var_9 = 15732896745240087539ULL;
unsigned long long int var_10 = 10276836009312787049ULL;
unsigned long long int var_11 = 7964907056690775410ULL;
unsigned long long int var_14 = 15024837694380110881ULL;
unsigned long long int var_15 = 5692669738103288576ULL;
unsigned long long int var_19 = 14025613016181676812ULL;
int zero = 0;
unsigned long long int var_20 = 3049678812881147317ULL;
unsigned long long int var_21 = 6563163193729859620ULL;
unsigned long long int var_22 = 18300180187728264377ULL;
void init() {
}

void checksum() {
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
