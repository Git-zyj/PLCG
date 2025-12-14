/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40220
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) (unsigned char)124)) ? (2335324541132820730ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))))) << (((((/* implicit */int) min((max((var_13), (var_14))), (arr_0 [i_0])))) - (179)))));
        var_21 += ((/* implicit */short) ((((/* implicit */int) min((var_14), (arr_0 [i_0])))) * (min((((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */short) (unsigned char)0)))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 2) 
        {
            var_22 |= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_2 - 1]))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                arr_12 [i_1] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 3; i_4 < 13; i_4 += 4) 
                {
                    arr_16 [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */short) (-(((/* implicit */int) arr_14 [i_1] [i_2 + 1] [i_4 + 1] [i_4]))));
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_4 [i_2]))));
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)16)))))));
                    arr_17 [i_1] [i_2] [i_4] = var_19;
                }
            }
            arr_18 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_2 - 1]))));
        }
        arr_19 [i_1] = ((/* implicit */unsigned char) var_12);
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_6] [i_6] [i_6 - 1])) : (((/* implicit */int) arr_9 [i_6] [i_6] [i_6 - 1]))));
                    arr_27 [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))) != (var_9))) ? (((/* implicit */int) arr_13 [i_1] [i_6 - 1] [i_6] [i_7])) : (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_19)))))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    arr_30 [i_6 - 1] [i_1] = ((/* implicit */short) var_14);
                    arr_31 [i_1] [i_5] [i_6] [i_1] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) arr_5 [i_1])) < (((/* implicit */int) arr_3 [i_5]))))));
                    arr_32 [i_1] [i_5] [i_5] [i_6] [i_1] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)14)) * (((/* implicit */int) var_18))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6]))) : ((-(arr_22 [i_1] [i_1])))));
                    var_26 = ((/* implicit */_Bool) arr_9 [i_1] [i_5] [i_6]);
                }
                arr_33 [i_1] [9ULL] [i_5] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_11 [i_5] [i_6 - 1] [i_1] [i_6]))));
            }
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_5])) || (((/* implicit */_Bool) arr_2 [(short)4]))));
            arr_34 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_16)))) != (((/* implicit */int) arr_24 [i_1]))));
        }
        for (short i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_9])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_37 [i_1])))))));
            var_29 |= ((/* implicit */unsigned char) ((arr_15 [i_1] [i_1] [i_9] [i_9]) ? (((/* implicit */int) arr_5 [i_1])) : ((+(((/* implicit */int) arr_25 [i_9] [i_9] [i_1]))))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 2) 
        {
            /* LoopSeq 3 */
            for (short i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                arr_42 [i_1] [i_1] [i_11] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) (short)18080)) : (((/* implicit */int) (unsigned char)16))));
                var_30 = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1])) + (((/* implicit */int) var_8))));
            }
            for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 4) /* same iter space */
            {
                arr_46 [i_1] [i_10] [i_12] [i_1] = var_13;
                var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_1] [i_10] [i_12]))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [i_10])) + (((/* implicit */int) arr_13 [i_1] [i_10] [i_12] [(_Bool)1]))))))))));
            }
            for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    arr_52 [i_10] [i_13] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_8))));
                    /* LoopSeq 3 */
                    for (short i_15 = 1; i_15 < 14; i_15 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_15] [i_15 - 1] [i_15 + 1] [i_15 + 1] [i_15 - 1])) ? (((/* implicit */int) arr_53 [i_15] [i_15 - 1] [i_15 + 1] [i_15 + 1] [i_15 + 1])) : (((/* implicit */int) var_3))));
                        var_33 += ((/* implicit */unsigned char) arr_40 [i_13] [i_10]);
                    }
                    for (short i_16 = 1; i_16 < 14; i_16 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned char) arr_41 [i_10]);
                        arr_60 [i_1] [i_10] [i_13] [i_1] [i_16] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_15))));
                    }
                    for (short i_17 = 1; i_17 < 14; i_17 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_53 [i_17 + 1] [i_17] [i_17 - 1] [i_17 - 1] [i_17 - 1])) == (((/* implicit */int) var_13))));
                        var_36 = ((/* implicit */unsigned long long int) (unsigned char)0);
                        arr_63 [i_10] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_26 [i_1])) << (((/* implicit */int) arr_3 [i_17 + 1]))));
                        arr_64 [i_1] [i_10] [i_13] = ((/* implicit */unsigned long long int) arr_23 [i_17 - 1] [i_17 + 1] [i_17 + 1]);
                    }
                }
                var_37 = ((/* implicit */unsigned char) arr_51 [i_1] [i_10] [i_10] [i_13]);
            }
            var_38 += ((/* implicit */short) ((((/* implicit */int) arr_38 [i_1] [i_1] [i_1])) == (((/* implicit */int) var_15))));
        }
    }
    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
    {
        var_39 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_57 [i_18 - 1] [(unsigned char)10] [i_18] [i_18] [(unsigned char)10] [i_18])) ? (((/* implicit */int) arr_57 [i_18 - 1] [(unsigned char)14] [i_18] [i_18] [(unsigned char)14] [(short)8])) : (((/* implicit */int) arr_57 [i_18 - 1] [12ULL] [i_18] [i_18] [12ULL] [i_18])))) & (((/* implicit */int) var_6))));
        var_40 = ((/* implicit */unsigned char) var_3);
        var_41 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)244)) == (((/* implicit */int) (unsigned char)111))));
        var_42 = ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) arr_14 [(_Bool)1] [12ULL] [i_18] [(unsigned char)0])) ? (((/* implicit */int) arr_26 [(short)10])) : (((/* implicit */int) (unsigned char)13)))))), (((/* implicit */int) var_15))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_19 = 0; i_19 < 14; i_19 += 1) 
        {
            var_43 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_61 [i_18] [i_18] [i_19] [(short)11]))))));
            /* LoopNest 2 */
            for (unsigned char i_20 = 1; i_20 < 13; i_20 += 2) 
            {
                for (unsigned char i_21 = 0; i_21 < 14; i_21 += 1) 
                {
                    {
                        var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)137)) ^ (((/* implicit */int) (short)-18080))))) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [(short)0] [i_19] [(short)14]))))))));
                        var_45 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (arr_72 [i_19] [i_18 - 1] [i_20 + 1] [i_20]));
                        var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_18)))))));
                    }
                } 
            } 
        }
        for (unsigned char i_22 = 3; i_22 < 13; i_22 += 1) 
        {
            arr_79 [i_22] = ((/* implicit */short) ((min((arr_76 [i_18 - 1] [i_22 + 1] [i_22 + 1] [i_22 - 3]), (arr_76 [i_18 - 1] [i_22 - 3] [i_22 - 2] [i_22 - 1]))) - (((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_75 [11ULL])) + (((/* implicit */int) var_3)))))))));
            var_47 = ((/* implicit */_Bool) min((var_10), (((/* implicit */short) var_14))));
            var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))) : (18446744073709551594ULL)));
            arr_80 [i_22] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [(unsigned char)8] [i_18] [i_18 - 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_56 [(short)2] [i_18] [i_18]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [0ULL] [i_18] [i_18]))))) : (((/* implicit */int) min((var_15), (arr_56 [(unsigned char)8] [i_18] [i_18]))))));
            arr_81 [i_18] = ((/* implicit */short) arr_22 [i_18] [2ULL]);
        }
        /* vectorizable */
        for (short i_23 = 0; i_23 < 14; i_23 += 2) 
        {
            arr_84 [i_18 - 1] [i_18] [i_23] = var_6;
            var_49 = ((/* implicit */unsigned long long int) arr_25 [i_23] [i_23] [i_23]);
            var_50 = ((/* implicit */short) var_19);
            var_51 = ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_18 - 1] [i_18] [i_23] [i_23])) % (((/* implicit */int) arr_13 [i_18 - 1] [i_23] [i_23] [i_18]))));
        }
    }
    var_52 &= ((/* implicit */unsigned char) (-(((/* implicit */int) var_16))));
}
