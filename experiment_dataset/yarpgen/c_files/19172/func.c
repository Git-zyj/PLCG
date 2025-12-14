/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19172
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        var_20 = ((/* implicit */unsigned int) (short)27463);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
        {
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((unsigned short) var_0)))));
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (+(((/* implicit */int) arr_7 [i_2 + 3] [i_2 + 3])))))));
            var_23 = ((/* implicit */signed char) min((var_23), (arr_7 [i_2] [i_2 + 2])));
        }
        for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            arr_10 [i_3] = ((/* implicit */unsigned int) ((signed char) var_19));
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) arr_1 [i_1])))))));
                /* LoopNest 2 */
                for (signed char i_5 = 4; i_5 < 14; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_19 [i_1] [i_5 - 1] = ((/* implicit */unsigned int) ((arr_4 [i_5 + 3]) ? (((/* implicit */int) arr_0 [i_5 + 3])) : (((/* implicit */int) arr_11 [i_1] [i_5 - 1] [i_5 - 1]))));
                            var_25 |= ((((/* implicit */int) arr_14 [i_5 + 3] [i_5 - 2] [i_5 - 2] [i_5 + 1])) & (((/* implicit */int) arr_14 [i_5 + 3] [i_5] [i_5 - 2] [i_5 + 1])));
                        }
                    } 
                } 
            }
        }
        var_26 -= ((/* implicit */unsigned char) ((short) arr_0 [i_1]));
    }
    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (-(((((/* implicit */int) var_2)) - (((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */int) var_0)))))))))));
}
