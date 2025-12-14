/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248315
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
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [(unsigned char)11] = ((/* implicit */int) ((((/* implicit */_Bool) (+(max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) var_4))))))) ? (max((((arr_0 [0]) - (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_2 [16] [i_0]))))))) : (((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))) : (max((((/* implicit */long long int) var_6)), (arr_0 [i_0])))))));
        var_13 ^= (+(max((72057594037927935LL), (((/* implicit */long long int) (short)19745)))));
        arr_4 [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)19745))) : (72057594037927935LL))) % (arr_2 [i_0] [i_0])))) ? (((/* implicit */int) var_9)) : ((((-(((/* implicit */int) var_5)))) << (((max((((/* implicit */long long int) arr_1 [i_0])), (arr_2 [i_0] [i_0]))) - (62LL))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_1 [i_0])))) ? (((((/* implicit */int) arr_1 [10])) - (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [i_0])))))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) || ((!(((/* implicit */_Bool) 1023))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_16 = ((/* implicit */_Bool) ((arr_6 [i_1]) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        for (int i_5 = 1; i_5 < 12; i_5 += 1) 
                        {
                            {
                                arr_17 [i_4] [i_3] [i_2] = ((/* implicit */short) ((long long int) ((-3131357652730312684LL) < (((/* implicit */long long int) ((/* implicit */int) (short)-19746))))));
                                arr_18 [i_1] [i_2] [0LL] [4ULL] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2] [i_2 - 1] [i_2] [i_2 - 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_16 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1] [i_2]))));
                                var_17 -= ((/* implicit */_Bool) ((((((/* implicit */int) var_11)) >> (((/* implicit */int) arr_6 [i_2])))) | (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_11 [i_2] [i_2])) : (((/* implicit */int) arr_5 [i_3] [i_3]))))));
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2]))));
                    /* LoopSeq 3 */
                    for (long long int i_6 = 1; i_6 < 13; i_6 += 3) /* same iter space */
                    {
                        arr_22 [i_2 - 1] [i_3] [i_6 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6 + 2] [i_6 + 2])) && (((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6] [i_6 + 2]))));
                        arr_23 [i_6] [i_3] [(short)10] [(short)10] = ((/* implicit */short) (+(((/* implicit */int) (short)19745))));
                        arr_24 [8U] [i_6 + 2] [i_3] [i_6] [14] = ((/* implicit */_Bool) var_2);
                    }
                    for (long long int i_7 = 1; i_7 < 13; i_7 += 3) /* same iter space */
                    {
                        arr_28 [i_1] [i_1] [i_1] [i_7] = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_6)) - (var_3))) + (2147483647))) << (((/* implicit */int) arr_5 [i_2 + 1] [i_7 + 2]))));
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_7 - 1])) ? (((/* implicit */int) arr_8 [i_7 + 1])) : (((/* implicit */int) arr_8 [i_7 + 1])))))));
                            arr_31 [i_1] [i_1] [i_7] [i_7] [i_2] [i_1] = ((/* implicit */unsigned int) (!((_Bool)1)));
                            arr_32 [i_1] [i_2] [i_7] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2 - 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_20 [i_1] [i_3] [i_3] [i_3] [i_8]))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            arr_36 [i_1] [i_2] [i_7] [(unsigned short)12] [i_1] [i_9] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_9)))));
                            var_20 = (i_7 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_7 + 1])) >> (((arr_26 [i_2 - 2] [i_2 - 2] [i_7]) + (133911516284043124LL)))))) : (((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_7 + 1])) >> (((((arr_26 [i_2 - 2] [i_2 - 2] [i_7]) + (133911516284043124LL))) + (2390070545084843193LL))))));
                            arr_37 [i_1] [i_1] [i_3] [i_7 - 1] [i_7] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_21 [i_1] [i_2] [i_3] [i_7] [i_9] [i_9])))) : (((/* implicit */int) arr_27 [i_7] [i_7 + 2] [i_7] [i_7] [i_7] [i_3]))));
                        }
                        var_21 = ((/* implicit */unsigned char) ((arr_0 [i_7 + 1]) - (((/* implicit */long long int) arr_14 [i_2 + 1]))));
                        var_22 = ((/* implicit */short) ((((/* implicit */int) arr_12 [i_1] [(_Bool)1] [i_3] [i_7])) + (((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2 + 1]))));
                    }
                    for (long long int i_10 = 1; i_10 < 13; i_10 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_6 [(unsigned char)10]) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_2 [i_1] [i_1])))) && (((/* implicit */_Bool) arr_11 [i_2 + 1] [i_10 + 1])))))));
                        arr_41 [i_1] [i_1] [i_1] [i_1] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -72057594037927936LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))) : (arr_34 [i_1] [i_2] [i_1] [i_2 + 1] [i_3] [i_2 + 1] [i_10 - 1])));
                    }
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) && (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_0))))));
                }
            } 
        } 
        arr_42 [i_1] [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_4)))) ? (arr_14 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
        arr_43 [i_1] = ((/* implicit */short) arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
        var_25 = ((/* implicit */int) arr_14 [i_1]);
    }
}
