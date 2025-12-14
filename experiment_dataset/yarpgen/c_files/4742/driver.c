#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1556027849410148057LL;
long long int var_5 = 8299145145295338569LL;
long long int var_8 = 5905003723259443111LL;
long long int var_9 = 2421983927319411668LL;
long long int var_13 = 5528290749623523829LL;
long long int var_16 = -5866404163919361286LL;
long long int var_18 = 8154564672424286438LL;
int zero = 0;
long long int var_20 = -572324077259112083LL;
long long int var_21 = -4930476626081068795LL;
long long int var_22 = -1130189321477945767LL;
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
