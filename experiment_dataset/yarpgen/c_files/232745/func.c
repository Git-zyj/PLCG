/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232745
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
    var_11 = ((/* implicit */unsigned short) var_2);
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_10) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */int) var_5)))))))) ? (var_7) : (((/* implicit */unsigned long long int) var_1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) (_Bool)0);
                var_14 = ((/* implicit */unsigned short) min((arr_3 [i_0 - 1]), (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (arr_3 [i_0 - 1]) : (((/* implicit */int) arr_0 [i_1 - 2]))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_1 - 1])) != (((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_0 - 2])) ? (arr_4 [i_1 - 2] [i_0 - 2]) : (((/* implicit */int) (short)32767))))));
            }
        } 
    } 
    var_15 = (((-(1206765297U))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_9))))));
}
