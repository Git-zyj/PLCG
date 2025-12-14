/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43288
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) max((var_7), (1329320162U))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */_Bool) max((var_11), (arr_4 [(short)8])));
                arr_6 [(unsigned short)12] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 1329320158U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
                arr_7 [i_1] |= 1329320133U;
                var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) var_3))))), (((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))));
            }
        } 
    } 
}
