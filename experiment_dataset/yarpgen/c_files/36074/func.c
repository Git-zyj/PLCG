/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36074
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
    var_10 = ((/* implicit */signed char) -150529489);
    var_11 |= ((/* implicit */int) max((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) ((short) 150529488))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (min((var_7), (((/* implicit */unsigned int) var_6))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_2] [i_0]))))), (min((arr_2 [i_2] [i_2]), (arr_2 [i_0] [i_1])))));
                    var_13 = ((_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (arr_3 [i_2] [i_1] [i_0]) : (arr_3 [i_0] [i_1] [i_2])));
                }
            } 
        } 
    } 
    var_14 = (~(((/* implicit */int) var_2)));
}
