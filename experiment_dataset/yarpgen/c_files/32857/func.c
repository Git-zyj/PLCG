/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32857
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
    for (signed char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (signed char)-117))) % (((/* implicit */int) ((signed char) var_8)))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])) | (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])) > (((/* implicit */int) (unsigned char)13)))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 1])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_1 + 2] [i_2 + 1])) : (((/* implicit */int) (short)32767))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 2; i_3 < 8; i_3 += 4) 
                    {
                        arr_10 [i_2] [i_1 + 4] [i_2] [i_3] = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))));
                        arr_11 [i_0] [i_1] [i_1 - 1] [i_2] [i_2] [i_3 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) (unsigned char)123))))) : (((((/* implicit */int) var_10)) / (((/* implicit */int) var_17))))));
                        var_21 = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_1 - 2] [i_2 - 1])) > (((/* implicit */int) arr_3 [i_0 + 1] [i_0] [i_0 + 1]))));
                        arr_12 [i_2] [i_2] [i_2] [i_3] = ((unsigned char) arr_6 [i_2] [i_2 - 2]);
                    }
                    var_22 = (signed char)-86;
                    /* LoopSeq 1 */
                    for (signed char i_4 = 1; i_4 < 10; i_4 += 4) 
                    {
                        var_23 = arr_9 [i_0] [i_0] [i_0 + 1] [i_1 - 2];
                        arr_15 [i_2] [i_2 + 2] [i_1 + 1] [i_0 + 1] [i_2] = ((/* implicit */signed char) arr_2 [i_0 - 1] [i_0] [i_0 + 1]);
                        arr_16 [i_2] [i_2 - 1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-1))))));
                        var_24 = ((/* implicit */signed char) (+(((/* implicit */int) arr_7 [i_0 - 1] [i_2 - 1] [i_4] [i_4]))));
                        var_25 &= ((/* implicit */unsigned char) (signed char)-114);
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0] [(signed char)2])) > (((/* implicit */int) arr_4 [i_0 - 1] [(short)0]))));
    }
    for (signed char i_5 = 3; i_5 < 20; i_5 += 2) 
    {
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) max((max(((-(((/* implicit */int) (unsigned char)197)))), (((((/* implicit */int) (unsigned char)138)) + (((/* implicit */int) arr_18 [i_5])))))), (((((/* implicit */int) (signed char)86)) & (((((/* implicit */int) var_12)) - (((/* implicit */int) var_13)))))))))));
        arr_20 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_18 [i_5 - 3])), (((unsigned char) (unsigned char)0))))) >= (((/* implicit */int) max(((signed char)62), ((signed char)127))))));
    }
    var_28 = var_7;
}
