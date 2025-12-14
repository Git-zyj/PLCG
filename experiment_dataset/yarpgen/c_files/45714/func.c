/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45714
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
    var_12 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (min((((/* implicit */unsigned int) arr_2 [1ULL] [5])), (3589661832U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (-61919865) : (((/* implicit */int) arr_0 [(short)10] [i_0])))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-42)))))));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) max((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_1 [i_0]))))))), (((unsigned int) arr_0 [6] [6])))))));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (arr_1 [i_0])))) ? (min((arr_1 [(unsigned char)4]), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_0]) / (arr_2 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_16 = ((((/* implicit */int) arr_3 [i_1])) > (((/* implicit */int) arr_4 [i_1 - 2])));
        var_17 ^= ((/* implicit */short) (((-(((/* implicit */int) var_4)))) == ((-(((/* implicit */int) arr_4 [i_1]))))));
        var_18 = ((/* implicit */short) (~(((((-188816268) + (2147483647))) >> (((188816291) - (188816260)))))));
        var_19 = ((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */_Bool) arr_3 [(signed char)2])) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (-188816293) : (((/* implicit */int) arr_4 [i_1])))));
        arr_5 [i_1] = ((/* implicit */unsigned short) var_1);
    }
    for (unsigned char i_2 = 2; i_2 < 16; i_2 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_2 - 2])) : (((/* implicit */int) arr_3 [i_2 - 2])))) <= (((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_2] [i_2]))))) ? (((int) -61919864)) : (((/* implicit */int) arr_6 [i_2 + 2])))))))));
        var_21 += ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_3)) + ((+(((/* implicit */int) arr_3 [i_2])))))), (min((((((/* implicit */int) var_7)) + (-188816308))), (-188816292)))));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (2147483641) : (((/* implicit */int) (short)17655))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */int) (unsigned short)2007)) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [(short)12])) || (((/* implicit */_Bool) arr_7 [i_4]))))))))));
                    }
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        arr_23 [i_7] [(short)12] [i_4] [i_4] [i_3] = ((/* implicit */short) (-(((((/* implicit */_Bool) -188816293)) ? (arr_2 [(unsigned char)1] [i_7]) : (((/* implicit */int) var_3))))));
                        arr_24 [i_3] [i_3] [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) arr_10 [i_3] [i_3]);
                        var_24 = ((/* implicit */signed char) (-(((unsigned long long int) arr_2 [i_3] [i_3]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_8 = 3; i_8 < 12; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3] [4ULL])) ? (((/* implicit */int) arr_11 [i_5] [i_4])) : ((+(((/* implicit */int) (_Bool)1)))))))));
                            arr_28 [i_3] [i_8] [i_5] [i_8] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_16 [i_7])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_3] [i_8 - 1] [i_8 - 3])))));
                        }
                        arr_29 [i_7] [i_5] [(signed char)7] [i_3] = (((-(((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) arr_21 [1] [(short)5] [i_3] [i_3])))))) < ((~(((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) arr_11 [i_3] [i_3]))))))));
                    }
                    var_26 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((int) arr_25 [i_3] [i_3] [i_4] [i_5] [i_5]))) ? (arr_10 [i_5] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3]))))), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_5])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-46))))))));
                    arr_30 [i_5] [i_4] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [4ULL] [i_3]))));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_3] [(short)10] [i_4] [i_4])) ? (((/* implicit */int) arr_21 [i_3] [i_3] [i_5] [i_3])) : (((/* implicit */int) arr_21 [i_5] [i_5] [i_5] [i_5]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_3] [i_3] [(unsigned short)6] [i_3])) ^ (((/* implicit */int) var_9))))) : (max((((/* implicit */unsigned int) arr_21 [i_3] [i_3] [i_4] [i_5])), (12U)))));
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) arr_26 [i_5] [i_5] [i_5] [i_3] [i_4])), (var_8))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) + (188816291))))))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_2)))) : ((-(((/* implicit */int) arr_0 [i_5] [i_5]))))));
                }
            } 
        } 
    } 
}
