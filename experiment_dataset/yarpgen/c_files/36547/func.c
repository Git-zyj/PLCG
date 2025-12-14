/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36547
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) var_9);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                    {
                        var_13 += (unsigned char)29;
                        arr_11 [i_2] [i_0] [0U] [i_1] [i_2] [i_3] = ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)226)) << (0U)))) & (var_0));
                        var_14 = max((var_11), ((~(var_1))));
                        arr_12 [(unsigned char)6] [i_2] [(unsigned char)3] [i_3] = ((unsigned char) (-((+(var_10)))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 + 1] [i_1] [i_2 - 1] [i_1] [i_1] [i_1]))) / (4294967291U)))));
                        var_16 += ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) && ((!(((/* implicit */_Bool) var_3)))))))));
                        var_17 = ((unsigned char) (unsigned char)206);
                        var_18 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_7 [i_2] [i_0] [i_2 + 1])))), (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_9))))))));
                    }
                    arr_15 [i_0] [i_0] [i_2] = arr_14 [i_2 - 1] [i_0] [i_0];
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))) - (1427514992U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_0))))));
                        arr_19 [i_2] [i_2] = (unsigned char)183;
                        var_20 -= (((+(((33553408U) & (arr_18 [i_0] [i_1] [(unsigned char)4] [i_5]))))) & (var_6));
                        var_21 = (-(((((/* implicit */_Bool) 161925222U)) ? (arr_18 [i_2 - 1] [i_2] [i_2 + 1] [i_2]) : (var_6))));
                    }
                    var_22 += ((/* implicit */unsigned int) ((unsigned char) ((10U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)23))))));
                }
            } 
        } 
    } 
    var_23 -= var_11;
    /* LoopNest 3 */
    for (unsigned char i_6 = 1; i_6 < 9; i_6 += 3) 
    {
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            for (unsigned int i_8 = 2; i_8 < 9; i_8 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((((arr_0 [i_6 + 1] [i_8 - 1]) & (arr_0 [i_6 + 1] [i_8 - 1]))) << (((((unsigned int) var_8)) - (16U)))));
                        arr_30 [i_6] = ((/* implicit */unsigned char) ((((var_10) << (((((/* implicit */int) var_9)) - (40))))) & (216852811U)));
                    }
                    for (unsigned char i_10 = 3; i_10 < 9; i_10 += 1) 
                    {
                        arr_34 [i_7] [i_6] [i_6] [i_7] = ((33553408U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))));
                        var_25 += ((/* implicit */unsigned char) ((unsigned int) var_2));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 3; i_11 < 8; i_11 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 3) 
                        {
                            var_26 *= 4078114465U;
                            var_27 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_35 [i_6] [i_8 - 2] [i_6])), (arr_36 [i_6] [i_11] [8U] [i_11 - 1])))) ? (arr_9 [i_12] [i_6] [i_6] [i_6 - 1]) : (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_10 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))) >> ((((+(((/* implicit */int) var_8)))) - (2)))))));
                            arr_40 [i_7] [i_7] |= (unsigned char)143;
                            var_28 = ((((/* implicit */_Bool) (-((~(var_2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned char) ((14U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)190)))))))))) : (((1297838501U) >> (min((2183218427U), (((/* implicit */unsigned int) arr_35 [i_6] [i_8] [i_6])))))));
                        }
                        for (unsigned int i_13 = 2; i_13 < 6; i_13 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_0), (arr_42 [i_8] [i_8 + 1] [i_11] [i_6] [i_11])))) || (((((/* implicit */_Bool) arr_8 [i_6] [i_7] [i_6] [i_11] [i_13 + 4] [i_6])) && (((/* implicit */_Bool) min((var_10), (var_1))))))));
                            arr_45 [i_6] [i_7] [i_8] [i_11 + 1] [i_13] [i_7] |= max((((/* implicit */unsigned int) min((var_5), ((unsigned char)112)))), (((2792873245U) + (4294967293U))));
                            arr_46 [i_6] [i_7] [i_7] [4U] [4U] = var_0;
                        }
                        var_30 *= ((/* implicit */unsigned char) max((((2U) | (((4078114476U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_6] [i_7] [i_8]))))))), (min((min((2815995436U), (((/* implicit */unsigned int) (unsigned char)33)))), (min((var_4), (((/* implicit */unsigned int) (unsigned char)28))))))));
                    }
                    var_31 *= ((/* implicit */unsigned char) (+(33U)));
                    var_32 += ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_6))))))));
                    var_33 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (unsigned char)99))))));
                }
            } 
        } 
    } 
}
