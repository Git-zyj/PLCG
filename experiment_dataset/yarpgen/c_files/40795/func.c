/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40795
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((((/* implicit */int) (signed char)-41)) + (2147483647))) >> (((9701990345840731207ULL) - (9701990345840731201ULL))))) >> (((((/* implicit */int) max(((short)32755), (((/* implicit */short) (unsigned char)225))))) - (32731)))))) - (((arr_1 [i_0]) * (arr_1 [12LL])))));
        var_15 = ((/* implicit */signed char) (~(max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 18446744073709551615ULL)))))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_1 [(signed char)12]) < (arr_1 [9LL])))) / (((((/* implicit */_Bool) 4330802514660866958LL)) ? (((/* implicit */int) (short)383)) : (((/* implicit */int) (short)383))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225))) & (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [(_Bool)0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (arr_1 [(signed char)16]))))))) : (max(((-(arr_1 [(signed char)5]))), (((/* implicit */unsigned long long int) var_13))))));
        var_17 &= ((/* implicit */unsigned long long int) (signed char)20);
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_1))));
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) arr_3 [i_1] [i_1]);
        arr_4 [i_1] [i_1] = ((/* implicit */signed char) ((-4330802514660866968LL) / (-7519242419572472792LL)));
    }
    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-48))));
}
