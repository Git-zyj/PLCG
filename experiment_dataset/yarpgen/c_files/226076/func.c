/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226076
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (var_4)))))) ? (min((((((/* implicit */_Bool) -281768407)) ? (-281768407) : (281768414))), (((/* implicit */int) ((9695360341516093260ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))) : (((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_1] [12ULL] [i_1] = ((/* implicit */int) var_1);
                var_17 = (+(((((/* implicit */_Bool) var_0)) ? (arr_5 [i_0 - 3] [i_0 - 3]) : (arr_5 [i_0 + 2] [i_1]))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) 8751383732193458351ULL))))))));
    var_19 = ((/* implicit */unsigned long long int) (-(((var_4) - ((~(var_14)))))));
}
