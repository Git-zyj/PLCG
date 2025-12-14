/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27409
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */_Bool) ((long long int) (_Bool)1));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) var_11);
                    var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((var_15), (arr_3 [i_0] [i_2] [i_2]))), (((/* implicit */long long int) arr_4 [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 1]))))) ? (min((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1 + 1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_11))), (min((var_7), (((/* implicit */long long int) arr_1 [i_1])))))) : (var_11)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_6), (min((var_7), (((/* implicit */long long int) var_1)))))))));
    var_18 |= ((/* implicit */long long int) min((min((min((var_1), (var_1))), (var_1))), (var_12)));
}
