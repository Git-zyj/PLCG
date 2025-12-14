/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199244
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
    var_16 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -2133139877)))))) : ((~(820465187U))))) > (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (unsigned short)49378)))))) % (var_14)))));
    var_17 += ((/* implicit */signed char) (~(((/* implicit */int) var_13))));
    var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)-1))))))) || (((/* implicit */_Bool) var_13))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */int) (((!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))) || (((/* implicit */_Bool) (-(1125449736U))))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) / (arr_0 [i_1])))))))))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (+(7081653104926798077LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-1824)) || (((/* implicit */_Bool) 3098515050223790481LL)))))) : (((618236232680905751LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))));
                var_21 = arr_0 [i_0];
            }
        } 
    } 
    var_22 += (!(((/* implicit */_Bool) (+((-(((/* implicit */int) var_10))))))));
}
