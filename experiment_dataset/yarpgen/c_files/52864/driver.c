#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27515;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)-119;
signed char var_6 = (signed char)25;
unsigned short var_8 = (unsigned short)5839;
signed char var_9 = (signed char)-50;
long long int var_12 = -9138530590289629319LL;
int var_13 = 1775380745;
long long int var_15 = -6607356217269910396LL;
int zero = 0;
signed char var_17 = (signed char)-32;
long long int var_18 = 8172527947830945676LL;
unsigned short var_19 = (unsigned short)23863;
long long int var_20 = 4630219599244135808LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
