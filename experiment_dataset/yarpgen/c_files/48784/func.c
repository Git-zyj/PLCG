/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48784
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
    var_12 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)4900))) : (3044906625U)))) ? (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)14341))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_6))))))) >> (((var_5) - (2955861278880184337LL))));
    var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    arr_8 [(unsigned short)6] [i_1] [i_2] [i_2] |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [(short)4] [i_1] [i_2]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        arr_11 [0U] [i_0] [i_0] [i_0 + 2] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_3 [i_2] [i_1])) != (((/* implicit */int) arr_3 [i_2] [i_3])))))));
                        arr_12 [i_0] = ((/* implicit */short) ((var_3) | (((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0 + 2]) : (3044906625U)))));
                        arr_13 [i_0] [i_0] = (-(((/* implicit */int) ((_Bool) arr_9 [i_0 + 3] [i_1] [i_1] [i_0]))));
                        arr_14 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2]);
                        arr_15 [i_0] = ((/* implicit */int) 3044906627U);
                    }
                    for (unsigned int i_4 = 1; i_4 < 12; i_4 += 4) 
                    {
                        arr_18 [i_0] [i_0] [12U] [i_1] [i_2] [(unsigned short)8] = ((((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4 + 1] [i_0] [i_0 - 1] [i_0 + 2])) ? (arr_16 [i_4] [i_4] [i_4 - 1] [i_0 + 3] [i_0 - 1] [i_0 + 3]) : (arr_16 [i_4] [i_0 + 3] [i_4 + 1] [1U] [i_0 + 3] [i_0 + 3]))) <= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))));
                        arr_19 [i_0] [i_1] [i_2] [i_4 + 1] [i_0 + 3] [i_0] = ((/* implicit */int) max((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((3612564835U), (((/* implicit */unsigned int) arr_7 [i_4] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)134))) < (3044906623U)))) : (((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) (unsigned char)26)))))))));
                    }
                }
                for (short i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    arr_24 [i_0] [i_5] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(3044906627U)))) ? (((/* implicit */int) arr_5 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_5] [i_0]))));
                    arr_25 [i_0] [i_0] [6U] = ((/* implicit */unsigned int) (_Bool)1);
                    arr_26 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [(short)11] [i_0 + 1] [i_0] [i_1])) + (((/* implicit */int) arr_20 [i_0] [i_0 + 1] [i_0] [i_1]))))), (min((arr_0 [i_0]), (arr_0 [i_0])))));
                }
                arr_27 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) || (((/* implicit */_Bool) var_3)))))))) ? (min((((/* implicit */int) (_Bool)0)), (max((-2147483636), (((/* implicit */int) (unsigned char)142)))))) : (((/* implicit */int) (unsigned short)65535))));
            }
        } 
    } 
}
