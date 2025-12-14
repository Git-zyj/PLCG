/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230010
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
    var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_5)), (16707320735645672708ULL)));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (-(1739423338063878901ULL))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) max((((short) -7756082209676516834LL)), (((/* implicit */short) var_1))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_17 ^= ((/* implicit */int) arr_0 [i_0]);
        var_18 ^= ((((/* implicit */_Bool) -83120460)) ? (-7756082209676516834LL) : (((/* implicit */long long int) 1750671325)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */short) arr_1 [i_1]);
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((1739423338063878924ULL) / (((/* implicit */unsigned long long int) arr_0 [i_1]))))));
    }
    for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+(((/* implicit */int) min((arr_6 [i_2]), (((/* implicit */short) arr_8 [3U]))))))))));
        arr_9 [i_2] = ((/* implicit */signed char) arr_6 [i_2]);
    }
    var_21 = ((/* implicit */signed char) (~((+(max((274810798080LL), (((/* implicit */long long int) var_3))))))));
}
