/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246823
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
    var_12 = ((/* implicit */long long int) var_10);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) max((max((arr_0 [i_1 - 1]), (((/* implicit */int) var_10)))), (((/* implicit */int) ((signed char) var_9))))))));
                    arr_9 [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_7 [i_0 + 2] [i_1 - 1] [i_2] [i_2]), (((/* implicit */unsigned char) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1655985004))))) : (min((959020692), (((/* implicit */int) var_0))))));
                    var_14 = ((/* implicit */int) min((max((arr_6 [i_1 + 1]), (arr_6 [i_1 - 1]))), (arr_6 [i_1 + 1])));
                    var_15 = ((/* implicit */long long int) max((((((/* implicit */int) (unsigned char)127)) / (max((((/* implicit */int) (short)127)), (1350028891))))), ((-(((/* implicit */int) (_Bool)1))))));
                    arr_10 [i_0] = ((((/* implicit */_Bool) (short)12197)) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) 3068954605475085585LL))))));
                }
            } 
        } 
    } 
    var_16 *= ((/* implicit */unsigned char) var_6);
}
