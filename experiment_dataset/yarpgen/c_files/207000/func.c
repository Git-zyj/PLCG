/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207000
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_10 *= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_5)) < (18446744073709551615ULL)))), (var_2)));
                var_11 = ((/* implicit */unsigned int) 18446744073709551615ULL);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_8) : (2345970978344777ULL)))) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)4])))))), (max((var_8), (((/* implicit */unsigned long long int) var_2))))));
                            var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) arr_7 [i_0] [i_0] [(unsigned short)8] [i_3]))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] [i_0] = var_5;
                var_14 = ((/* implicit */unsigned int) (~(arr_1 [i_1])));
            }
        } 
    } 
    var_15 = (-(((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (18446744073709551600ULL))) ? (min((((/* implicit */unsigned long long int) var_5)), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
    /* LoopSeq 2 */
    for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_5 = 1; i_5 < 18; i_5 += 3) 
        {
            /* LoopSeq 4 */
            for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                var_16 = ((/* implicit */long long int) ((_Bool) 1ULL));
                var_17 += ((/* implicit */_Bool) arr_13 [i_4]);
                arr_19 [i_4] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) var_1);
                arr_20 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_16 [i_5 + 1]), (arr_18 [i_5])))))));
            }
            for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 1) 
            {
                /* LoopSeq 3 */
                for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), (max((var_4), (((/* implicit */unsigned int) arr_12 [i_5 + 1]))))));
                    var_19 = ((/* implicit */short) var_8);
                }
                for (unsigned char i_9 = 2; i_9 < 18; i_9 += 1) 
                {
                    arr_31 [i_5] [i_5] = (+((-(var_3))));
                    var_20 = ((/* implicit */long long int) arr_18 [i_5]);
                    var_21 = ((/* implicit */int) var_5);
                }
                for (unsigned long long int i_10 = 1; i_10 < 19; i_10 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) ((var_4) * (max((((unsigned int) var_0)), (((/* implicit */unsigned int) min((arr_17 [i_7] [i_7] [i_7]), (var_6))))))));
                    arr_35 [i_4] [i_4] [i_7] [i_10 + 1] &= ((/* implicit */short) var_1);
                    arr_36 [i_5] = ((/* implicit */long long int) 18446744073709551615ULL);
                }
                var_23 = ((/* implicit */unsigned long long int) ((unsigned int) max(((unsigned short)19068), (((/* implicit */unsigned short) var_0)))));
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_34 [i_4] [i_4] [(_Bool)1] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4]))) : (var_8))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_7] [i_7] [i_4] [i_4] [i_4])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [17ULL] [i_5] [18]))) / (((var_7) * (((/* implicit */unsigned long long int) 3444273999U)))))))))));
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) 7456000319979180473ULL)))))));
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((max(((+(arr_27 [i_4] [i_4] [16U] [i_7] [i_7 - 1] [i_4]))), (min((18446744073709551591ULL), (18446744073709551615ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_5 - 1] [i_7] [i_7 - 2]))))))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                arr_39 [i_4] [i_5 - 1] [i_4] [i_5] = ((/* implicit */unsigned int) max((1ULL), (((unsigned long long int) var_8))));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    for (long long int i_13 = 1; i_13 < 17; i_13 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */int) (signed char)86)) + (((/* implicit */int) ((_Bool) 1ULL))))) : (((/* implicit */int) (unsigned char)40))));
                            var_28 &= ((/* implicit */unsigned long long int) ((max((var_7), (((/* implicit */unsigned long long int) arr_44 [i_5 - 1] [i_5 + 2] [i_4])))) == (((/* implicit */unsigned long long int) arr_41 [i_5 + 2] [i_11]))));
                            var_29 = ((/* implicit */signed char) min((((4747715646953532494ULL) | (((/* implicit */unsigned long long int) (+(var_2)))))), (((/* implicit */unsigned long long int) arr_33 [i_13]))));
                            var_30 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_43 [i_5] [i_5 + 1]), (arr_43 [i_5] [i_5 - 1]))))));
                        }
                    } 
                } 
                arr_47 [i_4] [i_5 + 1] |= ((/* implicit */signed char) (~(18446744073709551615ULL)));
            }
            for (signed char i_14 = 0; i_14 < 20; i_14 += 3) 
            {
                var_31 *= var_8;
                var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-25))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_25 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1])))))))));
                var_33 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (signed char)1)), ((+(((((/* implicit */_Bool) 2416429283192932971LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -6021567689856668841LL))))))));
                arr_50 [i_4] [i_5] [i_5] [i_4] &= ((/* implicit */unsigned int) ((signed char) ((arr_44 [i_4] [i_4] [i_4]) - (arr_44 [(unsigned char)2] [i_4] [i_4]))));
            }
            var_34 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */short) arr_21 [i_5 - 1] [i_5 + 2] [i_4] [(unsigned char)12])))))));
            /* LoopSeq 1 */
            for (unsigned int i_15 = 0; i_15 < 20; i_15 += 2) 
            {
                var_35 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_4] [i_5] [i_4] [i_5 - 1] [i_4]))) : (arr_25 [i_4] [i_4] [i_4] [i_15] [i_15]))))));
                var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) var_5))));
                var_37 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) var_5)), (max((min((var_3), (var_8))), (((/* implicit */unsigned long long int) max(((unsigned short)14272), (((/* implicit */unsigned short) var_9)))))))));
            }
        }
        for (signed char i_16 = 3; i_16 < 18; i_16 += 1) 
        {
            var_38 = arr_27 [i_16 + 1] [i_16] [i_4] [i_4] [i_4] [i_4];
            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) arr_32 [i_4] [i_16] [i_16 - 3] [(signed char)14] [(signed char)14] [i_16]))));
        }
        arr_56 [12ULL] [1U] = ((/* implicit */unsigned long long int) arr_12 [i_4]);
        var_40 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_21 [i_4] [4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((+(var_8)))))));
    }
    for (unsigned int i_17 = 4; i_17 < 10; i_17 += 3) 
    {
        var_41 = ((/* implicit */signed char) var_4);
        /* LoopNest 3 */
        for (signed char i_18 = 0; i_18 < 11; i_18 += 1) 
        {
            for (short i_19 = 3; i_19 < 9; i_19 += 1) 
            {
                for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 3) 
                {
                    {
                        var_42 = ((/* implicit */unsigned long long int) max((arr_67 [i_17] [i_18] [i_17] [i_20]), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_23 [i_19 - 1] [i_17 - 1] [6ULL])) : (((/* implicit */int) arr_23 [i_19 + 1] [i_17 - 3] [i_19 + 1]))))));
                        arr_68 [i_17 + 1] [i_17 + 1] [i_19 + 2] [i_18] [i_18] [i_17 + 1] = ((/* implicit */_Bool) arr_49 [i_17 - 2] [i_17 - 1] [i_19 + 1] [(signed char)2]);
                    }
                } 
            } 
        } 
        arr_69 [i_17] = ((/* implicit */unsigned int) arr_26 [(unsigned short)8] [(unsigned short)8] [i_17 + 1] [i_17]);
        var_43 = ((/* implicit */unsigned long long int) max((var_43), (((((/* implicit */_Bool) 16353528158316849963ULL)) ? (13699028426756019128ULL) : (((/* implicit */unsigned long long int) 1457578253U))))));
    }
    var_44 -= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)24456)) : (2147483647)));
}
