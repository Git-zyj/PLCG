/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203310
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
    var_19 = ((/* implicit */unsigned int) var_6);
    var_20 = (~(var_15));
    var_21 |= ((/* implicit */short) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_9))))) % (max((var_16), (3366436887U))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned int) arr_1 [i_1 - 2]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_22 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_0] [i_0] [i_2]) >= (((((/* implicit */_Bool) 3366436889U)) ? (arr_5 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2]))))))))) >= (arr_11 [i_1] [(unsigned short)5] [i_1])));
                                arr_15 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_2 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4]))) : (arr_4 [i_0] [i_3] [i_0])))))))) : (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4] [i_3] [i_0]))) ^ (3366436888U))), (var_7)))));
                                arr_16 [i_0] [i_2 - 3] = ((/* implicit */unsigned short) max((((arr_11 [i_2 - 2] [i_1 - 1] [i_2 - 3]) / (arr_11 [i_2 + 1] [i_1 - 4] [i_2]))), (((/* implicit */unsigned long long int) arr_14 [(unsigned short)1] [(unsigned short)1] [(unsigned short)1]))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] = ((/* implicit */unsigned long long int) 3366436915U);
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (short i_6 = 1; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(928530408U))) / (((((/* implicit */_Bool) 928530407U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_7 [i_0] [i_1 - 2])))))) ? (3366436877U) : ((+(min((3366436889U), (928530430U)))))));
                                arr_24 [i_5] [i_1] [i_2] [i_5] = ((/* implicit */unsigned short) var_4);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            var_24 -= ((/* implicit */unsigned char) (!(((((/* implicit */long long int) (+(928530408U)))) > (var_1)))));
                            arr_31 [i_7] [i_1] [i_2 - 3] [i_7] [i_1] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) max(((+(928530401U))), (((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_2 + 2] [i_0] [i_2 + 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_7 [i_0] [3])) || (((/* implicit */_Bool) var_2)))))))) : (3366436898U)));
                        }
                        for (signed char i_9 = 0; i_9 < 17; i_9 += 1) 
                        {
                            arr_35 [i_7] [i_0] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned int) ((max((3366436866U), (((/* implicit */unsigned int) arr_32 [i_0] [i_0] [i_2 + 1] [i_9] [i_1 - 4])))) > (max((3366436903U), (((/* implicit */unsigned int) arr_3 [i_1 - 4] [i_1] [i_1 - 4]))))));
                            var_25 = ((/* implicit */long long int) arr_32 [i_0] [i_1] [i_0] [i_0] [i_9]);
                        }
                        /* vectorizable */
                        for (long long int i_10 = 2; i_10 < 13; i_10 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_1 - 2] [i_2 - 3]))));
                            arr_40 [i_7] [i_7] [i_2 + 2] [i_7] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) 3366436849U))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 17; i_11 += 4) 
                        {
                            arr_43 [i_7] [i_1] [i_2 + 2] [i_7] [i_11] = ((/* implicit */signed char) 3366436915U);
                            arr_44 [i_7] [i_1] |= ((/* implicit */unsigned char) 928530401U);
                            arr_45 [i_0] [(signed char)1] [i_7] = ((/* implicit */int) 928530380U);
                        }
                        var_27 &= (~(928530401U));
                    }
                    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 3) 
                    {
                        arr_49 [(short)10] [i_1 - 4] = ((/* implicit */signed char) ((unsigned long long int) ((arr_12 [i_1 - 3] [i_1] [i_1 + 1] [i_1 + 2] [i_2 + 1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1] [i_1] [i_1 - 1]))))));
                        arr_50 [i_0] [i_0] [i_2 - 3] [i_2 - 3] = arr_13 [i_0] [i_1] [i_1] [i_1] [13ULL];
                        var_28 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_6 [i_2 - 1] [i_0])), (928530371U)));
                    }
                }
            } 
        } 
    } 
}
