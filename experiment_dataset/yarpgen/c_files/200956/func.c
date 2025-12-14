/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200956
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
    var_11 = var_2;
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_12 = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) -552727883998669681LL)) || (arr_5 [i_1] [i_1] [i_2])))) & (((/* implicit */int) arr_5 [i_2] [i_0 + 1] [i_0 - 2]))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_3 [i_0 - 1])))));
                    var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_1])) ? (-552727883998669659LL) : (((/* implicit */long long int) 1653669055))));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) max((arr_3 [i_0]), (max((((/* implicit */int) arr_1 [i_1] [i_1])), (max((arr_0 [i_1]), (((/* implicit */int) var_8)))))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_7);
}
