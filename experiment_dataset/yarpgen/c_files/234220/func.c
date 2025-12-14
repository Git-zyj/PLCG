/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234220
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
    var_16 -= ((/* implicit */_Bool) max((var_10), (((/* implicit */short) var_12))));
    var_17 -= ((/* implicit */unsigned int) var_3);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] [(short)2] = ((/* implicit */unsigned char) arr_2 [i_0]);
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (~(((/* implicit */int) min((arr_1 [i_2] [i_1 + 1]), (arr_1 [i_0] [i_0])))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_19 &= (short)-16431;
                        var_20 += ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))) / (var_14));
                        var_21 -= ((/* implicit */short) ((unsigned char) arr_6 [i_1 + 1] [(short)8] [i_2]));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) arr_13 [9U] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)11054)) && (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) arr_5 [i_1 + 1])))))));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */int) arr_12 [(short)10] [i_1 + 1] [(unsigned char)8] [4U])) & (((/* implicit */int) arr_12 [i_1] [i_1 + 1] [i_1] [(short)4])))))));
                    }
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) arr_9 [i_2] [i_1] [i_1 + 1] [i_1 + 1] [i_1])), (var_4))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) == (arr_2 [i_1]))))))) || (((((/* implicit */_Bool) arr_7 [i_2] [i_1 + 1] [i_1 + 1])) && (((/* implicit */_Bool) arr_7 [i_2] [i_1 + 1] [i_1 + 1]))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 8; i_6 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_6 [i_1 + 1] [i_2] [i_1]), (((/* implicit */short) arr_11 [i_1 + 1]))))) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_2] [i_5] [i_6])) ? (max((((/* implicit */unsigned int) (short)11065)), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) - (((((/* implicit */_Bool) arr_18 [i_6] [i_5] [(_Bool)1] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_5] [i_5])) : (((/* implicit */int) arr_14 [i_6])))))))));
                                arr_20 [i_0] [i_5] &= ((/* implicit */unsigned char) ((max((arr_18 [i_6 + 3] [i_6] [i_5] [i_5] [i_2]), (arr_18 [i_6 + 2] [i_5] [i_2] [6U] [(unsigned char)1]))) & (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_0))))), ((-(var_6)))))));
                                arr_21 [i_5] [i_5] [i_5] [i_2] [i_1] [i_1 + 1] [i_5] |= ((/* implicit */unsigned char) min((max((arr_13 [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned int) arr_3 [i_1 + 1] [i_1 + 1])))), (((/* implicit */unsigned int) (!(arr_9 [i_5] [i_1 + 1] [i_1 + 1] [(unsigned char)2] [i_1 + 1]))))));
                                var_26 ^= var_7;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
