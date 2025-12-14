/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5360
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) min((arr_0 [i_0 + 2]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 3] [i_0 + 3]))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((var_17) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))))));
            var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) var_7)))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_2 [i_0]))));
            arr_6 [i_0] [i_2] = ((/* implicit */signed char) ((int) (unsigned short)29557));
            arr_7 [i_0] [i_0] [i_2] = ((/* implicit */signed char) (~((-(((((/* implicit */int) (unsigned short)29547)) + (((/* implicit */int) var_11))))))));
            var_21 += ((/* implicit */unsigned long long int) var_11);
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                var_22 ^= ((/* implicit */int) arr_2 [i_0 - 1]);
                var_23 += ((/* implicit */signed char) var_0);
                var_24 ^= ((/* implicit */unsigned short) var_5);
                var_25 += ((/* implicit */int) min((arr_5 [i_3]), (((/* implicit */unsigned char) ((((int) var_14)) < (((/* implicit */int) (unsigned char)191)))))));
            }
        }
        for (short i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            var_26 = ((/* implicit */unsigned long long int) var_12);
            arr_12 [i_0] [i_4] [i_0 - 2] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_5)))) ? (((var_1) << (((((/* implicit */int) ((signed char) arr_10 [i_0]))) - (33))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_11 [i_4] [i_0 + 3] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0])) : (var_0))))))));
        }
        arr_13 [i_0 - 2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((var_0) == (arr_9 [(unsigned char)6] [i_0] [i_0 - 2] [i_0 + 2]))))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        arr_16 [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) (unsigned short)35989)))))));
        arr_17 [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 0ULL))));
        /* LoopSeq 3 */
        for (short i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
        {
            arr_21 [i_6] [i_5] &= ((/* implicit */unsigned char) var_3);
            var_27 = ((/* implicit */unsigned char) arr_14 [i_5]);
            /* LoopSeq 3 */
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
            {
                arr_25 [i_5] [i_6] [(signed char)19] = ((/* implicit */unsigned long long int) arr_20 [i_7] [i_6] [i_5]);
                arr_26 [i_7] [i_6] [i_5] = ((/* implicit */unsigned long long int) (signed char)-114);
                arr_27 [(unsigned char)18] [i_6] [(unsigned char)18] = ((int) (-(((/* implicit */int) var_12))));
                arr_28 [i_7] = ((/* implicit */unsigned char) ((signed char) ((unsigned long long int) arr_14 [i_5])));
            }
            for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)29548)) << (((/* implicit */int) arr_15 [i_5] [i_8]))));
                var_29 = ((/* implicit */signed char) ((unsigned long long int) (short)-20128));
            }
            for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
            {
                arr_33 [(unsigned char)1] [(unsigned char)1] [i_6] [(unsigned char)1] |= ((/* implicit */unsigned short) var_17);
                arr_34 [i_5] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned char) (signed char)26)))));
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    for (int i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        {
                            arr_40 [i_5] [i_11] [i_11] [i_10] [(short)8] = (((+(((/* implicit */int) (unsigned short)57205)))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (arr_38 [i_9] [i_9] [i_9]))));
                            arr_41 [i_5] [i_5] [i_5] [i_10] [i_11] = ((/* implicit */unsigned long long int) (unsigned short)29550);
                        }
                    } 
                } 
            }
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_2)));
        }
        for (short i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 2) 
            {
                /* LoopSeq 3 */
                for (signed char i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)199)) || (((/* implicit */_Bool) var_15))))))))));
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 24; i_15 += 4) 
                    {
                        var_32 |= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)57215))));
                        arr_53 [i_5] [i_5] [15ULL] [i_13] [i_14] [i_5] = ((/* implicit */unsigned short) (-(arr_49 [i_5] [i_12] [i_12] [i_12] [i_14] [i_15])));
                        var_33 &= ((/* implicit */unsigned long long int) (unsigned short)57181);
                        arr_54 [i_5] [i_13] [i_13] [i_13] [i_5] [0ULL] |= ((/* implicit */unsigned char) var_16);
                    }
                    /* LoopSeq 2 */
                    for (short i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        var_34 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 908679528949014736ULL))));
                        var_35 = ((/* implicit */unsigned long long int) var_7);
                    }
                    for (short i_17 = 0; i_17 < 24; i_17 += 3) 
                    {
                        arr_59 [i_5] [i_5] [i_17] [i_17] [i_5] [i_13] [i_5] |= ((/* implicit */signed char) (short)19892);
                        var_36 = var_2;
                    }
                    arr_60 [i_5] [i_5] [i_12] [i_5] [i_14] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) > (arr_31 [i_14] [i_13] [i_12] [i_5])))) : (((/* implicit */int) ((signed char) arr_42 [i_12])))));
                    arr_61 [i_5] [i_12] [i_12] [(short)13] [i_14] = ((/* implicit */int) var_4);
                }
                for (unsigned char i_18 = 2; i_18 < 21; i_18 += 2) 
                {
                    var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_12] [i_5] [i_12] [i_5] [i_5]))));
                    arr_66 [(signed char)10] [i_12] [i_12] [(short)0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (arr_46 [i_18 + 1] [i_18 + 1] [i_18] [i_18 - 2] [i_18 + 1] [(signed char)1])));
                    var_38 = ((/* implicit */int) ((signed char) arr_18 [(signed char)21] [i_12] [i_13]));
                }
                for (int i_19 = 0; i_19 < 24; i_19 += 4) 
                {
                    var_39 = var_5;
                    var_40 ^= ((/* implicit */short) ((signed char) arr_43 [i_5] [i_19]));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_20 = 1; i_20 < 23; i_20 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_21 = 0; i_21 < 24; i_21 += 4) 
                    {
                        arr_73 [i_5] [i_12] [i_5] [i_12] [i_5] [i_5] = ((/* implicit */unsigned char) (((~(var_17))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_63 [i_5] [i_12] [i_13] [i_20] [i_21])) % (((/* implicit */int) arr_19 [i_13])))))));
                        var_41 += ((/* implicit */short) ((((/* implicit */_Bool) arr_55 [i_5] [i_5] [i_5] [i_20 + 1] [i_21])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((short) arr_15 [i_5] [i_5])))));
                    }
                    for (short i_22 = 3; i_22 < 23; i_22 += 1) 
                    {
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_63 [i_12] [i_20 - 1] [i_20] [i_22 + 1] [i_22])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 17538064544760536883ULL))))) : (((/* implicit */int) arr_63 [(short)11] [i_12] [i_12] [i_12] [i_12]))));
                        arr_76 [i_5] [i_12] [i_5] [i_5] [i_5] [i_22 + 1] |= ((/* implicit */short) (~(((/* implicit */int) ((signed char) arr_49 [i_22 - 1] [i_12] [i_5] [i_12] [i_5] [i_5])))));
                        var_43 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_3) <= (12547953396343501441ULL))))));
                    }
                    var_44 = ((/* implicit */unsigned char) ((signed char) arr_51 [i_20 + 1] [i_20 + 1] [i_20 - 1] [i_20] [i_20 - 1] [i_5]));
                    var_45 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)43602))));
                    var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) var_13))));
                }
                for (unsigned short i_23 = 0; i_23 < 24; i_23 += 3) 
                {
                    var_47 = ((/* implicit */signed char) (~(var_15)));
                    var_48 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8321))) : (var_16)));
                }
                /* LoopSeq 3 */
                for (short i_24 = 0; i_24 < 24; i_24 += 3) 
                {
                    arr_83 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) ((var_15) - (var_13)));
                    var_49 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_68 [i_13] [i_24] [i_13] [i_5] [i_5] [i_12]))));
                }
                for (unsigned long long int i_25 = 3; i_25 < 22; i_25 += 3) 
                {
                    var_50 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_15)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_57 [i_5] [i_5] [i_5] [i_5] [i_5])) * (((/* implicit */int) var_9))))) : (18446744073709551602ULL)));
                    var_51 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_9)))))));
                }
                for (short i_26 = 0; i_26 < 24; i_26 += 2) 
                {
                    var_52 = ((((/* implicit */int) var_5)) / (arr_79 [i_5]));
                    var_53 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18446744073709551599ULL))));
                    var_54 += ((/* implicit */unsigned long long int) arr_52 [i_5] [i_12] [i_5] [i_13] [i_13] [i_13] [i_26]);
                }
            }
            var_55 = ((/* implicit */short) max((var_55), (((/* implicit */short) var_9))));
        }
        for (short i_27 = 0; i_27 < 24; i_27 += 3) /* same iter space */
        {
            var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)29562)) ? (((/* implicit */int) arr_69 [i_5] [i_5] [i_5] [i_27] [i_27] [i_27])) : (((/* implicit */int) arr_69 [i_5] [i_5] [i_5] [i_27] [i_27] [i_27]))));
            arr_92 [i_5] |= ((/* implicit */unsigned short) arr_46 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
        }
    }
    for (unsigned long long int i_28 = 1; i_28 < 11; i_28 += 3) 
    {
        var_57 = ((/* implicit */unsigned long long int) ((unsigned char) arr_22 [i_28 + 2] [i_28 - 1] [i_28 - 1]));
        arr_96 [i_28 - 1] [(unsigned char)4] = ((/* implicit */unsigned long long int) (unsigned short)57215);
    }
    var_58 ^= ((/* implicit */unsigned short) var_13);
    var_59 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))));
    var_60 = ((/* implicit */short) var_10);
}
