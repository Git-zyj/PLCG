/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26693
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
    var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) var_17))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) (signed char)-99))));
    var_20 = ((/* implicit */_Bool) (short)32767);
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 = ((/* implicit */signed char) ((arr_2 [i_0 + 1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_0 - 1]))));
            var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_16))));
            var_23 = ((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1]);
            /* LoopSeq 1 */
            for (signed char i_2 = 4; i_2 < 19; i_2 += 3) 
            {
                arr_9 [i_0] [i_0] [i_0] [i_0] = var_9;
                var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) (_Bool)0))))) < (((/* implicit */int) (_Bool)1))));
                var_25 = var_13;
            }
            arr_10 [i_0] [i_0] = var_15;
        }
    }
}
