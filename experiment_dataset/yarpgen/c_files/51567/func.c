/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51567
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_4 = 2; i_4 < 11; i_4 += 4) /* same iter space */
                        {
                            arr_15 [i_0] [i_0] [6ULL] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)6319)) + (((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_1)))))));
                            arr_16 [i_0] [i_0] [i_0] [(unsigned short)8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                        }
                        for (long long int i_5 = 2; i_5 < 11; i_5 += 4) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_2] [i_5])) ? (((/* implicit */int) (short)6334)) : (var_13))))) - (((/* implicit */int) var_5))));
                            arr_20 [i_0] [i_1] [i_2] [i_5] &= ((/* implicit */unsigned short) var_13);
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3])), ((-(((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_0] [i_5]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_0 [i_0]))))) : (((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_1 + 3] [i_1])) ? (((/* implicit */int) arr_14 [i_2 + 1] [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_14 [i_2 - 1] [i_1 + 1] [i_1 + 2]))))));
                        }
                        /* vectorizable */
                        for (long long int i_6 = 2; i_6 < 11; i_6 += 4) /* same iter space */
                        {
                            var_15 *= ((/* implicit */unsigned char) var_4);
                            var_16 = ((/* implicit */unsigned long long int) ((_Bool) arr_13 [i_6 - 2] [i_1 - 1]));
                        }
                        var_17 = ((/* implicit */unsigned int) arr_5 [9LL] [i_1] [i_0]);
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 2) 
                    {
                        var_18 = ((/* implicit */_Bool) arr_23 [i_7] [i_7] [i_0] [i_1] [i_0] [i_0] [i_0]);
                        var_19 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)6308)))) * ((+(((/* implicit */int) var_11))))));
                        var_20 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_3 [i_1 - 1] [i_7 - 1] [i_2 - 1]))))));
                    }
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)27439))), (max((((var_10) << (((var_10) - (11358926388426737538ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)6312)) : (((/* implicit */int) (short)6312)))))))));
                        var_22 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)11610)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)94)) >= (((/* implicit */int) (short)6308))))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_9 = 2; i_9 < 9; i_9 += 1) 
                        {
                            var_23 |= ((/* implicit */int) (signed char)-104);
                            var_24 = ((/* implicit */long long int) (~(var_0)));
                            var_25 = ((/* implicit */unsigned long long int) ((((var_6) ? (((/* implicit */long long int) var_13)) : (arr_28 [9ULL] [i_8] [i_0] [i_0] [i_0] [i_0]))) | (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [(unsigned short)12] [i_0] [i_0] [i_1 + 1] [i_1])))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(8127056105968859812LL)))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) < (arr_8 [8ULL] [12LL])))) : (((/* implicit */int) arr_3 [i_2] [(signed char)8] [(signed char)8]))));
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            var_27 *= ((/* implicit */unsigned int) var_9);
                            arr_33 [i_0] [i_0] [i_2 + 1] [i_8] [(signed char)1] = ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2 - 1] [i_8]);
                            arr_34 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
                            var_28 = ((/* implicit */signed char) (short)6312);
                            arr_35 [i_0] [i_8] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) var_13);
                        }
                        for (unsigned long long int i_11 = 2; i_11 < 11; i_11 += 2) 
                        {
                            arr_39 [(signed char)2] [i_0] [i_1] [i_2] [i_8] [i_0] [i_11 - 1] = ((/* implicit */signed char) (unsigned char)217);
                            var_29 |= ((/* implicit */_Bool) arr_24 [i_11] [i_1] [i_11]);
                            var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 11056691656766115229ULL))));
                        }
                    }
                    for (int i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((0ULL) + (((/* implicit */unsigned long long int) arr_7 [(unsigned char)11] [i_1] [i_2]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_0])))) : ((-(arr_8 [i_1] [i_12])))))), (11056691656766115224ULL)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_13 = 4; i_13 < 11; i_13 += 3) 
                        {
                            var_31 -= ((/* implicit */short) arr_10 [i_0] [i_2 + 1] [i_13 - 3] [i_1 + 3]);
                            var_32 = ((/* implicit */signed char) var_5);
                            var_33 = ((/* implicit */unsigned short) (-((-(arr_38 [i_0] [11LL] [i_1] [i_2 - 1] [i_12] [i_13] [i_13])))));
                        }
                        for (unsigned char i_14 = 3; i_14 < 9; i_14 += 3) 
                        {
                            var_34 = ((/* implicit */_Bool) max((max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) arr_27 [i_14] [i_2] [i_12] [i_2] [i_1] [7LL])) ? (((/* implicit */int) arr_27 [i_14] [i_12] [i_2] [i_1] [i_0] [i_0])) : (((/* implicit */int) var_2)))))), ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (var_4))))))));
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (var_4)))) ? (((/* implicit */int) arr_13 [i_0] [i_1])) : ((~(((/* implicit */int) var_7))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-73)) == (((/* implicit */int) arr_26 [i_0] [i_1] [i_2] [10ULL] [i_14]))))), (((22ULL) & (((/* implicit */unsigned long long int) var_0)))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_2))))))))));
                        }
                        var_36 = arr_13 [i_0] [i_1];
                    }
                    var_37 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_12))))), (((var_3) / (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))))))) - (max((((((/* implicit */_Bool) (signed char)-100)) ? (arr_28 [i_2] [i_2 + 1] [(short)6] [3LL] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) (+(var_13))))))));
                    var_38 = ((/* implicit */int) max((((((/* implicit */_Bool) var_13)) ? (arr_38 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 + 3] [i_1 - 1] [i_1 + 2]) : (max((6LL), (((/* implicit */long long int) (unsigned short)60207)))))), (((/* implicit */long long int) max((((/* implicit */int) max(((unsigned char)234), (((/* implicit */unsigned char) (signed char)-88))))), (arr_46 [i_0] [i_1] [(unsigned short)8] [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    var_39 = ((/* implicit */unsigned int) ((short) var_3));
    var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)6312))))) : ((~(7ULL)))));
    var_41 = ((/* implicit */short) max((max((((/* implicit */unsigned int) ((var_4) == (((/* implicit */unsigned long long int) var_0))))), (var_0))), (var_0)));
}
