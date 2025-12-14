/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239718
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
    for (int i_0 = 2; i_0 < 12; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                for (unsigned short i_3 = 1; i_3 < 12; i_3 += 4) 
                {
                    for (unsigned char i_4 = 4; i_4 < 12; i_4 += 3) 
                    {
                        {
                            var_10 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) (short)-23161)) : (((/* implicit */int) (short)23161))));
                            var_11 *= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (short)-4064)) ? (((/* implicit */int) ((((/* implicit */int) (short)-23154)) == (((/* implicit */int) var_5))))) : (((/* implicit */int) var_3))))));
                            arr_12 [i_0 + 2] [i_1] [i_0] [i_2] [i_3] [i_4] |= ((/* implicit */signed char) ((min(((~(((/* implicit */int) (short)-23161)))), (((/* implicit */int) var_9)))) <= (((/* implicit */int) var_0))));
                        }
                    } 
                } 
            } 
            arr_13 [4U] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((-12) < (((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) var_8)) : (min((min((((/* implicit */unsigned long long int) arr_8 [(short)0] [i_1 - 1] [i_1] [(signed char)1] [i_1])), (var_6))), (((/* implicit */unsigned long long int) var_0))))));
            var_12 += (!(((/* implicit */_Bool) var_1)));
        }
        for (short i_5 = 4; i_5 < 10; i_5 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                var_13 += ((/* implicit */_Bool) (+(((/* implicit */int) (short)8128))));
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    arr_22 [i_7] [13LL] [i_6] [i_5] [i_5] [i_0] = ((/* implicit */long long int) ((arr_2 [i_0 + 1]) ? (((unsigned int) (-(arr_15 [i_7])))) : (min((((/* implicit */unsigned int) var_1)), (var_8)))));
                    arr_23 [i_0 + 2] [i_6] [i_6] = ((/* implicit */short) var_3);
                    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_6 [i_5 - 4]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 2]))))))));
                    arr_24 [i_5 - 3] [i_7] &= ((/* implicit */short) ((max(((((_Bool)1) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)96)))), (((/* implicit */int) (_Bool)1)))) >> ((((+(var_8))) - (3633216892U)))));
                    var_15 = ((/* implicit */long long int) ((var_8) << (((/* implicit */int) var_9))));
                }
            }
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((unsigned int) (+(((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_0)))) < (((unsigned int) var_9))))))));
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((_Bool) ((unsigned short) 7864320ULL))))));
        }
        for (short i_8 = 4; i_8 < 10; i_8 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_9 = 2; i_9 < 12; i_9 += 1) 
            {
                var_18 = ((/* implicit */signed char) arr_28 [i_0] [i_8 - 4] [(unsigned short)0] [i_9 + 2]);
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (short)-23162))));
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    var_20 = ((/* implicit */short) var_6);
                    var_21 = ((/* implicit */short) arr_1 [i_0]);
                }
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) var_5);
                            var_23 = ((_Bool) (+(((/* implicit */int) var_4))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) (signed char)-28);
            }
            /* vectorizable */
            for (unsigned int i_13 = 0; i_13 < 14; i_13 += 4) 
            {
                arr_39 [i_0 + 1] [i_8] [i_13] [i_8] = ((/* implicit */unsigned char) (!(var_9)));
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((short) ((_Bool) (short)-23161))))));
            }
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)28))) : (18446744073709551615ULL)))) ? (((/* implicit */int) arr_17 [i_8 + 1] [i_0 + 1] [i_0 - 2] [i_8 - 3])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) <= (arr_15 [i_8])))))), ((((~(((/* implicit */int) var_3)))) % (((((/* implicit */_Bool) (short)-24984)) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) (short)-23164)))))))))));
            /* LoopSeq 4 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 14; i_15 += 3) 
                {
                    for (long long int i_16 = 0; i_16 < 14; i_16 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) var_3);
                            var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)23148)) * (((/* implicit */int) arr_27 [i_0]))))) ? (((arr_38 [(signed char)4] [i_8] [i_14]) | (((/* implicit */unsigned long long int) arr_47 [i_0 + 2] [i_8] [i_14] [i_15] [i_16])))) : ((~(var_6)))))) ? (min((((int) arr_14 [i_0] [(signed char)5] [(signed char)5])), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (var_2)))))) : (((/* implicit */int) arr_33 [i_0]))));
                            var_29 = ((/* implicit */unsigned char) -3350048920103922976LL);
                        }
                    } 
                } 
                var_30 = ((/* implicit */_Bool) arr_20 [i_0 + 1] [i_0 - 2]);
                var_31 ^= ((/* implicit */long long int) arr_35 [11U] [i_14] [i_14]);
            }
            for (unsigned long long int i_17 = 3; i_17 < 13; i_17 += 4) 
            {
                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (max((arr_44 [i_17 + 1] [i_17 + 1] [i_17 - 1] [i_17 + 1] [i_17 - 1] [i_17 + 1]), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_32 [i_17 - 2] [i_8] [i_17] [i_17 - 1] [i_17] [i_17 - 3]))));
                var_33 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(var_8)))), (var_2)))) - (arr_38 [i_0] [i_0] [i_0])));
                arr_54 [i_0] [i_8] [i_17] [i_0 - 2] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((arr_2 [i_8]) ? (arr_46 [i_0] [i_8 + 4] [i_17] [i_8] [i_8] [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_17 - 1] [0LL] [i_17 - 1] [i_8 - 2] [12ULL]))))) : (((unsigned int) var_9))))), ((~(var_2)))));
                var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (-((((_Bool)1) ? (8388607U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48)))))))) ? (((/* implicit */unsigned long long int) ((((arr_40 [i_0] [i_8] [i_17 - 2]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_0] [i_8] [i_17]))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_50 [i_0 - 1] [i_8 - 1] [i_17]))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_0 - 1] [i_0] [i_0 - 1] [i_8] [i_8] [i_17 + 1])) ? (var_2) : (((/* implicit */long long int) var_7))))) - (max((var_6), (((/* implicit */unsigned long long int) var_5))))))));
            }
            for (unsigned int i_18 = 0; i_18 < 14; i_18 += 1) /* same iter space */
            {
                var_35 = ((/* implicit */_Bool) arr_1 [i_8]);
                arr_57 [i_0] = ((/* implicit */unsigned char) (unsigned short)53924);
                arr_58 [i_0] [i_8 + 2] [13ULL] [i_18] = ((/* implicit */unsigned long long int) var_4);
                var_36 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_40 [i_0] [i_8 + 2] [i_0 + 1])) ? (((long long int) var_3)) : (((/* implicit */long long int) arr_10 [i_0] [i_8] [i_18] [i_8] [i_0 + 1] [i_18]))))));
            }
            for (unsigned int i_19 = 0; i_19 < 14; i_19 += 1) /* same iter space */
            {
                arr_61 [(unsigned short)7] [i_8] = ((/* implicit */unsigned short) arr_2 [i_8]);
                var_37 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)16))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)23161))) : (((((/* implicit */_Bool) arr_21 [i_19] [i_8] [i_8 - 3] [i_0 - 1])) ? (var_2) : (((/* implicit */long long int) arr_30 [i_0] [i_8] [i_8 - 2] [i_0]))))))));
                /* LoopNest 2 */
                for (signed char i_20 = 0; i_20 < 14; i_20 += 1) 
                {
                    for (short i_21 = 0; i_21 < 14; i_21 += 3) 
                    {
                        {
                            arr_66 [i_0 - 1] [(_Bool)1] [i_20] [i_0 - 1] = ((/* implicit */unsigned int) ((((unsigned long long int) ((unsigned long long int) (unsigned char)53))) >> (((arr_30 [i_0] [i_19] [i_8] [i_0]) + (922697966)))));
                            arr_67 [i_21] [5U] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_45 [i_20] [i_21])) / (((/* implicit */int) arr_52 [i_8 + 2]))))));
                            var_38 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)20))));
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 1 */
        for (unsigned short i_22 = 0; i_22 < 14; i_22 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_23 = 0; i_23 < 14; i_23 += 2) 
            {
                arr_73 [i_0 + 1] [i_22] = ((/* implicit */unsigned char) (-(min((((/* implicit */long long int) ((unsigned int) arr_50 [i_0] [i_22] [i_23]))), (((((/* implicit */long long int) arr_55 [i_0 - 1] [i_22] [i_23])) / (8651580925068623028LL)))))));
                var_39 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_1)) - (132))))))));
            }
            var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_45 [i_0] [i_22]))))) ? (((/* implicit */unsigned long long int) ((-1) + (((/* implicit */int) (unsigned char)248))))) : (var_6)))) ? (arr_49 [i_22] [i_22] [i_22] [i_22] [i_22] [(unsigned char)9]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 282137141291249875ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (8589934591ULL)))) ? (max((var_7), (((/* implicit */int) arr_52 [i_0])))) : ((+(((/* implicit */int) (short)384))))))));
        }
        var_41 ^= ((/* implicit */long long int) arr_18 [i_0] [i_0 + 1] [i_0 + 1]);
        /* LoopSeq 1 */
        for (short i_24 = 1; i_24 < 12; i_24 += 2) 
        {
            var_42 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-26416))))) ? (((((/* implicit */_Bool) min((var_7), (((/* implicit */int) (short)-23140))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (var_7))))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
            var_43 = ((unsigned char) (!(var_4)));
            arr_76 [i_24 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)16)) ? (((unsigned long long int) 150140641)) : (((/* implicit */unsigned long long int) max((arr_48 [i_0 - 1] [i_24 - 1] [i_24] [i_24 - 1] [i_24 - 1]), (((/* implicit */unsigned int) ((_Bool) var_0))))))));
        }
    }
    for (int i_25 = 2; i_25 < 12; i_25 += 4) /* same iter space */
    {
        var_44 += ((/* implicit */signed char) (((!(arr_4 [i_25 + 2]))) ? (((/* implicit */int) min((var_9), (arr_4 [i_25 - 1])))) : ((-(((/* implicit */int) var_5))))));
        arr_81 [(unsigned char)3] [i_25] = ((((/* implicit */int) max((arr_69 [i_25 + 2]), (arr_69 [i_25 - 1])))) - ((-(((/* implicit */int) (signed char)-1)))));
        arr_82 [i_25] = ((/* implicit */signed char) min((-393277721), (((/* implicit */int) (!(((/* implicit */_Bool) 3819053338U)))))));
    }
    var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) var_3))));
    var_46 += ((/* implicit */unsigned int) (+((+(((unsigned long long int) var_5))))));
}
