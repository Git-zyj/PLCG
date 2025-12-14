/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41407
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        var_18 = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_2 [i_0])))) << (((var_10) - (528562587)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) var_16);
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((max((var_4), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) (signed char)-47)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_2]))))), ((~(arr_8 [i_2]))))))));
        var_21 += (+(arr_3 [i_2]));
        var_22 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [i_2]))) : (arr_8 [i_2])))), (var_15)))));
        var_23 = ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) 1048448U)), (arr_7 [i_2]))) / (((/* implicit */unsigned long long int) max((arr_8 [i_2]), (((/* implicit */long long int) arr_5 [i_2])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2] [i_2]))))) : (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_2 [i_2])))))));
    }
    /* LoopSeq 1 */
    for (signed char i_3 = 1; i_3 < 20; i_3 += 2) 
    {
        var_24 |= ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) arr_10 [i_3 + 3] [i_3 + 3])) >= (((/* implicit */int) ((signed char) var_3)))))), ((~(((/* implicit */int) min(((unsigned short)1070), ((unsigned short)1070))))))));
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_3 + 1] [i_3])) << (((((((/* implicit */int) arr_5 [i_3 + 2])) + (44))) - (27)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_9 [i_3] [i_3])), ((unsigned short)64466)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64466))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (var_16)))))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_3 + 1])), (((unsigned char) arr_4 [i_3] [i_3 - 1]))))))))));
    }
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        for (int i_5 = 2; i_5 < 20; i_5 += 1) 
        {
            {
                var_26 = ((/* implicit */unsigned int) ((unsigned long long int) (~(((/* implicit */int) (unsigned char)253)))));
                /* LoopNest 2 */
                for (short i_6 = 3; i_6 < 19; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        {
                            var_27 |= ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)253)), (((((((/* implicit */_Bool) arr_9 [(short)13] [(unsigned short)1])) ? (((/* implicit */int) (unsigned short)51095)) : (((/* implicit */int) (unsigned short)1069)))) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)2)))))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                            {
                                var_28 = ((/* implicit */unsigned char) (+(arr_1 [3ULL])));
                                var_29 = ((/* implicit */int) ((arr_19 [4ULL] [i_5] [i_5 + 2] [4ULL] [i_5]) + (((/* implicit */long long int) 424996689U))));
                                arr_21 [i_4] [i_5] [i_6] [i_7] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_11))))));
                                arr_22 [i_4] [i_6] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4] [i_4] [i_4] [i_4])))))) ? (var_0) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)12370)) << (((((/* implicit */int) var_1)) + (22616))))))));
                            }
                            for (unsigned short i_9 = 0; i_9 < 22; i_9 += 4) 
                            {
                                var_30 *= ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_11 [i_4]), (arr_11 [i_4]))))));
                                var_31 *= ((/* implicit */_Bool) min(((+(arr_23 [i_4] [i_6 - 3] [i_6 + 2] [i_9] [i_9]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_4)) - (var_16)))) ? ((~(((/* implicit */int) arr_18 [(unsigned short)11] [i_6] [i_7] [i_7])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)241)) && (((/* implicit */_Bool) var_12))))))))));
                                var_32 ^= ((short) (~(((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned short)1058))))));
                                var_33 = ((/* implicit */int) (unsigned short)6156);
                                var_34 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_5 - 2] [i_5] [i_6] [i_6 - 2] [i_6 - 1]))) + (((long long int) max((arr_11 [i_7]), ((short)32758))))));
                            }
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_7] [i_6 + 3] [i_5 + 1] [i_7]))))))))));
                            arr_27 [i_7] [i_6] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (unsigned short)1070)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_15 [i_4] [i_5])))) < (((/* implicit */int) (short)-25285)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned short)64451))))))) : (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4] [i_4] [i_6])))))))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_4]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4] [i_5 + 2] [i_5]))) - (var_12)))))))))));
                arr_28 [i_4] = ((/* implicit */unsigned char) arr_15 [i_4] [(unsigned char)16]);
            }
        } 
    } 
}
