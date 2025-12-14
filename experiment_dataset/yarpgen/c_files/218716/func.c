/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218716
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned long long int) (short)-1);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        var_11 = ((/* implicit */long long int) (~((~(arr_0 [i_0])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                var_12 = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0])) == (((/* implicit */int) var_8))));
                var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)36))))) ? (((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_0])) : (var_2)))));
                /* LoopSeq 1 */
                for (unsigned int i_3 = 3; i_3 < 17; i_3 += 2) 
                {
                    var_14 = ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2]);
                    var_15 = ((((/* implicit */_Bool) arr_11 [i_0] [(unsigned char)19] [i_3 - 3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_11 [i_0] [1] [i_3 - 1] [i_3]));
                }
                arr_13 [i_0] [0LL] [i_2] = ((/* implicit */short) ((unsigned long long int) 8808733261709519491ULL));
            }
            for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                var_16 = ((/* implicit */signed char) (~((~(((/* implicit */int) (unsigned char)219))))));
                /* LoopSeq 1 */
                for (long long int i_5 = 3; i_5 < 18; i_5 += 4) 
                {
                    var_17 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)201))));
                    arr_19 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (+(1244903465)));
                    var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) (short)-16917)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))));
                    var_19 -= ((/* implicit */unsigned long long int) ((signed char) arr_11 [i_5 + 1] [i_5] [i_5 + 1] [i_5]));
                    var_20 = ((/* implicit */unsigned long long int) ((1085495368U) | (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                }
                /* LoopSeq 4 */
                for (unsigned short i_6 = 1; i_6 < 18; i_6 += 3) 
                {
                    arr_23 [i_0] [i_1] [i_4] [i_4] = ((/* implicit */unsigned char) ((unsigned short) var_1));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) var_9);
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_6] [i_6] [i_6 + 2] [i_1] [i_1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6] [(short)18] [i_6 - 1] [(short)18] [i_1])))));
                        var_23 = ((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_4]);
                    }
                    var_24 += ((/* implicit */long long int) (~(18446744073709551615ULL)));
                    arr_27 [i_0] [i_0] [i_4] [i_6 + 1] [i_6 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)219))))) ? (((/* implicit */unsigned int) arr_0 [i_6 - 1])) : ((-(3222536804U)))));
                    var_25 += ((/* implicit */short) ((arr_26 [i_0] [i_1] [i_6 + 2] [i_6]) && (((/* implicit */_Bool) (unsigned short)11048))));
                }
                for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    var_26 |= arr_30 [i_0] [i_0] [i_1] [i_1] [i_4] [i_0];
                    var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [(unsigned char)4] [i_4]))));
                    arr_32 [i_0] [i_1] [i_4] [i_8] = (short)29126;
                }
                for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (~(arr_35 [i_0] [i_1] [i_0] [i_9]))))));
                    var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2147483628))));
                    /* LoopSeq 2 */
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        var_30 = ((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_4] [i_1] [i_4] [i_9])) != (((/* implicit */int) arr_17 [i_4] [i_1] [i_1] [i_9]))));
                        var_31 *= ((/* implicit */unsigned int) ((unsigned char) arr_3 [i_0] [i_1]));
                    }
                    for (short i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) arr_39 [i_0] [i_1] [i_4] [i_9] [i_11]))));
                        var_33 ^= ((/* implicit */short) (unsigned char)56);
                    }
                }
                for (unsigned char i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    var_34 = var_6;
                    arr_46 [i_4] = ((/* implicit */_Bool) arr_29 [i_4]);
                    /* LoopSeq 2 */
                    for (int i_13 = 4; i_13 < 17; i_13 += 4) /* same iter space */
                    {
                        var_35 -= ((/* implicit */long long int) (+(arr_38 [i_13 - 1] [i_13] [i_13] [i_13] [i_13] [i_13 - 1] [i_13 - 3])));
                        arr_50 [i_13] [i_12] [i_4] [i_4] [i_4] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_0] [i_1] [i_4] [15] [i_0] [i_13 + 3])) ? (((/* implicit */int) (unsigned char)39)) : (arr_34 [i_0] [i_0] [i_4] [i_12] [i_4] [i_13 - 3])));
                        var_36 = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned char)212));
                    }
                    for (int i_14 = 4; i_14 < 17; i_14 += 4) /* same iter space */
                    {
                        arr_54 [i_4] [i_1] [i_4] [i_12] [i_14] [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) (~(var_5))));
                        arr_55 [i_4] [i_12] [7ULL] [i_12] = ((/* implicit */unsigned long long int) (-(arr_40 [i_0] [3LL] [i_4] [i_14 - 4])));
                    }
                }
                /* LoopSeq 2 */
                for (long long int i_15 = 0; i_15 < 20; i_15 += 1) 
                {
                    arr_59 [i_0] [i_1] [i_4] [i_15] [(signed char)0] [i_4] = ((/* implicit */unsigned char) arr_26 [i_0] [i_4] [(unsigned char)15] [i_15]);
                    /* LoopSeq 1 */
                    for (long long int i_16 = 0; i_16 < 20; i_16 += 2) 
                    {
                        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_0] [8U] [i_4] [i_15] [i_16] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_16]))) : (var_4)));
                        var_38 = ((/* implicit */unsigned int) arr_33 [i_0] [i_0] [i_0] [18U]);
                    }
                }
                for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 4) 
                {
                    var_39 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 8808733261709519485ULL))));
                    var_40 = ((((/* implicit */_Bool) -8866517877980897225LL)) ? (arr_42 [i_0] [i_1] [i_4] [i_1] [i_0]) : (arr_42 [i_0] [i_1] [i_4] [i_17] [i_4]));
                }
            }
            arr_65 [i_0] [i_1] = ((/* implicit */short) (~(((/* implicit */int) arr_30 [i_0] [i_1] [i_1] [i_1] [(short)16] [i_1]))));
            /* LoopSeq 1 */
            for (unsigned int i_18 = 0; i_18 < 20; i_18 += 4) 
            {
                var_41 += ((/* implicit */long long int) var_0);
                /* LoopSeq 1 */
                for (unsigned long long int i_19 = 1; i_19 < 18; i_19 += 2) 
                {
                    arr_73 [i_19] [i_1] [(unsigned char)4] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_72 [i_0] [i_0] [i_0] [i_19 + 2] [i_18] [i_19 + 2])) ? (((/* implicit */unsigned int) var_2)) : (arr_52 [i_19] [i_19] [(unsigned short)5])));
                    arr_74 [i_0] [i_19] [(unsigned short)4] [i_18] [i_0] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) -2147483619)) ? (((/* implicit */int) (short)-18739)) : (var_2)));
                    var_42 = ((/* implicit */unsigned char) max((var_42), ((unsigned char)15)));
                }
            }
            /* LoopSeq 2 */
            for (unsigned int i_20 = 0; i_20 < 20; i_20 += 2) /* same iter space */
            {
                var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_4)))))));
                var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) (signed char)-4))));
                var_45 = ((/* implicit */long long int) var_2);
            }
            for (unsigned int i_21 = 0; i_21 < 20; i_21 += 2) /* same iter space */
            {
                var_46 = ((/* implicit */int) (~(var_5)));
                var_47 = ((/* implicit */unsigned char) (signed char)(-127 - 1));
                var_48 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_25 [i_1] [i_1] [i_21] [i_1] [i_0])) / (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0] [(_Bool)1]))));
                /* LoopSeq 2 */
                for (long long int i_22 = 0; i_22 < 20; i_22 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_23 = 2; i_23 < 19; i_23 += 1) 
                    {
                        arr_87 [i_22] [i_21] [i_21] [i_21] [17ULL] [i_22] = ((/* implicit */signed char) (~(((/* implicit */int) arr_71 [(signed char)1] [i_22] [i_22] [i_23 - 1] [(short)11]))));
                        var_49 *= ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_7))))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_24 = 1; i_24 < 19; i_24 += 3) 
                    {
                        var_50 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)36)) - (((/* implicit */int) (unsigned short)6212))));
                        var_51 = ((/* implicit */unsigned short) max((var_51), (((/* implicit */unsigned short) ((unsigned long long int) arr_80 [i_22] [i_22] [i_24 - 1] [i_24])))));
                        arr_90 [i_0] [i_1] [i_22] [i_24] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
                        var_52 = ((/* implicit */short) var_9);
                    }
                }
                for (unsigned char i_25 = 4; i_25 < 16; i_25 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_26 = 0; i_26 < 20; i_26 += 4) 
                    {
                        var_53 = (~(((/* implicit */int) arr_17 [i_25] [i_1] [i_1] [i_25 + 1])));
                        var_54 *= ((/* implicit */signed char) 2147483628);
                        var_55 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) arr_51 [i_21] [i_25 - 2] [i_25])) : (((/* implicit */int) arr_51 [i_25] [i_25 - 1] [i_26]))));
                    }
                    var_56 = ((/* implicit */short) (~(var_0)));
                    var_57 = ((/* implicit */int) var_4);
                    arr_98 [(unsigned char)8] [i_1] [i_25] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_17 [i_25] [i_25 + 2] [i_25 - 3] [i_25]))));
                }
            }
        }
        for (signed char i_27 = 0; i_27 < 20; i_27 += 4) 
        {
            var_58 = ((/* implicit */unsigned short) min((var_58), (((/* implicit */unsigned short) var_6))));
            var_59 = ((/* implicit */signed char) ((long long int) ((((((/* implicit */_Bool) arr_11 [i_0] [i_27] [i_27] [(short)12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32256))))));
        }
    }
    for (short i_28 = 0; i_28 < 12; i_28 += 2) 
    {
        var_60 = (-(17827325336047648500ULL));
        var_61 = ((/* implicit */unsigned long long int) max((-1575430246), (((/* implicit */int) (!(((/* implicit */_Bool) arr_88 [i_28] [i_28] [i_28] [i_28] [(signed char)18])))))));
        var_62 |= ((/* implicit */short) var_1);
        var_63 *= arr_61 [(unsigned short)16] [i_28] [(short)17] [(unsigned short)16] [i_28] [6];
    }
    var_64 = ((/* implicit */signed char) (~(var_1)));
    var_65 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(17628017051708518677ULL)))) ? (((var_4) << (((1575430242) - (1575430223))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) var_0)) : (var_1)));
    var_66 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
}
