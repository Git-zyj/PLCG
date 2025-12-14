/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36207
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
    var_19 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (signed char i_4 = 4; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_1 [i_4 - 3] [(signed char)15])))), ((-(((/* implicit */int) var_3)))))))));
                                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [(unsigned short)15] [i_2] [i_3] [i_4 - 4])) : (var_13))))));
                                var_23 |= ((/* implicit */_Bool) ((arr_2 [(signed char)0]) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_4 - 3])) != (((/* implicit */int) arr_5 [(signed char)12] [i_1] [i_0]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (unsigned short)33056)) ? (1782280272U) : ((+(arr_13 [i_0] [i_5] [i_2] [i_0]))))));
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((unsigned long long int) (!(arr_14 [(signed char)4] [i_5] [i_2] [(signed char)4] [(signed char)4])))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_9 [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_9 [(_Bool)1] [i_1] [i_2] [i_6] [i_1])))) || (((/* implicit */_Bool) (~(arr_9 [i_7] [i_6] [i_2] [(_Bool)1] [i_0])))))))));
                            var_27 = (!(((/* implicit */_Bool) arr_7 [i_2])));
                            var_28 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) (short)26493)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_18 [i_0] [i_6] [i_2] [i_0] [i_0]) != (var_8))))) : ((+(arr_13 [i_0] [i_1] [i_2] [i_6]))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_1] [i_1] [i_2] [i_1] [i_0] [i_0])) ^ (((/* implicit */int) var_1))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_1 [i_0] [i_1])))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) (-(arr_6 [i_0] [i_2])));
                            arr_22 [i_0] [i_1] [i_0] [i_0] [i_6] |= ((/* implicit */signed char) arr_21 [i_8] [i_8 + 2] [i_6] [i_6] [i_0] [i_0]);
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 4) 
                        {
                            var_30 = ((/* implicit */signed char) var_11);
                            var_31 = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_9 [i_9 + 2] [(signed char)1] [i_1] [i_1] [(signed char)1])) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) (unsigned short)52349))))))) == (min((((/* implicit */long long int) arr_20 [i_0] [(unsigned short)0] [i_2] [0U] [i_2])), (min((var_0), (((/* implicit */long long int) arr_15 [i_1] [i_0]))))))));
                            var_32 ^= ((/* implicit */long long int) (+(((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [(_Bool)1] [i_9 + 1]))));
                            arr_25 [i_0] [i_1] [i_1] [i_6] [i_9 + 1] [i_0] [7ULL] = ((/* implicit */unsigned char) (_Bool)1);
                        }
                        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            var_33 = ((/* implicit */long long int) max((var_33), (arr_2 [i_6])));
                            arr_29 [i_0] [i_0] [i_1] [(signed char)3] [i_6] [i_10] = ((/* implicit */signed char) (short)1639);
                        }
                        var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_8 [i_0])), (min((((/* implicit */unsigned int) (unsigned short)21027)), (3457457417U))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_11 = 3; i_11 < 15; i_11 += 3) 
                    {
                        var_35 = ((/* implicit */signed char) (-(((/* implicit */int) arr_20 [i_0] [i_0] [i_11 - 1] [i_11 - 1] [i_11]))));
                        arr_32 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((short) ((1406175765959722312ULL) * (1406175765959722312ULL))));
                        arr_33 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-21853)) + (2147483647))) << (((514552949U) - (514552949U)))))) ? ((+(((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [(unsigned short)13] [i_2] [i_2] [i_11])))) : (((/* implicit */int) arr_7 [i_0]))));
                    }
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */_Bool) var_12);
}
