/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39154
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
    var_18 = ((/* implicit */unsigned char) min((((((/* implicit */int) var_7)) - (((/* implicit */int) var_6)))), (((/* implicit */int) var_10))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) var_0);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((1190571231) != (((/* implicit */int) arr_7 [i_1])))))) * (((unsigned long long int) 3595891142U))));
                        var_20 += ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((-1190571223) - (((/* implicit */int) (unsigned char)117))))), (arr_5 [i_0 + 2] [i_1] [i_3])));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_21 &= ((/* implicit */unsigned char) 1521801471U);
                        var_22 = min((((/* implicit */unsigned int) ((short) var_13))), (max((2773165824U), (arr_8 [i_0 - 1] [i_0 + 1]))));
                        arr_17 [i_4] = ((/* implicit */short) (unsigned char)179);
                    }
                    arr_18 [i_0 - 2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0 + 1] [i_0 - 4] [i_0 - 1]))))) ? (((/* implicit */int) ((short) arr_0 [i_0 - 3]))) : (max((495970233), (((/* implicit */int) (short)-1))))));
                    var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_9 [i_2] [i_1] [i_0]))));
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            arr_24 [i_5] [i_6] [i_6] = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) (~(-1190571225)))), (arr_21 [i_5 + 1])))));
            var_24 = ((/* implicit */int) arr_22 [i_5] [i_6]);
            var_25 = ((/* implicit */signed char) ((((/* implicit */int) (short)-25498)) % (((/* implicit */int) (short)13434))));
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((-2112004107) * (((/* implicit */int) arr_4 [i_5 - 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_5 + 1])) <= (((/* implicit */int) arr_4 [i_5 + 2]))))) : (((/* implicit */int) arr_4 [i_5 - 1])))))));
        }
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((long long int) (_Bool)1)))));
            arr_27 [i_5] = ((((((/* implicit */int) arr_13 [i_5 + 2] [i_5 - 1])) % (((/* implicit */int) (short)(-32767 - 1))))) - (((((/* implicit */int) arr_13 [i_5 - 1] [i_7])) - (((/* implicit */int) arr_13 [i_5 - 1] [i_7])))));
            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((arr_12 [i_5 + 2] [i_5 + 2] [i_5 + 1]), (arr_12 [i_5 + 2] [i_5] [i_5 - 1])))), (min((((/* implicit */unsigned long long int) arr_14 [i_5] [i_5] [i_5])), (8705941745574907548ULL))))))));
        }
        var_29 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_12 [i_5 + 2] [i_5] [i_5]), (arr_12 [i_5 - 1] [i_5] [i_5 + 2]))))) | ((~(8705941745574907548ULL)))));
        /* LoopSeq 3 */
        for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_30 &= ((/* implicit */_Bool) ((unsigned char) ((arr_21 [i_5 - 1]) ^ (arr_33 [i_5 + 1] [i_8] [i_9] [i_10] [i_10] [i_5 - 1]))));
                        arr_34 [i_5 + 2] [i_8] [i_5 + 2] [i_10] = ((/* implicit */signed char) var_3);
                        var_31 = ((/* implicit */long long int) arr_26 [i_5 + 2] [i_8] [i_9]);
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((int) min((((/* implicit */unsigned int) var_4)), (arr_33 [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5])))))));
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned short) arr_12 [i_5] [i_8] [i_8]);
            /* LoopNest 3 */
            for (short i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                for (long long int i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    for (int i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        {
                            arr_42 [i_13] [i_12] [i_11] [i_8] [i_5 - 1] = ((/* implicit */_Bool) max(((short)(-32767 - 1)), (((/* implicit */short) var_7))));
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_11 [i_5 + 2] [i_5 + 2] [i_5] [i_5] [i_5 + 1] [i_12]), (((/* implicit */unsigned char) (_Bool)1))))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5] [i_5 + 1] [i_5 + 1] [i_12])))))));
                        }
                    } 
                } 
            } 
            arr_43 [i_8] [i_5 - 1] = ((/* implicit */int) ((long long int) (unsigned char)168));
        }
        for (long long int i_14 = 0; i_14 < 11; i_14 += 2) 
        {
            var_35 = ((/* implicit */unsigned int) max((((-1LL) - (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) max((((/* implicit */short) arr_10 [i_5] [i_14] [i_5 - 1] [i_14] [i_5 + 2])), (var_16))))));
            arr_48 [i_5] [i_5 - 1] [i_5 + 2] = ((/* implicit */long long int) var_16);
            var_36 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_14] [i_14] [i_14] [i_5 + 2] [i_5 + 2] [i_5 + 2]))) != (268435455U)))), (((((/* implicit */int) var_3)) / (((/* implicit */int) arr_7 [i_5]))))));
        }
        for (short i_15 = 0; i_15 < 11; i_15 += 2) 
        {
            var_37 = ((/* implicit */long long int) max((((arr_50 [i_5 + 2]) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) min((max((arr_52 [i_5 + 1] [i_15] [i_5 + 1]), (((/* implicit */short) (signed char)1)))), (min((var_11), (var_15))))))));
            var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) var_3))));
            /* LoopSeq 4 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_39 = ((/* implicit */short) max((var_39), (arr_14 [i_5] [i_15] [i_16])));
                var_40 &= ((((/* implicit */_Bool) ((short) (unsigned short)14543))) || (((/* implicit */_Bool) ((unsigned int) var_8))));
            }
            for (unsigned int i_17 = 4; i_17 < 8; i_17 += 2) 
            {
                var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4227716444U)) ? (4974177733809577971ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25491)))));
                var_42 = ((/* implicit */unsigned short) ((signed char) 3192420765U));
            }
            for (unsigned int i_18 = 0; i_18 < 11; i_18 += 2) 
            {
                var_43 = ((/* implicit */unsigned int) var_7);
                arr_59 [i_5 - 1] [i_15] [i_15] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_46 [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) arr_28 [i_5 - 1] [i_5 + 2] [i_5 - 1])) : (((/* implicit */int) var_16)))), (((((/* implicit */int) arr_46 [i_5 + 2] [i_18])) - (((/* implicit */int) (short)-7828))))));
            }
            for (short i_19 = 0; i_19 < 11; i_19 += 2) 
            {
                var_44 -= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (unsigned short)32412)) ? (574395538U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5 + 1]))))));
                var_45 = ((/* implicit */short) arr_36 [i_5] [i_15] [i_19] [i_5]);
            }
        }
        var_46 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-668))));
    }
    for (short i_20 = 2; i_20 < 9; i_20 += 2) 
    {
        arr_66 [i_20] [i_20 - 2] &= ((/* implicit */unsigned long long int) arr_2 [i_20 - 1] [i_20 - 2]);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_21 = 1; i_21 < 9; i_21 += 2) 
        {
            var_47 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) - (var_2)));
            /* LoopNest 2 */
            for (unsigned char i_22 = 0; i_22 < 12; i_22 += 4) 
            {
                for (unsigned int i_23 = 0; i_23 < 12; i_23 += 4) 
                {
                    {
                        arr_74 [i_21 + 2] [i_21 - 1] [i_22] [i_21] = ((/* implicit */unsigned short) ((490865277U) * (((/* implicit */unsigned int) var_5))));
                        var_48 = ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) | (18275568308704687482ULL))));
                        arr_75 [i_21] [i_23] [i_22] [i_21 + 2] [i_21] = ((/* implicit */short) 490865278U);
                        var_49 = arr_65 [i_23];
                        arr_76 [i_20] [i_21] [i_23] [i_23] [i_20] &= ((/* implicit */unsigned char) ((unsigned long long int) (short)-17911));
                    }
                } 
            } 
            arr_77 [i_20] [i_20 + 1] [i_21] = ((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_21 + 2] [i_20 - 1] [i_20 - 1]))));
        }
        /* vectorizable */
        for (unsigned long long int i_24 = 2; i_24 < 10; i_24 += 4) 
        {
            var_50 = ((/* implicit */unsigned long long int) var_15);
            arr_81 [i_20] [i_24 + 2] [i_24] = arr_16 [i_20] [i_20] [i_24] [i_24] [i_24 + 2];
        }
        for (int i_25 = 0; i_25 < 12; i_25 += 4) 
        {
            var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) max((var_5), (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_80 [i_20] [i_20 - 1]))))))))));
            var_52 = arr_73 [i_20] [i_20 + 2] [i_20] [i_20 - 1] [i_25];
        }
        /* vectorizable */
        for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
        {
            var_53 *= ((/* implicit */short) arr_2 [i_20] [i_26 + 1]);
            var_54 = ((/* implicit */short) ((((/* implicit */_Bool) 713695390)) ? (((/* implicit */int) ((short) (unsigned short)62241))) : (((((/* implicit */int) var_15)) - (((/* implicit */int) (unsigned char)148))))));
        }
        var_55 = ((/* implicit */unsigned char) var_16);
        var_56 = ((/* implicit */short) max((var_56), (((/* implicit */short) (~((-2147483647 - 1)))))));
    }
    var_57 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_9)), (max((4294967295U), (((/* implicit */unsigned int) var_15))))));
}
