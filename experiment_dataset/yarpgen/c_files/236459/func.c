/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236459
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
    var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((2295397885U) * (0U)))) && (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_14))))), (var_15))))));
    var_20 = ((/* implicit */signed char) var_0);
    var_21 = ((/* implicit */unsigned long long int) -9223372036854775786LL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) arr_1 [i_0 - 4] [i_0 + 1]);
        var_23 = ((/* implicit */unsigned int) (-(arr_2 [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((int) arr_0 [i_1]))), (arr_3 [i_1] [i_1])))) && ((!(((/* implicit */_Bool) arr_4 [i_1]))))));
        var_25 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [12ULL])) ? (656718263) : (-1741242259))))));
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(14309943710405391363ULL)))) ? (((/* implicit */unsigned long long int) 2428400069U)) : (arr_4 [6LL])))) ? (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [10LL]))))), (max((((/* implicit */unsigned long long int) 443372625U)), (var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [6LL])) && (((/* implicit */_Bool) (~(-188967558)))))))))))));
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) 4294967295U))));
    }
    var_28 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (var_6))))), (((max((var_11), (((/* implicit */unsigned long long int) 581373394)))) * (((/* implicit */unsigned long long int) -1089470258))))));
}
