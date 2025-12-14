/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30215
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
    for (unsigned int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) 9223372036854775792LL))));
                var_17 += ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        arr_7 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) : (4294705152U))), (((/* implicit */unsigned int) var_11))))) ? (max((arr_1 [i_2]), (((/* implicit */unsigned int) arr_3 [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            arr_10 [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (unsigned short)43255))));
            arr_11 [i_2] [i_3] [i_3] = ((/* implicit */int) var_2);
            arr_12 [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) var_0));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) arr_3 [i_2]))));
            arr_17 [i_4] [i_4 - 1] = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) arr_0 [i_2])))));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 15; i_5 += 2) 
            {
                for (unsigned char i_6 = 1; i_6 < 14; i_6 += 4) 
                {
                    {
                        arr_23 [i_4] [i_4 + 4] [i_4] [i_4 + 4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -23))));
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            arr_28 [i_4] = ((/* implicit */unsigned int) var_5);
                            arr_29 [0ULL] [i_4] [(unsigned char)0] [i_4] [0ULL] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_4 + 4])) ? (arr_16 [i_5 - 1]) : (((/* implicit */long long int) ((unsigned int) arr_21 [(signed char)7] [i_4] [(signed char)7])))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -6)) ? (((/* implicit */int) arr_14 [i_5] [i_6])) : (((/* implicit */int) arr_3 [i_2])))))))));
                            arr_30 [i_2] [i_2] [i_4] [i_6] [i_7] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) var_7)))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -10)) ? (((unsigned long long int) 1454543857U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((arr_33 [i_2] [i_2] [i_4] [i_4 - 1]) ? (arr_18 [i_5 - 1] [i_5 - 2] [i_5 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_4] [i_5 - 2] [i_5 + 1] [i_6 + 1])) ? (arr_22 [i_4] [i_5 + 1] [i_5 - 2] [i_6 - 1]) : (arr_22 [i_4] [i_5 + 1] [i_5 + 1] [i_6 - 1])));
                            arr_34 [4LL] [i_5] [i_4] [i_5] [4LL] [i_5] = ((/* implicit */signed char) arr_4 [i_5 - 2] [i_6 + 1]);
                        }
                        var_23 = ((/* implicit */long long int) arr_4 [i_4 + 4] [i_4 + 3]);
                        arr_35 [i_2] [i_4] [i_2] [i_4] [i_4 - 1] [i_2] = (~(arr_4 [i_4] [i_4 + 4]));
                        var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) arr_19 [i_4 + 2] [i_5 - 1] [i_6 + 1])) ? (((/* implicit */int) arr_19 [i_4 - 1] [i_5 - 2] [i_6 + 2])) : (((/* implicit */int) arr_19 [i_4 + 1] [i_5 - 1] [i_6 + 2]))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_9 = 2; i_9 < 12; i_9 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */signed char) ((unsigned int) var_1));
            var_26 -= ((/* implicit */unsigned short) (short)32760);
        }
        /* LoopSeq 2 */
        for (signed char i_10 = 2; i_10 < 15; i_10 += 3) 
        {
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (+((~(-6))))))));
            var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-57))));
            var_29 = ((/* implicit */long long int) min((4294967277U), (4294967259U)));
        }
        for (long long int i_11 = 2; i_11 < 15; i_11 += 4) 
        {
            var_30 = (-(4294967268U));
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_3), (((/* implicit */signed char) (!(((/* implicit */_Bool) 4294967282U)))))))) ? (min((4294967289U), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_11 - 2]))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 3) 
            {
                /* LoopSeq 1 */
                for (int i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_14 = 0; i_14 < 16; i_14 += 1) /* same iter space */
                    {
                        var_32 -= ((/* implicit */_Bool) arr_21 [i_11 - 1] [i_11] [i_11 + 1]);
                        arr_51 [i_13] [i_13] [i_12] [(unsigned char)0] [i_13] = ((/* implicit */short) max((19), (-38)));
                        arr_52 [i_11] [i_11] [i_13] [i_12] [i_11] [i_11] [i_2] = ((/* implicit */_Bool) min((arr_49 [i_2] [i_11] [i_11] [i_2] [i_14]), (((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) arr_27 [i_12])) ? (((/* implicit */int) (unsigned short)24969)) : (((/* implicit */int) arr_36 [i_2])))))))));
                        arr_53 [i_2] [i_11 - 1] [i_12] [i_13] [(unsigned short)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 19U)) ? (((/* implicit */int) var_7)) : (arr_37 [i_12] [i_11] [(unsigned char)4])))) ? (((((/* implicit */_Bool) var_2)) ? (min((arr_22 [i_13] [i_13] [2ULL] [i_13]), (((/* implicit */unsigned int) -959423228)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_9), ((unsigned short)46796))))))) : (max((25U), (((/* implicit */unsigned int) (unsigned short)36877))))));
                    }
                    for (signed char i_15 = 0; i_15 < 16; i_15 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((long long int) 425616226973918075ULL))) ? ((-(arr_55 [i_2] [11LL] [i_13]))) : (((/* implicit */long long int) (+(309818471U))))))));
                        var_34 += ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_40 [i_11 - 1])))) ? ((+(((/* implicit */int) arr_40 [i_11 - 1])))) : (((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) arr_40 [i_11 + 1])) : (((/* implicit */int) (short)-8502))))));
                        var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) (signed char)13)))));
                        arr_57 [i_2] [i_2] [i_2] [i_12] [i_2] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) ((short) min((((/* implicit */short) arr_24 [i_15] [i_15] [i_15] [i_13] [13U] [i_15])), (var_2)))))));
                    }
                    for (short i_16 = 1; i_16 < 12; i_16 += 4) 
                    {
                        arr_62 [i_12] [i_11 + 1] &= max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_11] [(_Bool)1])) ? (((/* implicit */int) arr_6 [(unsigned char)6])) : (((/* implicit */int) arr_8 [i_2] [i_16])))))))), (((((/* implicit */_Bool) arr_38 [12] [1U] [i_16 + 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_59 [i_2])) ? (((/* implicit */int) arr_39 [i_12])) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_8)) ? (-21LL) : (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_2] [i_11] [i_2] [i_2] [i_16] [i_12]))))))));
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_54 [i_13] [i_16 + 4] [i_16] [(short)13] [15U]))) ? (((/* implicit */int) min((((/* implicit */signed char) arr_6 [i_2])), (arr_0 [i_12])))) : (((/* implicit */int) (unsigned short)7128))));
                    }
                    var_37 = ((/* implicit */unsigned short) arr_19 [i_11] [i_11] [i_11]);
                }
                arr_63 [i_2] [i_2] = (_Bool)1;
                var_38 += ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_41 [i_2] [i_11 - 1])) ? (((/* implicit */int) arr_41 [i_2] [i_11 + 1])) : (((/* implicit */int) arr_41 [i_12] [i_11 - 1])))));
                var_39 *= ((/* implicit */signed char) (short)9739);
            }
            /* vectorizable */
            for (unsigned int i_17 = 0; i_17 < 16; i_17 += 3) 
            {
                var_40 = ((/* implicit */int) min((var_40), ((+(((/* implicit */int) arr_40 [i_11]))))));
                var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_58 [5U] [14ULL] [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11])))))));
                /* LoopSeq 1 */
                for (long long int i_18 = 1; i_18 < 15; i_18 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_19 = 0; i_19 < 16; i_19 += 4) 
                    {
                        var_42 |= arr_65 [i_2] [i_11] [i_17];
                        var_43 = ((/* implicit */short) 34U);
                        var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) arr_60 [i_19] [i_2] [i_17] [i_17] [i_2] [i_2] [i_2]))));
                        var_45 ^= ((/* implicit */long long int) (-((+(((/* implicit */int) arr_25 [i_2] [(short)1] [i_2] [i_2] [i_2] [i_2]))))));
                    }
                    for (short i_20 = 1; i_20 < 12; i_20 += 3) 
                    {
                        arr_74 [i_2] [i_18] [i_18] [(signed char)0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_5 [2U])) ? (((/* implicit */int) arr_25 [i_20 + 3] [i_18] [i_17] [i_11] [i_11] [i_2])) : (((/* implicit */int) arr_33 [i_18 - 1] [i_18] [i_18] [i_2]))))));
                        var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) (signed char)127))));
                    }
                    arr_75 [i_2] [i_2] [i_2] [i_2] [i_17] [i_2] &= ((/* implicit */unsigned long long int) 26);
                }
            }
            arr_76 [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_11 - 2] [i_2])) ? (((/* implicit */long long int) (+(arr_38 [i_11] [i_11 - 2] [i_2])))) : (min((arr_43 [i_11 - 2] [i_2]), (((/* implicit */long long int) (unsigned short)36902))))));
        }
        var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) max((((((/* implicit */_Bool) min(((unsigned short)36875), (arr_26 [i_2] [i_2] [i_2])))) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 31457280U)))))), (((((/* implicit */_Bool) arr_60 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (max((var_14), (((/* implicit */long long int) arr_72 [i_2] [i_2] [(short)10] [i_2] [i_2] [(short)2])))) : (((/* implicit */long long int) arr_37 [i_2] [i_2] [i_2])))))))));
    }
    /* vectorizable */
    for (signed char i_21 = 0; i_21 < 17; i_21 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_22 = 0; i_22 < 17; i_22 += 3) 
        {
            arr_82 [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? ((+(((/* implicit */int) arr_2 [i_21])))) : (((/* implicit */int) (_Bool)1))));
            var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) var_15))));
            var_49 = ((/* implicit */unsigned char) (_Bool)1);
            arr_83 [i_22] = ((/* implicit */_Bool) 18446744073709551608ULL);
            /* LoopNest 2 */
            for (long long int i_23 = 3; i_23 < 16; i_23 += 1) 
            {
                for (unsigned short i_24 = 0; i_24 < 17; i_24 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_25 = 3; i_25 < 15; i_25 += 2) 
                        {
                            var_50 *= ((/* implicit */long long int) ((unsigned int) var_10));
                            arr_94 [i_21] [i_22] [i_21] [i_24] [i_22] &= (~(arr_80 [i_23 - 1]));
                        }
                        for (unsigned short i_26 = 0; i_26 < 17; i_26 += 4) 
                        {
                            var_51 ^= ((/* implicit */unsigned int) var_1);
                            var_52 -= ((/* implicit */short) ((arr_88 [i_22] [i_23 - 2] [i_22] [i_23 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_88 [i_26] [i_23] [i_23 + 1] [i_23 + 1]))) : ((((_Bool)0) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_88 [i_21] [i_22] [i_26] [i_24])))))));
                            arr_99 [3] [7U] [(unsigned short)11] [i_21] [7U] [3] = ((/* implicit */unsigned char) var_6);
                            arr_100 [i_21] [i_21] [(short)13] [i_21] [i_21] [i_21] = ((/* implicit */unsigned int) ((unsigned short) -8890298738676714334LL));
                        }
                        arr_101 [i_21] [i_21] [i_21] [i_23] [4LL] [i_23] = ((/* implicit */unsigned long long int) (+((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) : (var_5)))));
                        var_53 = ((/* implicit */int) -2792621774719729896LL);
                    }
                } 
            } 
        }
        arr_102 [i_21] [i_21] = ((/* implicit */unsigned short) arr_86 [i_21] [i_21] [i_21] [i_21]);
    }
    var_54 -= ((/* implicit */unsigned int) var_10);
    var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_5)));
}
