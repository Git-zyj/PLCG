/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191439
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) /* same iter space */
    {
        arr_2 [11U] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_16))) ? (16717836066994609637ULL) : (((/* implicit */unsigned long long int) var_3))));
        arr_3 [i_0] = ((/* implicit */unsigned short) var_6);
    }
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_2 = 1; i_2 < 13; i_2 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (short)30964))) ? (arr_7 [i_2] [(unsigned char)7]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)105)) - (((/* implicit */int) arr_1 [i_1 + 2])))))));
            /* LoopNest 2 */
            for (long long int i_3 = 1; i_3 < 12; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned char)91)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_2 + 1] [i_3] [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1 + 2] [i_2 - 1] [i_3 - 1])))));
                        arr_17 [i_1 + 2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) ((unsigned char) arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]));
                        var_20 = ((/* implicit */unsigned char) var_0);
                        var_21 = ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)151))))) + (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_3 + 2] [i_4])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (unsigned char)105)))));
                    }
                } 
            } 
            arr_18 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [i_1 - 1]))) : (var_13)));
            var_22 = ((/* implicit */short) arr_5 [i_1 - 1]);
        }
        for (long long int i_5 = 1; i_5 < 13; i_5 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_6 = 4; i_6 < 13; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        {
                            arr_29 [i_5] = ((/* implicit */short) ((int) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_8] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (arr_7 [i_1] [i_5])))));
                            arr_30 [i_1] [i_1 + 1] [i_1 + 2] [i_1] [i_5] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)89)) && (((/* implicit */_Bool) arr_19 [i_1] [i_1 + 1])))))))), (min((((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) (unsigned char)167))))), (min((((/* implicit */int) (unsigned char)89)), (var_16)))))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((_Bool) ((unsigned char) ((444386968) <= (((/* implicit */int) (signed char)52)))))))));
                            arr_31 [i_1] [i_5] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_12 [i_6 - 1] [i_5] [i_6])) ? (((/* implicit */int) arr_12 [i_6 - 4] [i_5] [i_5])) : (((/* implicit */int) (unsigned char)0)))), (((((/* implicit */int) arr_12 [i_6 - 2] [i_5] [i_6])) / (((/* implicit */int) arr_12 [i_6 - 3] [i_5 + 1] [i_6]))))));
                            var_24 *= ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)183)))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */unsigned char) arr_23 [(unsigned short)0] [7LL] [i_5] [i_5 - 1]);
        }
        var_26 ^= ((/* implicit */long long int) ((signed char) (unsigned char)112));
    }
    for (unsigned char i_9 = 1; i_9 < 12; i_9 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned int) max((((((/* implicit */int) var_12)) >= (((/* implicit */int) (unsigned char)155)))), (((arr_25 [i_9 + 2] [i_9 + 2] [i_9 - 1] [i_9 - 1] [8U]) >= (((/* implicit */int) (unsigned char)242))))));
        arr_34 [i_9] = ((/* implicit */int) var_13);
        var_28 -= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) arr_22 [i_9 + 1] [i_9] [i_9 + 1]))))) ? (((((/* implicit */_Bool) arr_19 [i_9] [i_9])) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) arr_6 [7U] [7U] [i_9 + 2])))) : (var_11))), (((/* implicit */int) ((short) arr_4 [i_9 + 2])))));
    }
    /* LoopSeq 3 */
    for (short i_10 = 0; i_10 < 22; i_10 += 4) 
    {
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_10])) ? (((var_8) + (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_10]))))) : (arr_36 [i_10])));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_11 = 2; i_11 < 20; i_11 += 4) 
        {
            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4239893613U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96))) : (arr_39 [i_11 + 1] [i_11 - 2])));
            arr_40 [i_10] [11U] [i_10] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)110)) && (((/* implicit */_Bool) 4294967295U))));
        }
        /* vectorizable */
        for (long long int i_12 = 0; i_12 < 22; i_12 += 2) 
        {
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (arr_39 [i_12] [i_12]) : (arr_39 [i_10] [i_12])));
            /* LoopSeq 2 */
            for (signed char i_13 = 1; i_13 < 19; i_13 += 3) 
            {
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    for (unsigned char i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_41 [i_13 + 1] [i_13]))));
                            var_33 ^= ((/* implicit */signed char) (+(arr_37 [i_13 - 1] [i_13 + 3] [i_13 + 3])));
                            arr_51 [i_10] [i_10] = ((/* implicit */signed char) arr_41 [i_13 - 1] [i_13 - 1]);
                        }
                    } 
                } 
                arr_52 [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) (-(var_3)));
                var_34 = ((/* implicit */int) ((((/* implicit */_Bool) arr_45 [i_13 + 2] [i_13 + 2] [i_13 + 1] [i_13 - 1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)89)))));
            }
            for (unsigned char i_16 = 0; i_16 < 22; i_16 += 2) 
            {
                arr_55 [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5726310682655191350LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_8)));
                /* LoopSeq 2 */
                for (unsigned char i_17 = 0; i_17 < 22; i_17 += 4) 
                {
                    var_35 = ((((/* implicit */_Bool) arr_35 [i_17])) ? (arr_50 [i_17] [i_12] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)3)))))));
                    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) (short)0))));
                    arr_59 [i_10] [(unsigned short)17] [i_16] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) -267095233035986018LL)) ? (((/* implicit */int) arr_44 [i_10] [i_12] [i_16])) : (((/* implicit */int) arr_49 [i_10] [i_12] [i_16]))));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_37 = ((/* implicit */long long int) ((unsigned int) var_2));
                    var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_61 [i_10] [i_12] [i_16] [i_16] [(unsigned char)17])) / (((/* implicit */int) (signed char)-22))))) ? (((/* implicit */int) (unsigned short)65510)) : (((-1938372626) / (arr_37 [i_18] [i_12] [i_10])))));
                }
                var_39 = ((/* implicit */unsigned long long int) ((unsigned char) var_3));
                var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((var_6) >= (arr_38 [i_10] [i_12] [i_16]))))));
            }
        }
        for (short i_19 = 4; i_19 < 21; i_19 += 2) 
        {
            var_41 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_56 [i_19 - 3] [i_19] [i_10] [i_10])) ? (arr_37 [i_19 - 3] [i_19 - 1] [i_19 - 2]) : (((/* implicit */int) (unsigned char)147)))) + (((/* implicit */int) min((arr_61 [i_10] [i_10] [i_10] [i_10] [i_19 - 1]), (((/* implicit */unsigned char) (signed char)126)))))));
            var_42 = ((/* implicit */signed char) min((((/* implicit */long long int) (~(((/* implicit */int) arr_64 [i_10] [i_10] [i_19 - 2]))))), (max((1064712953852775519LL), (arr_56 [i_19 - 1] [i_19 - 1] [i_19 - 3] [i_19 - 3])))));
        }
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_21 = 0; i_21 < 10; i_21 += 4) 
        {
            for (unsigned char i_22 = 0; i_22 < 10; i_22 += 4) 
            {
                {
                    arr_71 [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((955282562), (((/* implicit */int) arr_13 [i_20] [i_20] [i_20] [i_20]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_20] [i_21] [i_21] [i_22]))) * (arr_7 [i_21] [i_21])))) : (((((/* implicit */_Bool) arr_61 [6U] [i_20] [6U] [i_20] [i_20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_20] [i_21] [i_20] [i_21] [i_21]))) : (1765673484203058865ULL)))));
                    var_43 = ((/* implicit */int) ((((arr_48 [i_20] [19U] [i_22] [i_22]) || (((/* implicit */_Bool) arr_27 [i_20] [i_20] [i_22] [i_22])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_20]))) : (var_1)));
                    var_44 = ((/* implicit */int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)19103)))))))));
                }
            } 
        } 
        var_45 = ((/* implicit */signed char) ((long long int) max((649088943U), (((/* implicit */unsigned int) (unsigned char)23)))));
        arr_72 [i_20] [i_20] = ((/* implicit */long long int) (-(((/* implicit */int) arr_60 [i_20] [i_20]))));
    }
    /* vectorizable */
    for (long long int i_23 = 0; i_23 < 21; i_23 += 4) 
    {
        var_46 = ((/* implicit */unsigned char) var_6);
        arr_75 [i_23] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)166))))) ? (((((/* implicit */unsigned int) var_16)) / (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_23] [i_23] [i_23] [i_23])))));
    }
}
