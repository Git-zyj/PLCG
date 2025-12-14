/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5035
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
    var_17 = ((/* implicit */unsigned short) var_6);
    var_18 = ((535218190) << (((((/* implicit */_Bool) ((var_9) & (var_16)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (short)6514)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)49152)))))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)6514))));
                            arr_11 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_8 [i_1] [i_4] [i_2] [i_4]) >> (((((((/* implicit */_Bool) 1073741823)) ? (arr_0 [20U] [i_1]) : (arr_5 [(signed char)3] [i_2] [i_0]))) - (412267462U)))));
                            arr_12 [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_0 [i_2] [i_4])) >= (arr_2 [i_2 - 2])));
                            arr_13 [i_0] [i_0] [i_0] [17ULL] [i_3] [i_0] = ((/* implicit */_Bool) ((unsigned short) (-(arr_8 [i_4] [i_3 + 1] [i_2] [i_1]))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_21 = ((/* implicit */int) var_6);
                            var_22 = ((/* implicit */unsigned int) ((((_Bool) arr_7 [i_0] [i_0] [i_2] [i_3] [i_0] [i_5])) ? (((/* implicit */unsigned long long int) 535218175)) : (((((/* implicit */_Bool) var_12)) ? (10ULL) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [(signed char)3]))))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (arr_4 [(signed char)17] [i_2] [i_3] [(signed char)17])));
                        }
                    }
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        arr_20 [i_0] [i_0] = min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)61893));
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */long long int) (~(3202757323U)));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_9))));
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned long long int) arr_18 [i_7] [i_6] [i_2] [i_0] [i_0]);
                            arr_25 [i_0] [i_0] [i_0] [i_7] [i_6] [i_7] = ((/* implicit */unsigned char) var_15);
                        }
                        var_26 = ((/* implicit */signed char) min(((-(2595612575378748283ULL))), (((((/* implicit */_Bool) max((arr_1 [(signed char)1]), (((/* implicit */long long int) var_12))))) ? (((/* implicit */unsigned long long int) max((arr_0 [i_0] [(short)13]), (((/* implicit */unsigned int) arr_16 [i_0] [i_1] [i_2] [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (15363107683491425022ULL)))))));
                    }
                    for (unsigned short i_8 = 2; i_8 < 21; i_8 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) max((arr_14 [i_8 + 2] [i_1] [i_1] [i_1] [i_1] [i_2 - 4]), (((((/* implicit */_Bool) arr_14 [i_8 + 1] [i_1] [i_1] [i_8 - 1] [i_0] [i_2 + 1])) ? (arr_14 [i_8 + 2] [i_1] [i_2 + 1] [i_8 + 1] [i_0] [i_2 - 2]) : (arr_14 [i_8 - 1] [i_8 - 1] [i_2] [i_8 - 1] [i_0] [i_2 - 2])))));
                        var_28 = ((/* implicit */short) (+(((/* implicit */int) (short)12137))));
                        arr_28 [(unsigned short)0] [15] [i_1] [i_2] [i_2] [0U] = ((/* implicit */int) (((~(((/* implicit */int) var_14)))) < (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (_Bool)0))))))));
                    }
                    for (unsigned short i_9 = 2; i_9 < 21; i_9 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_19 [i_2 - 4] [i_9] [i_9 + 2] [i_9 + 3] [i_9] [i_9]), (arr_19 [i_0] [i_9] [i_9 + 2] [i_9] [i_9] [i_0])))) ? (max((max((((/* implicit */unsigned long long int) 2716713104U)), (15363107683491425010ULL))), (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_8)))))))));
                        /* LoopSeq 1 */
                        for (short i_10 = 2; i_10 < 23; i_10 += 2) 
                        {
                            var_30 = ((/* implicit */_Bool) min((15363107683491425001ULL), (((/* implicit */unsigned long long int) (short)-6508))));
                            arr_34 [i_0] [i_0] [i_2] [i_2] [i_10] = ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2]);
                            arr_35 [i_9] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_27 [i_1] [i_9 + 2] [i_2] [i_1] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */long long int) ((/* implicit */int) (short)-6529)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0] [i_9 - 1] [i_10 + 1]))) + (max((((/* implicit */unsigned long long int) var_2)), (arr_7 [i_0] [i_1] [i_1] [i_9 - 1] [i_10] [i_10])))))));
                        }
                        arr_36 [i_0] [(unsigned char)7] [(unsigned short)12] = ((/* implicit */unsigned char) arr_4 [(unsigned short)9] [16] [i_2] [i_9 + 3]);
                    }
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_33 [i_0] [(signed char)0] [i_1] [i_1] [i_2])))))));
                }
            } 
        } 
        var_32 ^= ((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((arr_17 [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)114)) ^ (1583359206))))));
        var_33 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) - (((unsigned long long int) var_0))));
    }
}
