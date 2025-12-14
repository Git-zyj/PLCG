#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8286673938314872417LL;
long long int var_3 = -894860059902783319LL;
long long int var_4 = -9169630376999921637LL;
long long int var_7 = -911133075557487689LL;
long long int var_9 = -1011150356368995404LL;
int zero = 0;
long long int var_10 = 3958183316498192288LL;
long long int var_11 = 3373489557489893063LL;
long long int var_12 = -3190930247579794197LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
