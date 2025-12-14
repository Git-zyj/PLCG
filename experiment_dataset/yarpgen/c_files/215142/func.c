/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215142
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_2] [i_2 - 3] = var_0;
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        arr_9 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)448)) << (((((/* implicit */int) (signed char)-1)) + (17)))));
                        arr_10 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (var_12))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                    }
                    arr_11 [i_2] = ((/* implicit */_Bool) var_13);
                }
            } 
        } 
        arr_12 [(signed char)6] [i_0 - 1] = ((/* implicit */_Bool) arr_0 [i_0 - 3]);
        arr_13 [i_0] = ((/* implicit */unsigned int) var_1);
        arr_14 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-65)))));
    }
    var_15 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)6971))));
    var_16 = var_2;
}
