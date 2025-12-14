/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220889
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_7 [i_0] [i_2 - 3] [i_2] [i_0])))) ? ((~(((/* implicit */int) arr_7 [i_0] [i_2 + 1] [i_2] [i_0])))) : (((/* implicit */int) var_9))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (~((((_Bool)0) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_2 - 3] [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2]))))));
                    arr_10 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) (~(var_10))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            arr_13 [(_Bool)1] [(signed char)4] [i_0] = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_3 [i_0]))))));
            /* LoopSeq 4 */
            for (short i_4 = 3; i_4 < 10; i_4 += 4) 
            {
                var_14 = (~((~(((/* implicit */int) arr_14 [i_4 - 1] [i_4 - 1] [i_4 - 3] [i_4])))));
                /* LoopSeq 1 */
                for (signed char i_5 = 1; i_5 < 11; i_5 += 2) 
                {
                    var_15 |= (_Bool)1;
                    /* LoopSeq 1 */
                    for (int i_6 = 4; i_6 < 9; i_6 += 3) 
                    {
                        arr_23 [i_6 + 3] [i_5 + 1] [i_4 - 1] [i_3] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_8 [i_5 + 1] [i_3])) != (var_10))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_8 [i_5 - 1] [i_3])), (arr_4 [i_3] [i_5 + 1]))))) : (min((((/* implicit */unsigned long long int) var_2)), (18446744073709551594ULL)))));
                        arr_24 [(signed char)5] [i_3] [6] [(signed char)5] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_0]))))) ? (((/* implicit */int) ((((long long int) var_12)) != (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6 - 1] [(signed char)2] [i_5 - 1] [i_4 - 2])))))) : (((/* implicit */int) var_11))));
                        var_16 *= ((/* implicit */int) (_Bool)1);
                    }
                    var_17 = ((/* implicit */signed char) max(((~(max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_12)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)48905)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_2 [i_4])))))))));
                    arr_25 [i_0] [i_0] [i_0] [11LL] [i_0] = ((/* implicit */unsigned char) 11270138156537956134ULL);
                }
            }
            for (unsigned short i_7 = 3; i_7 < 8; i_7 += 2) 
            {
                var_18 = ((/* implicit */unsigned char) arr_0 [i_0] [i_3]);
                arr_28 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_27 [i_7 + 1] [i_7 - 3] [i_7] [i_7 - 2]))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)0)), ((short)-32767)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_7 + 4] [i_7 + 2] [i_7 + 3] [i_7 + 4])))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    var_19 = (((((-(arr_0 [i_0] [i_3]))) + (((/* implicit */int) var_2)))) + (((/* implicit */int) arr_16 [i_0] [i_3] [i_8])));
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_7 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_7 - 1] [i_8]))) : (min((((/* implicit */unsigned int) var_4)), (var_0))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned char) arr_16 [i_0] [i_3] [i_0])), (var_7)))))))))));
                    var_21 = ((/* implicit */signed char) (~(((/* implicit */int) min(((unsigned char)137), (((/* implicit */unsigned char) (_Bool)0)))))));
                }
                /* LoopSeq 2 */
                for (int i_9 = 1; i_9 < 8; i_9 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        var_22 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(var_12)))) + (var_1)));
                        var_23 -= ((/* implicit */signed char) var_4);
                        arr_35 [i_9] [i_9 + 2] [i_7] [i_9] = ((unsigned short) arr_6 [i_7 - 2] [i_7 + 4] [i_7 - 3] [i_7 - 1]);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_38 [i_9] [i_9] [i_9] [i_3] [i_3] [i_9] = ((/* implicit */_Bool) arr_29 [i_7] [i_3]);
                        var_24 = var_10;
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) arr_12 [i_3] [i_3] [i_12]))));
                        var_26 = ((((/* implicit */int) (unsigned short)22139)) & (((int) arr_6 [i_0] [i_0] [i_0] [i_0])));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 1; i_13 < 11; i_13 += 2) 
                    {
                        var_27 = ((/* implicit */_Bool) arr_14 [i_0] [i_3] [i_7] [i_9 + 4]);
                        arr_44 [i_0] [i_3] [i_9] [i_9] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 755362809034512480LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65395))));
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) var_5))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 1; i_14 < 9; i_14 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((min((arr_41 [i_9 + 2] [(signed char)6] [i_9 + 2] [i_9 + 1] [(unsigned char)2]), (((/* implicit */unsigned long long int) var_9)))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_7 - 2] [i_0] [i_14 + 3])) ? (var_4) : (((/* implicit */int) (_Bool)1)))))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_0 [2LL] [i_7 - 2])))) ? (arr_32 [i_9] [i_9 - 1] [i_9] [i_9] [i_9] [i_9]) : (var_5)))) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(-5)))) ? (min((var_10), (((/* implicit */int) (short)-32743)))) : (((/* implicit */int) (_Bool)1)))))));
                    }
                }
                for (short i_15 = 3; i_15 < 10; i_15 += 1) 
                {
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_42 [i_15] [i_15 - 3] [i_15] [i_15 - 1] [i_7 + 3] [i_7 + 2])))))))));
                    /* LoopSeq 1 */
                    for (int i_16 = 1; i_16 < 10; i_16 += 3) 
                    {
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (((~(var_0))) << (((((long long int) arr_42 [i_0] [i_0] [i_0] [i_0] [(unsigned short)9] [i_0])) + (39LL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)28702)) << (((8408645029616467622LL) - (8408645029616467609LL)))))) : (var_0)));
                        arr_53 [1U] [i_3] [1U] [i_3] [5] = (~(((/* implicit */int) var_3)));
                    }
                    var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (~((~(var_5))))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 12; i_17 += 4) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */int) (_Bool)1);
                            var_35 -= ((/* implicit */unsigned int) arr_42 [i_0] [i_3] [i_3] [i_17] [i_7 + 1] [i_17]);
                        }
                    } 
                } 
            }
            for (int i_19 = 0; i_19 < 12; i_19 += 4) 
            {
                var_36 = ((/* implicit */signed char) ((((/* implicit */int) max((arr_3 [i_0]), (((/* implicit */unsigned short) var_3))))) % (min((arr_32 [i_0] [i_0] [i_0] [(short)6] [i_3] [i_19]), (min((arr_47 [i_0] [i_0] [i_0] [i_0]), (var_12)))))));
                /* LoopSeq 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    var_37 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_20 [11])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((int) var_9))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1))))));
                    var_38 = ((/* implicit */_Bool) arr_58 [i_0] [i_3] [i_19] [i_20]);
                }
                for (unsigned short i_21 = 1; i_21 < 11; i_21 += 3) 
                {
                    arr_66 [i_3] [i_21] [i_21] = ((/* implicit */unsigned short) ((unsigned char) ((arr_1 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32766))))));
                    arr_67 [i_0] [i_0] [i_21] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_0] [i_3] [i_19] [i_21 - 1])) ? (((/* implicit */int) var_7)) : (var_4)))) ? (((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)63))))));
                }
                arr_68 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? ((~(((arr_12 [i_0] [(unsigned short)3] [i_19]) ? (((/* implicit */int) arr_49 [i_0] [i_0] [i_19] [i_3] [i_3])) : (var_10))))) : (((/* implicit */int) (short)-30748))));
            }
            for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
            {
                arr_72 [i_3] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_48 [i_0] [i_3])) + (((unsigned long long int) arr_48 [i_0] [i_3]))));
                var_39 = ((/* implicit */short) (~(((/* implicit */int) var_3))));
                arr_73 [(short)1] = ((/* implicit */unsigned char) -691705344);
            }
        }
        arr_74 [i_0] = ((/* implicit */unsigned int) arr_34 [0LL] [i_0] [i_0] [i_0] [i_0] [2] [i_0]);
        var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((((/* implicit */_Bool) (short)-23198)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (((unsigned int) (unsigned char)1)))))));
        var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) var_3))));
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 10; i_23 += 2) 
    {
        arr_77 [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_23]))) ^ (var_0)))) ? (((int) arr_76 [i_23])) : ((~(((/* implicit */int) (unsigned short)28709))))));
        var_42 = ((/* implicit */long long int) -1670840898);
        var_43 = ((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36826))) & (var_1)))));
        arr_78 [i_23] [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2638872642U)) ? (612831713) : ((~(((/* implicit */int) (unsigned char)110))))));
    }
    var_44 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((3318088392U) + (((/* implicit */unsigned int) var_12))))), (var_1)));
    /* LoopNest 2 */
    for (unsigned short i_24 = 0; i_24 < 24; i_24 += 2) 
    {
        for (short i_25 = 0; i_25 < 24; i_25 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_26 = 1; i_26 < 21; i_26 += 2) 
                {
                    for (long long int i_27 = 0; i_27 < 24; i_27 += 4) 
                    {
                        {
                            var_45 = ((unsigned short) (~(((/* implicit */int) (unsigned short)28676))));
                            var_46 ^= ((/* implicit */unsigned short) ((((arr_82 [i_24] [i_25]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28700))))) || (var_9)));
                            var_47 = ((/* implicit */unsigned short) ((max((var_5), (arr_89 [i_26 - 1] [i_26 + 2] [i_26 + 1] [i_26 + 3] [i_26 + 1]))) + (((/* implicit */int) arr_81 [i_25] [i_25]))));
                        }
                    } 
                } 
                arr_90 [(unsigned char)0] [i_25] [i_25] = arr_83 [i_24];
            }
        } 
    } 
}
