/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247878
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 + 1] [i_1] [i_1]))))) : (((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 - 1] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2])) : (((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1] [2LL] [i_0]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_1] [i_1] [i_2 - 1] [i_2] [i_4 + 1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_4 - 1] [i_2] [i_4 + 1])) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_4 + 1] [i_2] [i_4 - 1])) : (((/* implicit */int) arr_7 [i_2 - 1] [i_4 + 1] [i_2] [i_4 + 2]))));
                            arr_15 [i_0] [i_2] [i_0] [12U] [i_0] = ((/* implicit */unsigned char) ((((var_1) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_0])) : (((/* implicit */int) var_10)))) % (((/* implicit */int) ((short) arr_9 [i_0] [i_2])))));
                        }
                        for (unsigned short i_5 = 3; i_5 < 16; i_5 += 1) 
                        {
                            arr_18 [i_2] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) var_10)))));
                            arr_19 [i_0] [i_2] [i_0] [6U] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)107)) <= (((/* implicit */int) (short)-1))));
                            arr_20 [i_2] [i_1] [(unsigned char)13] [i_2] [i_2 + 1] [i_3] [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_2] [i_5] [i_5] [i_2]))));
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_2 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_2 - 1] [i_2] [i_2])))));
                            arr_21 [i_2] [i_3] [i_2 - 1] [i_1] [i_0] [i_2] = ((/* implicit */short) (~(arr_1 [i_3] [i_1])));
                        }
                        arr_22 [i_1] [i_1] [4U] |= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_11))))));
                    }
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */long long int) var_5);
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_7)));
    var_18 = ((/* implicit */short) max((((/* implicit */unsigned short) (short)-24143)), ((unsigned short)65535)));
    var_19 = ((/* implicit */unsigned short) var_3);
}
