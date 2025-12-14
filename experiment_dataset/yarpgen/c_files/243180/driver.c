#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1629968615189996676LL;
long long int var_4 = 3850527558766113310LL;
long long int var_6 = 776475027352973754LL;
long long int var_8 = 3821720729189607202LL;
long long int var_9 = -1576387271878043649LL;
int zero = 0;
long long int var_10 = 5258603578989803969LL;
long long int var_11 = -1050440895890954200LL;
long long int var_12 = -2644428329840313290LL;
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
