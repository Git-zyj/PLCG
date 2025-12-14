/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42403
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
    var_14 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) 965091806U)))))))));
    var_15 = ((/* implicit */unsigned int) (+((+((~(((/* implicit */int) var_11))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) (-((-(((/* implicit */int) var_7))))));
        var_17 |= ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-53))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
            {
                arr_8 [i_0] [i_1] [i_2] |= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 + 3] [i_1] [i_0 + 3] [i_2])))))));
                arr_9 [i_2] [i_1] [(_Bool)1] = ((/* implicit */_Bool) (-((+(((/* implicit */int) var_4))))));
                arr_10 [i_0] [i_0] = ((/* implicit */short) (-((+(((/* implicit */int) arr_2 [i_0] [i_2]))))));
                var_18 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0 + 2] [i_1] [i_1] [i_2])))))));
                arr_11 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (short)32218))));
            }
            for (long long int i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
            {
                arr_15 [i_0] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))));
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (-(((/* implicit */int) (!(arr_5 [i_1])))))))));
                arr_16 [i_1] = ((/* implicit */short) (+((+(((/* implicit */int) arr_4 [i_0] [i_3]))))));
                arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) (~((~(-2073914695)))));
            }
            for (int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                arr_20 [i_0] [5U] [(short)5] [(short)5] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_8))))));
                arr_21 [i_0] [(_Bool)1] [i_4] [(short)9] = (~((+(var_0))));
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    for (long long int i_6 = 4; i_6 < 10; i_6 += 3) 
                    {
                        {
                            arr_29 [i_0] [i_0] [i_4] [i_5] [i_6] = ((/* implicit */short) (-((~(((/* implicit */int) arr_4 [i_1] [i_1]))))));
                            var_20 = ((/* implicit */long long int) (+((-(((/* implicit */int) (short)-32767))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) (-((-(((/* implicit */int) (unsigned char)227))))));
                arr_30 [2LL] [i_1] [i_1] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)32752)))))));
            }
            /* LoopNest 2 */
            for (unsigned char i_7 = 3; i_7 < 11; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_9 = 4; i_9 < 11; i_9 += 1) 
                        {
                            var_22 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_10))))));
                            var_23 = (~((-(((/* implicit */int) (short)32741)))));
                            var_24 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_3))))));
                            arr_37 [i_7] [i_9] [i_9] [(signed char)10] [i_9] [i_9] [(signed char)3] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_4))))));
                        }
                        for (unsigned char i_10 = 1; i_10 < 10; i_10 += 2) 
                        {
                            var_25 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_4 [i_0] [i_1]))))));
                            arr_41 [i_0] [i_7] [i_7 - 1] [i_8] [(signed char)6] = ((/* implicit */long long int) (~((~(((/* implicit */int) (short)26892))))));
                            var_26 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_9))))));
                            arr_42 [i_10] [i_7] [i_8] [i_8] [i_7] [i_7] [i_0 - 3] = ((/* implicit */long long int) (~((~(var_5)))));
                            var_27 = ((/* implicit */unsigned char) (-((~(var_0)))));
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 11; i_11 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_8])))))))));
                            var_29 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_39 [i_0 + 2] [i_1] [i_8] [i_11 + 1]))))));
                        }
                        var_30 = ((/* implicit */_Bool) (+((~(((/* implicit */int) (short)-32747))))));
                        /* LoopSeq 3 */
                        for (short i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned int) (~((-(1950100623)))));
                            arr_48 [i_0] [i_1] [i_7 + 1] [i_8] [i_1] &= ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-32747))));
                            arr_49 [i_7] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) 3402213274626348639LL))));
                            arr_50 [i_7] [i_8] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_7))))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 12; i_13 += 2) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_53 [i_7] [i_7] [i_13]))))));
                            var_33 = ((/* implicit */signed char) (~((+(arr_1 [i_8])))));
                            var_34 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_12))))));
                        }
                        for (unsigned char i_14 = 0; i_14 < 12; i_14 += 2) /* same iter space */
                        {
                            var_35 = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_47 [i_0] [i_1] [i_1] [i_1] [(signed char)7] [i_14]))))));
                            var_36 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_2 [i_8] [i_1]))))));
                            arr_57 [i_0] [i_1] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (!((!(arr_3 [i_14] [(unsigned char)6] [i_14])))));
                            arr_58 [i_0 + 1] [i_0 + 1] [i_7] [i_8] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(1056964608U))))));
                        }
                        arr_59 [i_0] [i_1] [i_7] [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_16 = 4; i_16 < 9; i_16 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_17 = 0; i_17 < 12; i_17 += 4) 
                {
                    arr_69 [i_17] [i_17] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned char)62))))));
                    arr_70 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned char)208))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_18 = 0; i_18 < 12; i_18 += 2) /* same iter space */
                    {
                        var_37 ^= ((/* implicit */unsigned int) (-((+(arr_71 [i_15])))));
                        var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)30162))));
                        arr_73 [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_0))))));
                    }
                    for (unsigned char i_19 = 0; i_19 < 12; i_19 += 2) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)32469))));
                        var_40 ^= ((/* implicit */unsigned short) (+(2604726527667912853ULL)));
                    }
                    var_41 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_13))))));
                }
                for (short i_20 = 2; i_20 < 10; i_20 += 4) 
                {
                    var_42 &= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (short)-32741))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_21 = 2; i_21 < 9; i_21 += 3) 
                    {
                        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) (+((+(((/* implicit */int) var_4)))))))));
                        arr_83 [i_0] [i_21] [i_16 + 2] [i_20] [i_21] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) var_9))))));
                        var_44 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)39)))))));
                        arr_84 [i_0] [i_15] [i_16] [i_15] [i_21] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (_Bool)1))))));
                    }
                    for (unsigned char i_22 = 1; i_22 < 11; i_22 += 4) 
                    {
                        var_45 = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_86 [i_22] [i_22] [i_20 + 1] [i_16] [i_15] [i_0]))))));
                        var_46 = ((/* implicit */signed char) (+((~(arr_31 [i_20] [i_20] [i_0])))));
                    }
                    for (short i_23 = 0; i_23 < 12; i_23 += 1) 
                    {
                        var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) (+((~(((/* implicit */int) var_13)))))))));
                        arr_93 [5] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_51 [i_0] [(unsigned short)5] [i_0] [i_20] [i_0] [i_16]))))));
                        var_48 |= ((/* implicit */short) (-((+(((/* implicit */int) var_9))))));
                    }
                }
                arr_94 [i_16] [(signed char)10] [i_15] [i_0] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_87 [i_0] [i_0 - 1] [i_15] [i_15] [i_16]))))));
                var_49 = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_12))))));
                arr_95 [i_15] [i_15] [1LL] [i_16 + 3] = ((/* implicit */signed char) (~((~(((/* implicit */int) (short)-32732))))));
            }
            for (short i_24 = 0; i_24 < 12; i_24 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    for (unsigned char i_26 = 0; i_26 < 12; i_26 += 1) 
                    {
                        {
                            arr_105 [i_15] [i_15] [i_24] [(signed char)8] [i_15] [i_24] = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_47 [i_0] [8ULL] [i_0] [i_0] [i_0] [i_0 + 2]))))));
                            var_50 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))));
                        }
                    } 
                } 
                var_51 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)48))));
            }
            for (unsigned long long int i_27 = 0; i_27 < 12; i_27 += 3) 
            {
                arr_108 [i_27] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-34))));
                /* LoopSeq 1 */
                for (unsigned long long int i_28 = 2; i_28 < 10; i_28 += 3) 
                {
                    arr_113 [i_0] [i_15] [i_27] [i_27] = (!((!(((/* implicit */_Bool) var_7)))));
                    /* LoopSeq 3 */
                    for (short i_29 = 0; i_29 < 12; i_29 += 3) 
                    {
                        arr_116 [(short)11] [i_15] [i_15] [i_15] [i_27] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_8))))));
                        var_52 = ((/* implicit */_Bool) min((var_52), ((!(((/* implicit */_Bool) (+(arr_102 [i_0 + 3] [i_0 + 3] [i_27] [i_27] [i_27]))))))));
                        arr_117 [i_27] [(unsigned char)1] [i_28] [i_28] [i_27] [(_Bool)1] [i_27] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                        arr_118 [i_0] [i_27] [i_0] = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_60 [i_0] [i_15]))))));
                    }
                    for (short i_30 = 0; i_30 < 12; i_30 += 4) 
                    {
                        var_53 += ((/* implicit */short) (+((+(var_5)))));
                        var_54 = ((/* implicit */short) max((var_54), (((/* implicit */short) (-((+(4294967232U))))))));
                        arr_123 [i_0] [i_15] [i_27] [i_27] [i_15] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_3 [(unsigned char)7] [i_15] [i_15]))))));
                        arr_124 [i_0 - 1] [(unsigned short)1] [i_27] [i_27] [i_27] [(unsigned char)7] = (-((+(((/* implicit */int) (signed char)70)))));
                    }
                    for (unsigned char i_31 = 0; i_31 < 12; i_31 += 1) 
                    {
                        arr_129 [i_0] [i_15] [i_27] [i_27] [i_31] [i_31] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (unsigned char)55))))));
                        arr_130 [i_27] [i_27] [i_27] [i_27] [(_Bool)1] = (+((+(((/* implicit */int) arr_0 [(unsigned short)4] [i_15])))));
                    }
                }
                arr_131 [i_27] [i_27] [i_0] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 8219776021315188001ULL))))));
            }
            arr_132 [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_53 [i_0] [(unsigned short)4] [i_0]))))));
            var_55 ^= ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_27 [i_15] [i_15] [i_0]))))));
        }
        for (long long int i_32 = 0; i_32 < 12; i_32 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_33 = 1; i_33 < 11; i_33 += 4) 
            {
                for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                {
                    for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                    {
                        {
                            arr_143 [i_32] [i_32] [i_34] [i_35] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(var_6))))));
                            var_56 *= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)63818))));
                        }
                    } 
                } 
            } 
            var_57 = ((/* implicit */unsigned char) max((var_57), (((/* implicit */unsigned char) (+((+(((/* implicit */int) (unsigned short)51999)))))))));
        }
    }
    var_58 = ((/* implicit */unsigned short) (~((~((~(((/* implicit */int) var_2))))))));
    var_59 ^= ((/* implicit */short) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
}
