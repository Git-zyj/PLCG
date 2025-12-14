/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242236
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
    var_12 &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) var_4))))))));
    var_13 = ((/* implicit */signed char) (+(((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [(signed char)18] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 3])) ? (((/* implicit */int) arr_3 [i_0 + 3] [i_0 - 1] [i_0 + 3])) : (((/* implicit */int) arr_3 [i_0 + 3] [i_0 - 1] [i_0 + 2]))))) ? (((/* implicit */int) (signed char)-78)) : (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 3]))))));
                var_14 = arr_4 [i_0] [i_1] [i_0];
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 21; i_2 += 1) 
                {
                    var_15 = ((/* implicit */signed char) max((var_15), ((signed char)-20)));
                    arr_8 [(signed char)16] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (((~(((/* implicit */int) (signed char)-72)))) | (((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) arr_3 [i_0] [i_0 + 2] [i_0 + 2])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_2)))))))));
                }
                var_16 |= (signed char)-96;
            }
        } 
    } 
}
