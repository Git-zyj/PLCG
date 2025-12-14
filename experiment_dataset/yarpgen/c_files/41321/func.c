/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41321
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
    var_19 = ((/* implicit */unsigned short) var_18);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
        {
            arr_4 [i_0] [15LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_0 + 1]) & (arr_1 [i_0 + 1])))) || (((/* implicit */_Bool) arr_1 [i_0 + 1]))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~(arr_3 [i_0 + 1] [i_0 + 1] [i_3]))))));
                        arr_10 [i_0] [i_2] [i_0] = ((/* implicit */int) (!(((_Bool) ((((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_2] [i_3])) > (var_15))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1] [i_0] [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2652830334U)))))))))));
            /* LoopSeq 3 */
            for (unsigned int i_5 = 3; i_5 < 20; i_5 += 2) 
            {
                arr_16 [i_0] [i_4] [(unsigned char)4] = ((/* implicit */short) var_3);
                var_22 = ((/* implicit */int) 2652830334U);
            }
            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                var_23 *= ((/* implicit */int) ((arr_2 [i_0]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_4] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (short)22296))) : (9223372036854775807LL))))));
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */short) ((((unsigned long long int) 2652830334U)) < (((/* implicit */unsigned long long int) (~(var_3))))));
                            var_25 = ((/* implicit */unsigned long long int) ((unsigned char) arr_21 [i_0 + 1] [i_0 + 1]));
                            var_26 = ((/* implicit */short) 1642136961U);
                        }
                    } 
                } 
                arr_25 [10] [i_4] [i_6] = ((/* implicit */short) ((unsigned char) arr_14 [i_6] [i_4] [i_0 + 1]));
                var_27 = ((/* implicit */short) arr_0 [i_0] [(short)15]);
                var_28 = ((/* implicit */unsigned long long int) var_12);
            }
            for (unsigned long long int i_9 = 2; i_9 < 22; i_9 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    arr_31 [(short)1] [(signed char)1] [i_10] [(short)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_8 [19] [i_9] [i_4] [i_0])))) ? (arr_21 [i_0 + 1] [i_0 + 1]) : (((/* implicit */int) arr_20 [i_0 + 1] [i_9 + 1] [i_10]))));
                    var_29 += ((/* implicit */unsigned char) arr_12 [i_0 + 1]);
                }
                for (int i_11 = 0; i_11 < 23; i_11 += 1) 
                {
                    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) 2652830334U))));
                    var_31 -= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)14)))) ? (((/* implicit */int) arr_24 [i_0 + 1] [i_4] [i_9] [i_9] [4U])) : (((/* implicit */int) ((unsigned short) 1642136961U)))));
                    var_32 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_11] [i_9 - 2] [i_4] [i_0]))));
                }
                var_33 = ((/* implicit */_Bool) arr_14 [i_0] [i_4] [(_Bool)1]);
                /* LoopSeq 2 */
                for (int i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    var_34 = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0 + 1])) || (((/* implicit */_Bool) arr_13 [i_0 + 1]))));
                    var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_9 - 1] [i_12]))))))));
                    var_36 -= ((/* implicit */unsigned char) 3844674962U);
                }
                for (unsigned int i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    var_37 -= ((int) arr_27 [i_0 + 1] [i_4] [i_9 + 1] [i_9 + 1]);
                    arr_41 [i_0] [i_0] [i_9 - 2] [i_9 - 2] [i_13] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_30 [i_13]))));
                }
                var_38 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) -1104773110086760282LL)) : (18446744073709551599ULL))));
            }
        }
        for (long long int i_14 = 0; i_14 < 23; i_14 += 4) /* same iter space */
        {
            var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) arr_27 [i_0 + 1] [i_0] [i_14] [i_0 + 1]))));
            var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((arr_39 [i_0 + 1]) & (1266035145))) : (((/* implicit */int) arr_9 [i_14] [i_14] [i_0] [i_0])))))));
        }
        for (int i_15 = 1; i_15 < 22; i_15 += 3) 
        {
            var_41 -= (short)(-32767 - 1);
            /* LoopNest 2 */
            for (short i_16 = 3; i_16 < 22; i_16 += 1) 
            {
                for (long long int i_17 = 0; i_17 < 23; i_17 += 4) 
                {
                    {
                        var_42 -= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0 + 1] [i_15] [i_15 + 1]))))) << (((((((((/* implicit */int) var_7)) + (2147483647))) << (((((var_13) & (((/* implicit */unsigned int) -1733068246)))) - (2282897440U))))) - (2147478066)))));
                        arr_52 [i_0] [i_0] [(signed char)14] [i_17] = ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_23 [i_17] [i_16] [i_16 - 1] [3ULL] [i_17]))))), (((short) (signed char)127))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (short i_19 = 0; i_19 < 23; i_19 += 2) 
            {
                {
                    arr_57 [i_0] [i_18] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_16))) == (max(((+(((/* implicit */int) var_6)))), (((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */int) (short)-12327)) : (arr_21 [i_0] [i_19])))))));
                    var_43 = ((/* implicit */short) (~(((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_43 [i_19])))) & (((((/* implicit */unsigned int) ((/* implicit */int) (short)32739))) & (3317415223U)))))));
                    var_44 *= ((1642136962U) / (1642136979U));
                    var_45 = ((/* implicit */int) (~(arr_28 [i_0] [i_0] [i_0] [i_0])));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_20 = 3; i_20 < 20; i_20 += 1) 
        {
            arr_61 [i_0] = ((/* implicit */_Bool) arr_36 [6LL] [i_0] [i_20] [i_20] [i_20 + 1]);
            var_46 = ((4294967295U) << (((1104773110086760287LL) - (1104773110086760264LL))));
            /* LoopNest 2 */
            for (unsigned char i_21 = 0; i_21 < 23; i_21 += 4) 
            {
                for (unsigned short i_22 = 0; i_22 < 23; i_22 += 1) 
                {
                    {
                        var_47 = ((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_20 - 1] [i_0 + 1]) >> (((arr_5 [i_20] [i_20 - 2] [i_0 + 1]) - (310179051)))));
                        var_48 -= ((/* implicit */short) (+(0U)));
                    }
                } 
            } 
        }
        var_49 = ((/* implicit */short) (~(((((/* implicit */int) arr_46 [i_0 + 1] [i_0 + 1] [i_0 + 1])) | (((/* implicit */int) arr_46 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
    }
    for (unsigned int i_23 = 2; i_23 < 13; i_23 += 3) 
    {
        arr_69 [i_23 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_45 [i_23 - 1])) ? (arr_64 [i_23 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((int) 1642136962U)) : (((/* implicit */int) ((1989540389U) == (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))) || (((/* implicit */_Bool) var_11)))))));
    }
    var_51 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_10) ? (var_1) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_18)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((unsigned short) var_16))))) : ((~(((((/* implicit */_Bool) 2652830303U)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23656)))))))));
    /* LoopNest 2 */
    for (int i_24 = 0; i_24 < 12; i_24 += 2) 
    {
        for (short i_25 = 2; i_25 < 11; i_25 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 12; i_26 += 2) 
                {
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        {
                            var_52 = ((/* implicit */unsigned int) min((var_52), (((/* implicit */unsigned int) max((((short) arr_71 [i_25 + 1])), (arr_9 [i_25 + 1] [i_25 - 2] [i_25 + 1] [i_25 - 2]))))));
                            arr_78 [i_26] [i_26] [i_26] [i_25] [i_24] [i_24] = ((/* implicit */int) ((unsigned long long int) max(((+(((/* implicit */int) arr_63 [i_24] [i_24] [i_24])))), (((/* implicit */int) arr_65 [i_24] [i_25] [i_26] [i_27])))));
                        }
                    } 
                } 
                arr_79 [i_24] = ((/* implicit */int) arr_59 [i_24] [i_24]);
                var_53 = ((/* implicit */short) (+(((/* implicit */int) (signed char)-5))));
            }
        } 
    } 
}
