/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44858
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
    var_19 = ((/* implicit */unsigned short) (((((~(((((/* implicit */int) (signed char)85)) ^ (((/* implicit */int) (unsigned short)26957)))))) + (2147483647))) >> (((((((/* implicit */_Bool) 1935843599)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : ((((_Bool)1) ? (1327554091U) : (((/* implicit */unsigned int) -1935843590)))))) - (100U)))));
    var_20 = ((/* implicit */int) ((long long int) var_2));
    var_21 = ((/* implicit */short) ((unsigned int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (-1935843590))) / (((((/* implicit */int) (unsigned char)255)) - (-1935843590))))));
    var_22 = ((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned char) ((_Bool) var_17)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] |= ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_1])))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((long long int) arr_0 [i_0] [i_0]));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])) - (((/* implicit */int) (unsigned char)255))));
                        arr_12 [i_0] [i_1] [i_1] [i_3 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2])) ? (var_16) : (((/* implicit */unsigned long long int) var_18))));
                    }
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        var_24 = var_8;
                        arr_17 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (short)-28726)) - (((/* implicit */int) arr_7 [i_0]))));
                        var_25 = ((/* implicit */short) ((long long int) 1935843589));
                        var_26 += ((/* implicit */unsigned int) ((unsigned short) arr_11 [i_0] [i_0] [i_1] [i_2] [i_4]));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)38595)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)193))) : (8179303224762073365ULL))))))));
                        arr_21 [i_1] = ((/* implicit */unsigned short) arr_6 [i_2]);
                        arr_22 [i_0] [i_1] [i_0] [i_5] |= ((/* implicit */unsigned long long int) ((var_12) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_5])))));
                    }
                }
                for (unsigned long long int i_6 = 2; i_6 < 8; i_6 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((((/* implicit */_Bool) arr_11 [i_6 + 2] [i_6 - 2] [i_6] [i_6] [i_6 + 2])) ? (((/* implicit */long long int) 201326592U)) : (arr_20 [i_6 - 2] [i_6 + 3] [i_6 - 1] [i_6 + 3]))) : (((/* implicit */long long int) arr_24 [i_0] [i_0] [i_0] [i_0])))))));
                    var_29 |= ((/* implicit */unsigned short) var_6);
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 2; i_7 < 8; i_7 += 3) /* same iter space */
                {
                    var_30 *= ((/* implicit */short) ((unsigned long long int) arr_19 [i_7 + 2] [i_7 + 2] [i_7 + 1] [i_7 - 1] [i_7 - 2] [i_7 + 1]));
                    var_31 = ((/* implicit */unsigned int) 130023424);
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        arr_33 [(short)6] [i_1] [i_1] [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1] [i_7 + 3])) ? (((/* implicit */unsigned long long int) 1935843612)) : (var_16)));
                        arr_34 [i_7] [i_1] [i_7] [i_7] [i_0] [i_1] = ((/* implicit */unsigned short) 4194303U);
                        arr_35 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_7 + 3] [i_8] [i_8])) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_1]) : (arr_15 [i_8] [i_8] [9U] [9U] [i_1])));
                        var_32 &= ((/* implicit */unsigned int) -1935843599);
                    }
                    for (unsigned char i_9 = 1; i_9 < 10; i_9 += 3) 
                    {
                        arr_38 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_7 + 2] [i_1] [i_9 - 1])) - (((/* implicit */int) var_10))));
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)28731)) > (((/* implicit */int) (short)16383))));
                    }
                }
                var_34 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) (unsigned char)146)))));
                arr_39 [i_0] [i_1] = (~((-(arr_26 [i_0] [i_1] [i_1] [i_1]))));
                arr_40 [i_1] = ((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) var_10))) + (((((/* implicit */long long int) -1935843613)) * (-1LL)))))));
            }
        } 
    } 
}
