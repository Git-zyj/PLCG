/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/497
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_11 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = (unsigned char)179;
            var_12 -= ((/* implicit */_Bool) ((14U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1])))));
            var_13 = ((553026317U) - (var_0));
        }
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
            {
                arr_14 [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) arr_11 [i_3] [i_3]);
                var_14 -= var_8;
            }
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
            {
                arr_18 [i_2] [i_3] [i_3] [i_5] = ((/* implicit */unsigned char) 492041948U);
                /* LoopNest 2 */
                for (unsigned int i_6 = 1; i_6 < 17; i_6 += 3) 
                {
                    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        {
                            arr_26 [i_2] [i_3] [i_5] [i_6] [i_7] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [7U] [i_3] [i_3] [i_3] [i_3] [i_3]))));
                            var_15 -= ((((/* implicit */_Bool) (~(arr_22 [i_7] [i_5] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_16 [i_2] [i_3] [i_2] [i_7]) == (492041935U))))) : (((unsigned int) 14U)));
                            arr_27 [i_7] |= ((/* implicit */unsigned int) ((unsigned char) 3802925355U));
                        }
                    } 
                } 
            }
            arr_28 [i_3] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_11 [i_2] [i_3]))))));
            var_16 -= ((/* implicit */unsigned char) ((_Bool) arr_9 [i_2]));
        }
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_2])))))));
        arr_29 [i_2] = ((((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2] [(unsigned char)2] [i_2] [i_2])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_2] [i_2]))) | (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))));
    }
    var_18 = ((/* implicit */unsigned int) ((unsigned char) max((max((43U), (var_6))), (((4294967295U) / (4294967283U))))));
    var_19 = ((/* implicit */_Bool) var_10);
    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
}
