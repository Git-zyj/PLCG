/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19628
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
    var_14 = ((/* implicit */signed char) -757152461);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((((((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [i_1 - 1])) - (var_1))) - (((((/* implicit */_Bool) 757152457)) ? (((/* implicit */int) (signed char)0)) : (757152458)))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-51)) + (2147483647))) << (((757152458) - (757152458)))))) ? (((/* implicit */int) ((arr_3 [i_0] [i_1 + 1] [i_1 + 1]) <= (((((/* implicit */_Bool) var_10)) ? (var_5) : (arr_1 [i_0])))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1] [i_2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))))))));
                    var_17 = arr_1 [i_0];
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_2);
}
