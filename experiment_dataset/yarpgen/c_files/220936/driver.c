#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2115354711;
long long int var_2 = 7439503253309599563LL;
long long int var_3 = 9188565215343696382LL;
long long int var_8 = 5167007795429807825LL;
int var_9 = -2086563864;
signed char var_11 = (signed char)-71;
unsigned short var_12 = (unsigned short)21313;
unsigned int var_13 = 2920179952U;
_Bool var_14 = (_Bool)1;
long long int var_15 = -1848559253541101231LL;
int zero = 0;
long long int var_19 = 8137326996820386968LL;
unsigned long long int var_20 = 11652079439767261078ULL;
void init() {
}

void checksum() {
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
