#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1905681369631589222LL;
unsigned short var_2 = (unsigned short)33788;
unsigned char var_3 = (unsigned char)223;
int var_4 = 1966410058;
_Bool var_5 = (_Bool)0;
long long int var_6 = 5787181522772466050LL;
long long int var_8 = 3463902594607227335LL;
long long int var_9 = -225792320579612474LL;
int zero = 0;
long long int var_11 = 7550820056327581399LL;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-76;
int var_14 = 376556652;
unsigned short var_15 = (unsigned short)57324;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
