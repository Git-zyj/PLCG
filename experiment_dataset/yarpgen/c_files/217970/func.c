/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217970
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [(short)8] = ((/* implicit */unsigned int) (-(var_11)));
        arr_3 [i_0] = ((/* implicit */unsigned short) (+(var_6)));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_13 = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
            var_14 |= ((/* implicit */unsigned char) var_4);
            arr_6 [i_1] [i_0] [i_0] = ((/* implicit */long long int) (-(4U)));
        }
        for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)63)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
            var_16 = ((/* implicit */_Bool) var_10);
        }
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            arr_14 [i_0] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551605ULL)))))));
            var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) var_0))));
            arr_15 [(signed char)0] [(signed char)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) : ((-(23U)))));
            arr_16 [i_0] [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) var_8)) ? (var_12) : (var_2)))));
        }
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_25 [i_4] [i_5] [i_5] [i_6] = (~(-6609669386095777739LL));
                        arr_26 [i_6] [i_4] [3] [i_5] [i_4] [i_0] = ((/* implicit */unsigned char) (-(var_12)));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_8 = 1; i_8 < 8; i_8 += 4) 
            {
                for (int i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    {
                        arr_34 [i_8] = ((/* implicit */unsigned int) var_0);
                        arr_35 [i_0] [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) (+((-(-1)))));
                        var_18 -= ((/* implicit */unsigned char) (+(var_8)));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                var_19 += ((/* implicit */unsigned short) var_4);
                var_20 = (~(((/* implicit */int) var_0)));
            }
        }
        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
        {
            var_21 = ((/* implicit */_Bool) var_10);
            arr_41 [5U] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_10))));
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (+(var_2))))));
            var_23 |= ((/* implicit */unsigned short) (-((+(var_8)))));
        }
    }
    for (unsigned char i_12 = 0; i_12 < 22; i_12 += 2) 
    {
        var_24 = ((/* implicit */unsigned long long int) (~((~(4241870211U)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_13 = 3; i_13 < 21; i_13 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_14 = 1; i_14 < 20; i_14 += 4) 
            {
                arr_48 [i_12] [i_12] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (var_1)));
                arr_49 [i_14] = ((/* implicit */unsigned int) var_3);
                arr_50 [i_14] [i_14] [i_12] = ((/* implicit */int) (~((+(var_12)))));
                var_25 = ((/* implicit */short) (+((+(((/* implicit */int) var_0))))));
            }
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (var_2) : (1669893550U)));
        }
    }
    var_27 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) (-(var_12)))) ? (((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (short)7229))))) : (((/* implicit */unsigned int) (-(var_1))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_15 = 0; i_15 < 12; i_15 += 1) 
    {
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_11))));
        arr_53 [i_15] [i_15] = ((/* implicit */int) (~(var_11)));
        /* LoopNest 2 */
        for (signed char i_16 = 0; i_16 < 12; i_16 += 4) 
        {
            for (short i_17 = 0; i_17 < 12; i_17 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_63 [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_8)));
                    }
                    for (long long int i_19 = 0; i_19 < 12; i_19 += 1) 
                    {
                        var_30 = (-(((/* implicit */int) var_0)));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2908850597U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                    }
                    for (int i_20 = 0; i_20 < 12; i_20 += 4) 
                    {
                        var_32 = ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
                        arr_70 [4ULL] [i_17] [i_17] [i_16] [6U] [i_20] = ((/* implicit */_Bool) var_4);
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_21 = 0; i_21 < 12; i_21 += 3) 
                    {
                        arr_75 [(unsigned char)1] [i_16] [i_17] [8U] [i_21] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        arr_76 [i_16] [i_16] [i_16] [i_16] |= ((/* implicit */int) var_10);
                        var_33 = ((/* implicit */unsigned char) (-(4294967295U)));
                        var_34 = ((/* implicit */unsigned int) var_8);
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_22 = 0; i_22 < 12; i_22 += 1) 
                    {
                        arr_79 [6U] [i_16] [i_17] [6U] [10LL] [i_17] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)));
                        /* LoopSeq 2 */
                        for (long long int i_23 = 0; i_23 < 12; i_23 += 2) 
                        {
                            arr_83 [i_23] [i_17] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_11)))) ? ((-(((/* implicit */int) var_0)))) : (1)));
                            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58032))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255)))))));
                        }
                        for (unsigned char i_24 = 0; i_24 < 12; i_24 += 4) 
                        {
                            arr_87 [i_17] [i_22] [i_17] [i_17] [i_16] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (var_8) : (var_8)));
                            arr_88 [i_24] [i_17] [i_17] [i_17] [i_15] = ((/* implicit */_Bool) (-(((/* implicit */int) var_10))));
                            var_36 += ((/* implicit */unsigned short) var_12);
                        }
                        arr_89 [i_17] [i_16] [i_16] [(_Bool)1] [(unsigned short)10] [2U] = (+(var_2));
                        var_37 = ((/* implicit */unsigned int) max((var_37), (var_2)));
                    }
                    for (unsigned int i_25 = 2; i_25 < 11; i_25 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) var_11))));
                        var_39 = ((/* implicit */unsigned char) 2404336567U);
                    }
                    var_40 = ((/* implicit */_Bool) (+(var_11)));
                    /* LoopSeq 3 */
                    for (int i_26 = 0; i_26 < 12; i_26 += 4) 
                    {
                        var_41 = ((((/* implicit */_Bool) 18145767369175542015ULL)) ? ((+(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                        arr_94 [i_17] [i_17] = ((/* implicit */unsigned char) (+(var_12)));
                    }
                    for (unsigned int i_27 = 0; i_27 < 12; i_27 += 2) 
                    {
                        var_42 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? ((-(var_1))) : ((+(((/* implicit */int) var_0))))));
                        var_43 = (-(var_1));
                    }
                    for (unsigned int i_28 = 0; i_28 < 12; i_28 += 3) 
                    {
                        var_44 *= ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4074337166U));
                        arr_101 [i_17] [i_17] [i_15] = ((/* implicit */long long int) (!((_Bool)1)));
                        /* LoopSeq 4 */
                        for (signed char i_29 = 2; i_29 < 10; i_29 += 2) 
                        {
                            arr_105 [i_16] [i_28] [i_17] [i_28] [i_17] [i_16] [i_15] = ((/* implicit */unsigned short) var_9);
                            var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_4)));
                            arr_106 [i_29] [i_17] [i_16] [i_16] [i_17] [i_15] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) -47525783)) : (4241870211U)))));
                        }
                        for (unsigned char i_30 = 1; i_30 < 10; i_30 += 3) 
                        {
                            var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) var_2))));
                            arr_109 [(_Bool)1] [(_Bool)1] [i_28] [i_16] [i_17] [6] [i_15] &= ((/* implicit */unsigned long long int) (+((+(2147483647)))));
                            arr_110 [i_17] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_12));
                        }
                        for (int i_31 = 2; i_31 < 11; i_31 += 3) 
                        {
                            arr_115 [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_2)))) ? ((~(((/* implicit */int) var_9)))) : (var_1)));
                            arr_116 [i_17] [i_16] [i_16] [i_17] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)16817)) : ((-2147483647 - 1)))))));
                            var_47 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)99))))));
                        }
                        for (long long int i_32 = 0; i_32 < 12; i_32 += 4) 
                        {
                            arr_119 [i_17] = ((/* implicit */_Bool) var_11);
                            var_48 = ((/* implicit */_Bool) (+(var_6)));
                        }
                    }
                }
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
        {
            arr_122 [i_15] [i_33] [i_33] = ((/* implicit */unsigned short) (-2147483647 - 1));
            arr_123 [i_15] [i_33] = ((/* implicit */unsigned int) (-(0)));
            var_49 = (!(((/* implicit */_Bool) var_10)));
        }
        for (unsigned int i_34 = 0; i_34 < 12; i_34 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_35 = 3; i_35 < 10; i_35 += 1) 
            {
                for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                {
                    {
                        var_50 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))));
                    }
                } 
            } 
            var_52 = ((/* implicit */long long int) var_3);
            var_53 = ((/* implicit */signed char) max((var_53), (((/* implicit */signed char) var_12))));
        }
        for (int i_37 = 0; i_37 < 12; i_37 += 1) 
        {
            var_54 = ((/* implicit */unsigned long long int) max((var_54), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 23U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53626))))))));
            var_55 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) var_10)))));
            /* LoopSeq 3 */
            for (signed char i_38 = 4; i_38 < 9; i_38 += 4) 
            {
                var_56 = ((/* implicit */int) var_7);
                var_57 ^= ((/* implicit */unsigned char) (_Bool)1);
            }
            for (unsigned int i_39 = 0; i_39 < 12; i_39 += 1) 
            {
                var_58 = ((/* implicit */_Bool) var_6);
                var_59 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)48))));
                var_60 = ((/* implicit */_Bool) var_6);
            }
            for (unsigned char i_40 = 0; i_40 < 12; i_40 += 3) 
            {
                var_61 = var_9;
                arr_143 [0] [0] [i_40] |= 1299826530U;
                /* LoopNest 2 */
                for (unsigned long long int i_41 = 1; i_41 < 9; i_41 += 2) 
                {
                    for (unsigned short i_42 = 0; i_42 < 12; i_42 += 3) 
                    {
                        {
                            arr_150 [i_15] [i_15] [i_40] [i_40] = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))));
                            var_62 += ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)178))) : (var_12));
                            var_63 += ((/* implicit */short) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)3))))));
                        }
                    } 
                } 
                arr_151 [i_15] [i_15] [i_40] [i_40] = ((/* implicit */_Bool) (~(var_4)));
            }
        }
    }
}
