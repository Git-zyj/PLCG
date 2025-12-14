/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224587
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
    var_18 = var_15;
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 7; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)104)))))) : (((/* implicit */int) (signed char)-80))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned int) arr_7 [i_0] [i_0]);
                        arr_11 [i_0 + 2] [(short)7] [i_3] [(short)7] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
                    }
                    for (short i_4 = 1; i_4 < 7; i_4 += 3) 
                    {
                        arr_14 [i_2 + 3] [i_4 - 1] [i_4 - 1] [i_2 + 3] = ((/* implicit */short) ((var_3) - (((/* implicit */unsigned int) (-(var_0))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) arr_4 [i_0]))))))) : ((~(arr_2 [i_2])))));
                        var_21 = ((/* implicit */unsigned int) var_8);
                    }
                    arr_16 [i_0] [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */long long int) (~(arr_2 [i_0 + 1])))), (var_14)));
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 8; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) max((((((/* implicit */_Bool) var_9)) ? (((var_10) + (((/* implicit */int) var_12)))) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) (~(var_16)))) ? (((/* implicit */int) (unsigned short)57187)) : (((((/* implicit */int) var_2)) & (((/* implicit */int) (signed char)111))))))));
                                var_23 = ((/* implicit */long long int) max((var_23), ((-(((var_8) - (((/* implicit */long long int) var_10))))))));
                                var_24 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)-99)) : ((-(var_0)))))));
                                var_25 &= ((/* implicit */int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)113)) : (arr_4 [i_6])))) * (((unsigned int) arr_12 [i_0] [i_0] [i_2] [i_0])))) / (((/* implicit */unsigned int) var_10))));
                                var_26 += ((/* implicit */signed char) (+(arr_17 [i_0 + 2] [i_2 + 1] [i_5 + 2] [i_5 - 2])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            {
                arr_26 [i_8] [i_8] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-((-(443461682)))))) * (var_9)));
                var_27 += ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_24 [i_7] [i_8]))))), (((unsigned int) var_9))));
                var_28 = ((/* implicit */short) arr_21 [i_8]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_9 = 0; i_9 < 10; i_9 += 3) 
    {
        for (short i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            for (signed char i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_12 = 1; i_12 < 9; i_12 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 0; i_13 < 10; i_13 += 4) 
                        {
                            arr_39 [i_9] [i_9] [i_9] [i_9] &= ((/* implicit */short) ((((/* implicit */int) ((short) var_6))) - (((/* implicit */int) arr_35 [i_9] [i_9] [(signed char)6]))));
                            arr_40 [i_9] [i_10] [i_9] [i_9] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_34 [i_9] [i_10] [i_10] [i_12 - 1] [i_10])) : (((/* implicit */int) var_7))));
                            arr_41 [i_9] [i_9] [i_9] [(signed char)0] [(signed char)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-1945))))) ? (((int) var_11)) : ((~(((/* implicit */int) (short)-9309))))));
                            var_29 = ((/* implicit */int) ((var_14) << (((var_16) - (1842865701U)))));
                            arr_42 [i_12] [(short)8] [i_12] [i_12] [(short)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_10] [i_12 - 1] [i_12 - 1] [i_12] [i_12 - 1] [i_12 + 1] [i_12 - 1])) ? (((/* implicit */int) (short)-19972)) : (((/* implicit */int) arr_19 [i_10] [i_12 - 1] [i_12 + 1] [i_12] [i_12 - 1] [i_12 + 1] [i_12 - 1]))));
                        }
                        arr_43 [i_9] [i_10] [i_10] [(signed char)0] [i_12 + 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) < (var_1)));
                    }
                    /* vectorizable */
                    for (unsigned int i_14 = 2; i_14 < 8; i_14 += 1) 
                    {
                        arr_47 [i_9] [i_10] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)6589))));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(3689626390U)))) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_14 - 2] [i_10] [i_11])))));
                    }
                    var_31 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (~(var_0)))) ? (((((/* implicit */int) var_7)) | (var_10))) : (arr_8 [i_9] [(short)6] [i_9])))));
                    /* LoopSeq 2 */
                    for (int i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        var_32 = ((/* implicit */short) (+(((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) arr_4 [i_15])) : (8191U))) - (((unsigned int) (unsigned short)55191))))));
                        var_33 = (signed char)127;
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 10; i_16 += 1) 
                        {
                            var_34 -= ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
                            var_35 = ((/* implicit */signed char) (-(((/* implicit */int) arr_51 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))));
                            var_36 = (signed char)-63;
                        }
                        for (short i_17 = 2; i_17 < 8; i_17 += 2) 
                        {
                            var_37 = ((/* implicit */short) (+((-(((((/* implicit */_Bool) (unsigned short)8348)) ? (var_0) : (((/* implicit */int) (signed char)85))))))));
                            arr_57 [i_9] [i_17 + 1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) -1713372250)) ? (((((/* implicit */_Bool) -311914272)) ? (((/* implicit */unsigned int) var_10)) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
                            var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */int) ((short) var_8))) == ((-(((/* implicit */int) arr_34 [i_15] [i_17 + 1] [i_17 + 1] [i_17] [i_17])))))))));
                        }
                    }
                    for (short i_18 = 4; i_18 < 6; i_18 += 2) 
                    {
                        arr_61 [i_18 - 4] [(short)2] [i_11] [i_10] [(short)2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (short)19793)) ? (653011952U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_18 - 4] [2] [i_18] [i_18] [i_18 - 3])))))) ? ((-(((/* implicit */int) (signed char)123)))) : (((/* implicit */int) var_5))));
                        var_39 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (((-(arr_53 [i_10] [i_18]))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))))))) * (max((((/* implicit */long long int) (-(((/* implicit */int) var_17))))), (((((/* implicit */_Bool) 3042396512U)) ? (arr_55 [i_18] [i_10] [i_18] [i_18]) : (var_13)))))));
                        var_40 = ((/* implicit */short) max((((((((/* implicit */int) arr_51 [i_18] [i_18] [i_10] [i_18] [i_18 - 2] [i_9])) + (2147483647))) << ((((+(arr_1 [i_9]))) - (3642975129U))))), ((~(((/* implicit */int) var_5))))));
                        var_41 = ((/* implicit */int) (!((!(((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) var_2)))))))));
                    }
                }
            } 
        } 
    } 
    var_42 -= ((/* implicit */signed char) var_14);
}
