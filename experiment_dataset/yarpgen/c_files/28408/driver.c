#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3166165540188587295LL;
int var_5 = 559168896;
_Bool var_6 = (_Bool)1;
int var_7 = -733153195;
_Bool var_9 = (_Bool)0;
int var_10 = 2055579376;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
_Bool var_15 = (_Bool)0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -6676587191277480336LL;
int zero = 0;
long long int var_19 = 8682225489714213969LL;
long long int var_20 = -8924453659180902704LL;
int var_21 = 147525168;
int var_22 = 891134313;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
