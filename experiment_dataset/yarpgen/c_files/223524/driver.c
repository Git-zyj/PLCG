#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1624001359;
unsigned char var_2 = (unsigned char)117;
long long int var_3 = 950065765581442153LL;
long long int var_5 = 8074027374906282853LL;
signed char var_8 = (signed char)26;
int zero = 0;
unsigned char var_10 = (unsigned char)94;
unsigned char var_11 = (unsigned char)224;
signed char var_12 = (signed char)35;
long long int var_13 = -4225226971360385434LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
