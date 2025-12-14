/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201892
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
    var_16 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_17 &= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 4; i_3 < 14; i_3 += 1) 
                    {
                        arr_13 [6U] [6U] |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)59)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_7 [i_0])))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_8 [i_0] [i_0] [(_Bool)1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((2090579538) >> (((((/* implicit */int) var_0)) - (49273))))))))));
                        arr_14 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) max((var_3), (var_4))))) ? (((((/* implicit */_Bool) 2090579530)) ? (((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */long long int) arr_9 [i_1] [i_1] [(short)0] [i_3])))) : (((/* implicit */long long int) max((((/* implicit */int) var_11)), (2147483647)))))) : (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) var_3))))))));
                    }
                }
                var_18 -= ((/* implicit */unsigned char) ((max((arr_0 [i_0 - 1]), (((/* implicit */unsigned long long int) arr_8 [i_0 - 1] [i_1] [i_0 + 1])))) ^ (((/* implicit */unsigned long long int) 2147483647))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    var_19 = ((/* implicit */int) 179770023U);
                    arr_17 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) var_8);
                }
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    arr_21 [10] [10] [i_1] = ((/* implicit */unsigned char) min((max(((~(var_9))), (((/* implicit */long long int) arr_7 [i_0 - 1])))), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_18 [i_5] [i_1] [i_5] [i_0 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)113)))), (2090579523))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        arr_24 [i_1] [i_1] = ((/* implicit */unsigned int) arr_20 [i_0] [i_0] [i_1]);
                        var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1])) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_5])) : (((/* implicit */int) (signed char)45))))) ? (var_12) : ((~(((/* implicit */int) var_0))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        arr_27 [i_0] [i_1] [i_1] [(_Bool)1] |= ((/* implicit */long long int) var_2);
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((min((var_6), (((((/* implicit */long long int) ((/* implicit */int) var_0))) / (arr_8 [i_0] [i_1] [i_1]))))) < (((/* implicit */long long int) (+((-(((/* implicit */int) arr_25 [12U] [i_1] [i_5] [12U] [i_5])))))))));
                            arr_30 [(short)9] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) 4294967283U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_8] [i_0 + 1] [i_5] [i_1] [i_0 + 1]))) : (var_6))), (((/* implicit */long long int) arr_25 [i_0 - 1] [6U] [i_5] [i_7] [i_5]))));
                        }
                        arr_31 [i_1] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((unsigned short) var_10));
                        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_9 [i_1] [7] [i_1] [i_7]) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    }
                    for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        arr_36 [i_0] [i_0] [i_1] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned char) arr_25 [i_0 - 1] [i_9] [i_9] [i_9] [i_9]))))) ? (((/* implicit */int) min((arr_25 [i_0 - 1] [(short)13] [i_5] [i_5] [i_9]), (arr_25 [i_0 + 1] [i_0 + 1] [14] [1] [i_9])))) : (((((/* implicit */int) arr_25 [i_0 + 1] [(short)5] [i_1] [i_1] [(_Bool)0])) << (((((/* implicit */int) var_14)) + (62)))))));
                        var_23 = ((/* implicit */short) arr_16 [i_9]);
                    }
                }
            }
        } 
    } 
}
