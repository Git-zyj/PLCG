/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229902
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [7U] [(unsigned char)2])) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) arr_0 [i_0]))))) : ((-(arr_2 [i_0] [i_0]))))));
        arr_4 [i_0] [0U] = ((/* implicit */unsigned int) min((((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        arr_5 [i_0] [7U] = (-(max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))), (arr_2 [1U] [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_7 [i_1] [i_1]) : (arr_6 [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_6 [4U] [i_1])) ? (arr_6 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (438873690U))) > ((~(arr_7 [i_1] [i_1])))));
        arr_10 [i_1] = (+(((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_8 [i_1]) : (arr_8 [i_1]))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        arr_14 [10U] = arr_12 [i_2] [i_2];
        arr_15 [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) var_3)))));
    }
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) max((var_0), (arr_11 [(unsigned char)10] [4U]))))))));
        arr_19 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_11 [i_3] [i_3]), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)192)))))))) ? (((((/* implicit */_Bool) min(((unsigned char)179), (var_1)))) ? (min((2667442628U), (arr_12 [i_3] [i_3]))) : (((unsigned int) arr_17 [i_3])))) : (((unsigned int) arr_18 [i_3]))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (unsigned int i_5 = 3; i_5 < 14; i_5 += 2) 
            {
                {
                    arr_26 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_25 [i_5] [i_5 - 1] [i_5 - 2] [10U]), (arr_25 [i_5 - 3] [i_5 - 3] [i_5 + 3] [i_5 - 1])))) ? (max((arr_20 [i_5 + 4] [i_5] [i_5 + 4]), (arr_20 [i_5] [i_5 + 2] [i_5 + 4]))) : ((~(arr_25 [i_5] [i_5] [i_5 + 2] [i_5])))));
                    arr_27 [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) arr_25 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 2]);
                    arr_28 [i_4] [i_4] = ((((/* implicit */_Bool) max((var_9), (((((/* implicit */_Bool) var_3)) ? (var_9) : (arr_13 [i_5])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_24 [i_5 - 3])))) : (max((((((/* implicit */_Bool) 495017403U)) ? (arr_22 [i_4]) : (arr_23 [i_4]))), (((((/* implicit */_Bool) 3535532312U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)97))) : (arr_23 [i_4]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 16; i_7 += 2) 
                        {
                            {
                                arr_34 [i_3] [i_4] [i_7] [i_6] [i_7] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_31 [i_4] [i_5 + 3] [i_3] [i_4]))) ? (max((((/* implicit */unsigned int) (unsigned char)247)), (arr_20 [i_5 - 3] [i_5 - 3] [i_7 - 3]))) : (((((/* implicit */_Bool) arr_31 [i_4] [i_5 + 2] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_4] [i_5 + 1] [i_3] [i_4]))) : (arr_20 [i_5 + 2] [i_4] [i_7 - 2])))));
                                arr_35 [7U] [7U] [i_4] [7U] [i_7 - 3] = max((((unsigned int) ((((/* implicit */_Bool) arr_24 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3]))) : (4294967264U)))), (1762163279U));
                                arr_36 [i_7] [i_7] [i_6] [i_4] [i_4] [i_4] [(unsigned char)3] = ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) var_2)) ? (arr_23 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3]))))))), (max((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) arr_11 [i_4] [i_7])) ? (arr_13 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3])))))))));
                                arr_37 [i_4] [i_4] = ((unsigned int) (!(((/* implicit */_Bool) (+(arr_25 [i_3] [i_5 - 1] [i_3] [i_7 + 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_12 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((unsigned int) var_0)) <= (((((/* implicit */_Bool) var_2)) ? (var_0) : (var_7))))))));
    var_13 = min((var_3), (var_8));
}
