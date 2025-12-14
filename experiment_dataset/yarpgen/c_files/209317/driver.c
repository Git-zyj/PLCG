#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3463695517284226964ULL;
long long int var_4 = 1893847703123011195LL;
int var_9 = -940008251;
long long int var_15 = 3151128601877276787LL;
signed char var_16 = (signed char)115;
int zero = 0;
long long int var_18 = -5460182660792095045LL;
int var_19 = -163300600;
long long int var_20 = -5795138760018214998LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
