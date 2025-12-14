/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4489
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)46545)) : (((/* implicit */int) var_9))));
                                arr_11 [(unsigned short)15] [i_1] [i_2] [i_3] [i_4] = (unsigned short)65535;
                                arr_12 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? ((((-(((/* implicit */int) (unsigned short)32084)))) & ((+(((/* implicit */int) arr_2 [i_2] [(unsigned short)11])))))) : (((((/* implicit */int) (unsigned short)33451)) / (((/* implicit */int) (unsigned short)57065))))));
                                arr_13 [i_2] [i_1] [i_2] [i_2] [(unsigned short)16] [i_4] = arr_6 [i_0] [i_1 - 1] [i_3] [i_4];
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) var_1)))), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) var_14))))));
            }
        } 
    } 
    var_21 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
    var_22 += ((unsigned short) max((((/* implicit */int) ((unsigned short) (unsigned short)16256))), ((~(((/* implicit */int) (unsigned short)9506))))));
}
