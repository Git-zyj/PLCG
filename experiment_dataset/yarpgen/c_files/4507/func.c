/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4507
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
    var_18 -= var_12;
    var_19 = var_7;
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_20 = arr_11 [i_0] [i_0] [i_4] [i_4] [i_4];
                                var_21 -= arr_1 [i_3 + 1] [i_1 + 1];
                                arr_13 [i_1] [i_3] [(unsigned char)4] [(unsigned char)12] [i_0] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_12 [(unsigned char)10] [i_1 - 1] [i_1] [(unsigned char)3] [i_1]))));
                            }
                        } 
                    } 
                    var_22 = arr_9 [i_0] [i_0] [i_1] [i_0 + 1];
                    var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_1 - 1] [i_0 + 1]))));
                }
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                {
                    var_24 = var_16;
                    var_25 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 4] [i_1 - 1] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))));
                }
                /* vectorizable */
                for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
                {
                    var_26 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)212))));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 3; i_7 < 15; i_7 += 4) 
                    {
                        arr_21 [i_1] = arr_15 [i_1] [(unsigned char)5];
                        arr_22 [i_7] [i_7] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))));
                        var_27 = arr_4 [i_1] [(unsigned char)7];
                    }
                }
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1 + 1]))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_0])))) : ((+(((/* implicit */int) var_11))))));
                var_29 *= arr_15 [(unsigned char)0] [i_1];
                arr_23 [i_0 - 2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_1] [i_0] [i_1])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_0]))));
                var_30 = var_5;
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))));
    var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_11))));
}
