#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1186621734;
signed char var_1 = (signed char)-11;
int var_2 = 368711128;
_Bool var_4 = (_Bool)0;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)-55;
_Bool var_15 = (_Bool)1;
int var_16 = 1703632163;
long long int var_17 = 4440106634975311590LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
long long int var_20 = -8334170255978298859LL;
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
