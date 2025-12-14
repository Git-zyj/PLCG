/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232823
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((unsigned short) var_2)))));
    var_16 += ((/* implicit */unsigned long long int) min((((unsigned int) var_5)), (((/* implicit */unsigned int) (signed char)112))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((unsigned char) (signed char)-122)))));
                        var_18 ^= ((/* implicit */_Bool) ((arr_9 [i_0]) * (((/* implicit */unsigned long long int) ((2181431069507584LL) >> (((2181431069507574LL) - (2181431069507515LL))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) var_3)))));
                        var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((_Bool) var_8)))));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 4; i_5 < 18; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (-(306398449696489926LL))))));
                            var_22 = ((/* implicit */long long int) (-(-1146765945)));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (!(var_3))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_18 [i_1] [i_1] [i_4] [i_4] [i_6] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 1146765945)) ? (14887983086189752226ULL) : (((/* implicit */unsigned long long int) var_14))))));
                            arr_19 [i_0] [i_1] [i_2] [i_1] [16ULL] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (signed char)127)) ? (var_4) : (((/* implicit */long long int) 1146765944)))));
                            var_24 = ((/* implicit */unsigned long long int) var_10);
                        }
                    }
                    for (int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        arr_22 [i_7] [i_2] [0ULL] [i_0] [i_0] [i_7] = ((unsigned long long int) arr_7 [i_0 + 1] [i_0] [i_0] [i_0]);
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4103610235U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -4918907897809031586LL)) != (7ULL))))) : (((((/* implicit */_Bool) 2615225862U)) ? (16176043232990566259ULL) : (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                        arr_23 [i_7] [12U] [12U] [i_7] [14] = ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) (unsigned short)26)))));
                        /* LoopSeq 3 */
                        for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) < ((-(1048064U)))));
                            var_27 = ((/* implicit */signed char) 213478083U);
                            var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) arr_6 [i_7]))));
                            var_30 = ((/* implicit */unsigned char) (-(arr_15 [i_0] [i_1] [i_2] [i_7] [i_0 - 1] [i_7])));
                        }
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_7])) ? (((/* implicit */unsigned long long int) var_14)) : (arr_9 [i_7])));
                            var_32 = ((/* implicit */int) (short)-24696);
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 19; i_10 += 4) 
                        {
                            arr_32 [i_7] [i_7] [i_0] [i_2] [i_7] = ((/* implicit */long long int) arr_16 [i_0 + 1] [i_0 + 1] [i_2] [i_7] [i_2]);
                            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)20851)))))) < (arr_14 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_10 - 1]))))));
                            var_34 = ((/* implicit */unsigned short) (-(arr_27 [i_1] [i_7] [i_2] [i_7] [i_1] [i_1] [i_10 - 1])));
                            var_35 = ((/* implicit */signed char) (short)20851);
                            var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((arr_13 [i_0] [i_0] [i_0 - 1] [i_10 + 1] [i_10 - 1]) << (((arr_6 [i_0 - 2]) - (797891194))))))));
                        }
                        arr_33 [i_0] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (short)637))));
                    }
                    var_37 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                    arr_34 [i_0] [i_1] [0LL] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-1)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)14554)) : (((/* implicit */int) arr_31 [i_0]))))) : (arr_14 [i_0] [i_0] [i_2] [i_0 - 1] [i_0] [i_2] [i_1])));
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        for (short i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) 0U))) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) ((short) 776688724)))));
                                var_39 = ((/* implicit */signed char) var_6);
                                arr_42 [i_1] [i_1] [i_2] [i_0] [i_12] = ((/* implicit */unsigned int) ((unsigned char) (~(-6401854927098585507LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 20; i_13 += 3) 
        {
            for (int i_14 = 1; i_14 < 19; i_14 += 3) 
            {
                {
                    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_0)) : (arr_17 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_0 + 1] [i_0])));
                    arr_48 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_31 [i_0]))) ? ((-(6401854927098585506LL))) : (((/* implicit */long long int) 4081489182U))));
                }
            } 
        } 
    }
}
