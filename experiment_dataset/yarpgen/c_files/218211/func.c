/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218211
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) (short)-3865))))) || (((/* implicit */_Bool) var_1))))) - (((/* implicit */int) ((unsigned short) (unsigned short)32768)))));
    var_18 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_10))));
        var_19 = var_12;
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)32768))));
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        arr_14 [i_1] [i_2] [i_2] [i_1] = ((arr_6 [i_1] [(unsigned char)3]) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_2 + 1]))))));
                        var_22 = arr_9 [i_4] [i_1];
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)13]))) / (((unsigned int) var_15)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_4])) : (((/* implicit */int) arr_9 [i_3] [i_4])))))));
                    }
                    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((int) arr_13 [i_1] [i_2] [i_3] [i_1])), (((((/* implicit */_Bool) (unsigned short)32761)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [i_2] [3U])))))))));
                    var_25 = ((/* implicit */unsigned short) (~(((((/* implicit */int) (unsigned short)32782)) - (((/* implicit */int) (unsigned char)7))))));
                    var_26 = ((/* implicit */unsigned short) var_16);
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned char) (short)-16965);
    }
}
