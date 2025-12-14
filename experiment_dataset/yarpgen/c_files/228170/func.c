/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228170
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
    var_20 &= ((/* implicit */signed char) 3411152314U);
    var_21 = ((/* implicit */unsigned short) var_14);
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */short) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */short) (signed char)112);
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_1 [i_0] [(signed char)5]))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_6 [i_1] &= ((/* implicit */short) var_11);
        /* LoopSeq 1 */
        for (short i_2 = 2; i_2 < 23; i_2 += 4) 
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)29793), (((/* implicit */short) var_4))))) ? (((/* implicit */int) min(((signed char)127), (((/* implicit */signed char) (_Bool)1))))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_8 [i_1] [i_1] [14LL])) : (((/* implicit */int) var_9))))))) ? (min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)5))))), (max((2920771120U), (((/* implicit */unsigned int) var_19)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_8 [i_1] [(_Bool)1] [i_1])))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 3; i_5 < 24; i_5 += 2) 
                    {
                        {
                            arr_17 [i_1] [i_2] [i_3] [23U] [(signed char)21] = (signed char)113;
                            arr_18 [(short)16] [(short)9] [i_3] [i_4] [i_5 + 1] = ((/* implicit */signed char) var_15);
                            arr_19 [i_3] [i_4] [(_Bool)1] [(signed char)22] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) -6031426280662281887LL)) ? (7564892779786011638LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            }
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) 3045319422725249459LL)) ? (((/* implicit */int) (short)4519)) : (((/* implicit */int) (signed char)6)))))));
        }
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) arr_11 [i_1]))));
    }
    /* vectorizable */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        arr_22 [i_6] &= ((/* implicit */short) ((469762048U) << (((-6179932925639428802LL) + (6179932925639428828LL)))));
        arr_23 [i_6 - 1] = ((/* implicit */long long int) (short)112);
    }
}
