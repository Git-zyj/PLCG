/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38848
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
    var_17 = max((((/* implicit */unsigned long long int) var_16)), (18446744073709551615ULL));
    var_18 = ((/* implicit */int) ((((int) max((((/* implicit */unsigned long long int) var_8)), (18446744073709551607ULL)))) != (var_16)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1010703369U))))), (var_11)));
        var_20 |= ((/* implicit */signed char) 18446744073709551595ULL);
        arr_2 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) 18446744073709551602ULL)))));
        arr_3 [i_0] = 18446744073709551602ULL;
        arr_4 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
    }
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? ((((~(var_12))) * (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-1))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (var_15)))) ? (arr_6 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))));
        var_21 |= ((/* implicit */int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))), (max((((/* implicit */unsigned int) arr_0 [i_1])), (22U)))));
        var_22 = ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) 22ULL)))))) ? (((int) 1481335247)) : (((int) ((1481335233) / (((/* implicit */int) (unsigned short)36626))))));
    }
}
