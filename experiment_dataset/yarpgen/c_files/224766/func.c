/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224766
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) var_19)) ? (arr_3 [i_1] [i_0] [i_0]) : (arr_3 [i_1] [i_0] [i_0]))) >> (((arr_5 [i_0 - 2] [i_0 + 1] [i_0 - 1]) - (2969062067U)))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 3; i_2 < 8; i_2 += 4) 
                {
                    var_20 = ((((arr_10 [i_1]) << (((((/* implicit */int) (unsigned short)11504)) - (11478))))) % (((/* implicit */unsigned int) ((/* implicit */int) min((min(((unsigned short)58687), (var_13))), (((/* implicit */unsigned short) arr_4 [i_2] [i_0] [i_0])))))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */int) var_18)) / (var_16))) < (((/* implicit */int) arr_9 [i_2] [i_2 + 1] [i_2 - 1] [i_0 + 1]))))) < ((~(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)58676))))))));
                }
                for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    var_22 *= ((((/* implicit */_Bool) (~(-9223372036854775803LL)))) ? (3596147397U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54032))));
                    arr_14 [i_3] [i_1] [i_0] = ((/* implicit */unsigned short) arr_11 [i_3] [i_1] [i_0]);
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_11 [i_3] [i_1] [i_0]))));
                }
                var_24 = 384215948U;
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_4 = 2; i_4 < 16; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_5 = 1; i_5 < 16; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 4; i_6 < 14; i_6 += 2) 
            {
                for (unsigned short i_7 = 3; i_7 < 15; i_7 += 1) 
                {
                    {
                        arr_24 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [i_7 - 2] [i_7 - 3] [i_7 - 3])) / (((/* implicit */int) (unsigned short)23341))));
                        arr_25 [i_7] [i_5] [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [i_7 + 2] [i_6 + 1] [i_5 + 2])) + (((/* implicit */int) arr_18 [i_7 - 1] [i_6 + 1] [i_5 + 2]))));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)11883)) >> (((((/* implicit */int) arr_17 [i_5] [i_4])) - (36234)))))) ? (((/* implicit */int) (unsigned short)64309)) : ((-(var_12)))));
            arr_26 [i_5] = ((/* implicit */unsigned short) (+(arr_20 [i_4 + 2])));
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_5 + 2] [i_5 + 2] [i_4 - 2])) & (((/* implicit */int) arr_19 [i_5 + 2] [i_5 + 1] [i_4 + 2]))));
        }
        arr_27 [i_4 + 2] [i_4] = ((/* implicit */unsigned short) var_2);
        var_27 = ((/* implicit */signed char) var_10);
    }
    var_28 = var_6;
}
