/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194089
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
    var_14 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0 + 2] [i_0]))));
        arr_4 [i_0] = ((/* implicit */long long int) (+(66060288)));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_9 [(unsigned short)7] [7ULL] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_0)))));
                    /* LoopSeq 4 */
                    for (int i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        arr_12 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 1] [i_1] [i_1 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 426750999))))) : (((/* implicit */int) (signed char)(-127 - 1)))));
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (((((/* implicit */_Bool) 9608857705619949324ULL)) ? (0) : (((/* implicit */int) (short)-6441)))) : ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 1; i_4 < 7; i_4 += 4) 
                        {
                            arr_16 [(unsigned char)8] [(unsigned char)8] [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) ((2227996243854674492LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232)))));
                            var_16 = ((/* implicit */unsigned int) (+(arr_10 [i_0])));
                        }
                        var_17 = ((/* implicit */int) arr_5 [i_0]);
                        arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) arr_10 [i_0]));
                    }
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        arr_22 [i_5] [i_0] [(signed char)6] [i_0] [(signed char)6] = ((var_5) ^ (((/* implicit */long long int) arr_19 [9LL] [i_0] [9U] [i_0] [9U])));
                        arr_23 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)270))));
                    }
                    for (int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        arr_27 [i_0] [i_1] [i_2] [i_6] [i_0] [i_0] = ((/* implicit */short) (-(((var_4) ? (((/* implicit */int) (_Bool)0)) : (arr_24 [3LL] [i_0] [i_0] [i_0])))));
                        arr_28 [(short)0] [i_0] [i_2] [(unsigned short)0] [i_2] [i_2] = ((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_6] [i_0]);
                    }
                    for (short i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_8 = 2; i_8 < 8; i_8 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) -21))));
                            arr_34 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)242))))) ? (((((/* implicit */_Bool) arr_25 [i_0] [i_0])) ? (-1216207860) : (((/* implicit */int) arr_14 [i_0] [2LL] [i_2] [8U] [i_1] [i_0])))) : (((((/* implicit */_Bool) arr_6 [(unsigned short)0] [(_Bool)1] [i_2])) ? (arr_7 [i_0] [i_0]) : (((/* implicit */int) arr_1 [i_0]))))));
                        }
                        for (unsigned char i_9 = 1; i_9 < 8; i_9 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_5 [i_0]))));
                            var_20 = ((/* implicit */long long int) (-(arr_21 [i_0] [i_9 + 1] [i_0 + 2] [i_0])));
                            var_21 = ((/* implicit */unsigned short) arr_20 [i_0] [4LL] [i_0] [i_0] [i_0] [4ULL]);
                            var_22 = ((/* implicit */long long int) -66060276);
                        }
                        for (long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            var_23 += ((/* implicit */unsigned long long int) ((var_10) & (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                            arr_40 [i_1] [i_2] [i_1] [i_0] = ((/* implicit */short) var_5);
                            arr_41 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((int) var_3));
                            arr_42 [i_1] [(_Bool)0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0] [(short)3] [(short)3] [i_0])) != (((((/* implicit */int) (unsigned char)248)) & (((/* implicit */int) (short)-270))))));
                        }
                        arr_43 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */long long int) arr_18 [i_1 - 1] [i_1] [i_1] [i_0] [i_1 + 1])) : (arr_20 [i_0 - 1] [i_1 - 2] [i_2] [i_2 + 1] [i_7] [i_2])));
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((long long int) ((int) arr_15 [i_0] [i_0] [9] [6LL] [9] [i_0]))))));
            var_25 = ((/* implicit */long long int) arr_37 [i_0] [(unsigned short)0] [i_0 + 2] [(unsigned short)0] [i_0]);
        }
        for (long long int i_12 = 1; i_12 < 8; i_12 += 3) 
        {
            arr_52 [i_0] [i_12] [i_12] = (short)-6441;
            arr_53 [i_0] [i_12] [i_12] = var_5;
        }
    }
    for (unsigned short i_13 = 1; i_13 < 19; i_13 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_14 = 3; i_14 < 20; i_14 += 4) 
        {
            var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_56 [i_13]), (((/* implicit */unsigned short) (unsigned char)56)))))));
            var_27 = ((/* implicit */unsigned long long int) (unsigned char)68);
            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (+(3391146441U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_59 [16ULL]))))))));
        }
        arr_60 [i_13] [i_13] = ((/* implicit */int) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)244))))), (max((arr_55 [i_13]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_55 [i_13])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0)))))))));
        var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) var_12))))))))));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        arr_64 [i_15] = ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)119)), (261120U)))) + (max((((/* implicit */long long int) arr_62 [i_15] [i_15])), ((-(arr_63 [i_15])))))));
        var_30 = ((/* implicit */short) min((((((/* implicit */long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) arr_62 [i_15] [i_15]))))) & (arr_63 [i_15]))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_63 [i_15])) || (((/* implicit */_Bool) arr_62 [i_15] [i_15])))))) / (max((arr_63 [i_15]), (arr_61 [i_15])))))));
        var_31 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_63 [i_15])) && (((/* implicit */_Bool) var_7))))))) > (arr_63 [i_15])));
        var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
    }
}
