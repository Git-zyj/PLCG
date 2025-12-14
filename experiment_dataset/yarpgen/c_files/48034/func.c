/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48034
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_15))));
    var_17 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
                {
                    var_18 |= ((/* implicit */short) arr_0 [0ULL]);
                    arr_10 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-((-(var_2)))));
                    var_19 = ((/* implicit */short) (+(((((/* implicit */int) arr_5 [i_1] [2ULL])) | (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_2] [i_1] [i_0]))))))));
                    arr_11 [i_0 + 1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) var_7);
                }
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((signed char) var_14)))));
                    var_21 = ((/* implicit */signed char) var_4);
                    arr_15 [i_0] [i_1] [i_3] = ((/* implicit */short) (!((((-(((/* implicit */int) var_0)))) < (((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_0]))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [i_0 - 1] [(unsigned char)4] [i_0 - 2])) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-29))))));
                        var_22 = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (unsigned char)27)))) / (((/* implicit */int) arr_3 [i_0 + 1] [i_0]))))) : (((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (unsigned char)27)))) * (((/* implicit */int) arr_3 [i_0 + 1] [i_0])))));
                        var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)45)))))));
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0]) : (arr_0 [i_0])));
                            var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_5] [i_5 - 1] [i_5 - 1] [i_5])) ? (((((/* implicit */_Bool) 9451650733749629575ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_3] [(unsigned short)10] [i_5]))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((0U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27)))))))));
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) arr_2 [i_0]))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) (unsigned char)211))));
                        }
                        for (short i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_15))))))));
                            var_29 = ((/* implicit */unsigned short) ((arr_3 [i_0] [i_0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)280))));
                            arr_25 [i_0] [i_1] [i_3] [i_4] [0U] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_3)))) & (((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_3] [i_4] [i_6])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_8))))));
                        }
                        for (signed char i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            var_30 += ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_7] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 2]))) : (arr_16 [i_7] [i_0 - 2])));
                            var_31 = ((/* implicit */unsigned int) arr_27 [16LL] [i_1] [(unsigned char)5] [i_4] [i_0 - 1] [i_0] [i_1]);
                        }
                    }
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */int) var_11)) * (((/* implicit */int) max((var_3), (var_7)))))))));
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))) < (1037275846U)));
                        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) min(((-(arr_16 [(unsigned char)0] [i_0 - 1]))), (((/* implicit */long long int) var_5)))))));
                    }
                    for (signed char i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_9] [i_3] [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((arr_29 [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_9]) + (arr_29 [i_0 + 1] [i_0 - 2] [i_9] [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((var_5) ? (3257691434U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) - (arr_12 [i_0] [i_0 + 1] [i_0]))))))));
                        var_36 = ((/* implicit */unsigned char) arr_24 [i_0 - 2] [i_0] [i_0] [i_0 + 1] [(signed char)10] [i_0] [(unsigned char)9]);
                        arr_35 [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)-1);
                    }
                }
                arr_36 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_0 + 1])) | (((/* implicit */int) max(((unsigned char)169), ((unsigned char)14))))));
                var_37 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) var_6))))));
            }
        } 
    } 
}
