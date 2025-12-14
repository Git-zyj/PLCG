/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228739
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
    var_17 = ((/* implicit */signed char) 3430897033U);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 7; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1 + 4] [i_2] &= ((/* implicit */signed char) min((min((((/* implicit */int) var_14)), (((((/* implicit */int) (short)511)) + (((/* implicit */int) var_15)))))), (((/* implicit */int) arr_0 [i_0] [i_2]))));
                    arr_10 [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (var_6) : (((/* implicit */long long int) var_4))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)511)))), (((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (var_5)))))), (((/* implicit */int) var_14))));
}
