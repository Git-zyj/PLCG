/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19977
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 24; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) 290349588U)))))));
                    arr_7 [i_0] [i_0] [i_1] [i_0] |= ((/* implicit */signed char) 4294967295U);
                    arr_8 [i_2] [i_2] [i_1] [i_0] = arr_5 [i_2 - 1] [i_1 + 2];
                    arr_9 [i_2] [i_0] [i_1] [i_0] = (+(arr_2 [i_1 + 2] [i_1 - 1] [i_2 - 1]));
                }
            } 
        } 
        var_19 = ((signed char) arr_6 [i_0] [i_0] [11U]);
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (unsigned int i_4 = 1; i_4 < 24; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    {
                        arr_16 [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_4] [i_4 + 1] [i_4 + 1])) * (((/* implicit */int) arr_3 [i_4] [i_4 - 1] [i_4 - 1]))));
                        /* LoopSeq 2 */
                        for (signed char i_6 = 2; i_6 < 22; i_6 += 1) 
                        {
                            arr_20 [i_4] = ((/* implicit */long long int) ((signed char) ((signed char) arr_5 [i_0] [i_6])));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_11))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_5])) && (((/* implicit */_Bool) arr_1 [i_5]))));
                            arr_21 [i_0] [i_3] [22U] [i_3] [i_4] [i_0] [i_3] = ((/* implicit */long long int) (((+(9223372036854775807LL))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */int) arr_14 [i_6])) : (((/* implicit */int) arr_0 [(signed char)11])))))));
                        }
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_11 [i_0] [i_3]))));
                            arr_24 [i_0] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)127))))) + (arr_22 [i_0] [i_0] [i_4] [i_3] [i_4 - 1] [i_0] [i_7])));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) % ((+(((/* implicit */int) arr_14 [i_4])))))))));
                        }
                    }
                } 
            } 
        } 
        arr_25 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) (signed char)-93))) + (2147483647))) >> (((((/* implicit */int) arr_3 [i_0] [i_0] [(signed char)12])) + (((/* implicit */int) arr_5 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 2; i_8 < 9; i_8 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_16)) > (((/* implicit */int) var_11))))) / (((/* implicit */int) (signed char)(-127 - 1)))));
        arr_28 [i_8] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_8 + 3] [i_8] [i_8 - 2]))) + (0U));
    }
    /* vectorizable */
    for (unsigned int i_9 = 2; i_9 < 9; i_9 += 4) /* same iter space */
    {
        arr_31 [i_9] = arr_11 [i_9] [i_9 + 3];
        var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_9]))))) ? (arr_19 [i_9] [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_9] [i_9] [i_9 + 2] [i_9 - 2] [i_9 + 2] [i_9])))));
    }
    /* vectorizable */
    for (unsigned int i_10 = 2; i_10 < 9; i_10 += 4) /* same iter space */
    {
        arr_35 [1LL] = ((/* implicit */signed char) (+(var_5)));
        arr_36 [i_10] = ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_10] [i_10]))) : (((0U) + (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
        /* LoopSeq 2 */
        for (signed char i_11 = 3; i_11 < 9; i_11 += 4) 
        {
            arr_39 [i_11] = -3849219498249949136LL;
            var_26 = ((/* implicit */signed char) ((((var_5) ^ (var_9))) != (((arr_30 [i_10]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_10] [i_10])))))));
            arr_40 [i_11] [i_11 + 2] [i_11 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_10 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_11 - 3] [i_11]))) : (arr_13 [i_11] [i_11])));
            var_27 *= 592992648U;
        }
        for (unsigned int i_12 = 4; i_12 < 11; i_12 += 3) 
        {
            arr_44 [i_12] = ((((/* implicit */_Bool) arr_17 [i_12 - 3] [i_12 - 3] [i_12 - 3] [i_12 - 3] [i_12 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_10] [i_12] [i_12] [i_12] [i_12 - 1]))) : (var_12));
            var_28 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)56)))) ? (1985519565U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121)))));
            /* LoopSeq 1 */
            for (signed char i_13 = 1; i_13 < 11; i_13 += 4) 
            {
                arr_48 [i_12] [i_10] [i_12] = ((/* implicit */long long int) arr_47 [i_10] [i_10 - 1] [i_10 - 1] [i_10]);
                arr_49 [i_13 - 1] [i_12] [i_12] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_12 - 4] [i_13 + 1])) >> (((/* implicit */int) arr_5 [i_12 - 4] [i_13 + 1]))));
                arr_50 [i_12] [i_12 - 1] [i_12] = arr_3 [i_10] [10U] [i_13 - 1];
                arr_51 [i_10] [i_12] = ((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_13 + 1] [i_13 - 1] [i_13 - 1] [i_13] [i_13 + 1]))));
            }
            arr_52 [i_12] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (4150572213U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_12] [i_10 - 1] [i_10 - 1])))))));
            /* LoopSeq 2 */
            for (unsigned int i_14 = 2; i_14 < 10; i_14 += 1) 
            {
                arr_56 [i_12] [i_12] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-61))) : (arr_11 [i_12 + 1] [i_12 + 1]));
                var_29 = ((/* implicit */long long int) ((arr_2 [i_10] [(signed char)22] [i_10 + 3]) + (3729982037U)));
                var_30 = ((/* implicit */signed char) ((unsigned int) 36024398972452864LL));
                var_31 = ((/* implicit */unsigned int) arr_33 [i_10] [i_12 - 3]);
                arr_57 [i_12] [i_12] [i_12] = ((unsigned int) (signed char)(-127 - 1));
            }
            for (unsigned int i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_16 = 0; i_16 < 12; i_16 += 3) 
                {
                    var_32 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)13))) & (4542357587157440207LL)));
                    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_15] [i_16] [i_12] [i_10] [i_12] [i_10] [i_10])) ? (arr_41 [i_10 + 2]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_46 [i_10 + 2] [i_10 + 2] [i_15] [i_16]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [8U] [i_12])))))))));
                }
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 12; i_17 += 3) 
                {
                    for (signed char i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        {
                            arr_70 [i_12] = ((/* implicit */signed char) 4102197538U);
                            arr_71 [i_12] [i_12] [i_12] [i_12] [i_17] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_10])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_14)))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_19 = 0; i_19 < 12; i_19 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_20 = 0; i_20 < 12; i_20 += 3) 
                    {
                        arr_78 [i_10] [i_12] [(signed char)0] [i_19] [i_12] = ((/* implicit */signed char) ((arr_11 [i_10 + 1] [i_12 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_12 + 1])))));
                        arr_79 [i_20] [i_12] [i_15] [i_19] [i_20] = ((/* implicit */signed char) ((-684213328537783630LL) / (arr_61 [i_12])));
                        arr_80 [i_10] [i_12] [i_15] [i_15] [i_12] [i_12 - 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((0LL) | (((/* implicit */long long int) arr_2 [i_10] [i_12] [i_15]))))) ? (((long long int) -7197724361221357332LL)) : (((/* implicit */long long int) (~(0U))))));
                        arr_81 [i_10] [i_10] [i_15] [i_12] [i_20] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) arr_14 [i_20])))));
                    }
                    for (unsigned int i_21 = 2; i_21 < 10; i_21 += 4) 
                    {
                        arr_84 [i_10] [i_15] [i_12] [i_10] [i_21 - 2] = (signed char)83;
                        var_34 *= ((var_12) / (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-117))))));
                    }
                    arr_85 [i_10] [i_10] [i_12] [i_12] [i_15] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_77 [i_12])) & (((/* implicit */int) arr_38 [5LL] [i_12]))));
                }
                for (signed char i_22 = 0; i_22 < 12; i_22 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_23 = 0; i_23 < 12; i_23 += 3) 
                    {
                        arr_91 [i_10] [i_12 - 1] [i_22] [i_12 - 1] [i_12] [i_15] [i_23] = ((/* implicit */long long int) arr_75 [i_10] [i_10] [10LL]);
                        arr_92 [i_10] [i_10] [i_15] [(signed char)5] [i_22] [i_12] = ((/* implicit */signed char) (~(611981920U)));
                        arr_93 [i_10] [i_10] [i_15] [i_12] = ((/* implicit */unsigned int) arr_63 [i_10] [i_12] [i_15] [i_22] [i_22]);
                        arr_94 [i_12] [i_12 - 2] [i_12 - 2] [i_12] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((-3271234959836506293LL) <= (arr_32 [i_23]))))) >= (((((/* implicit */_Bool) arr_5 [4LL] [i_12 + 1])) ? (3279373480U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_23])))))));
                    }
                    for (long long int i_24 = 0; i_24 < 12; i_24 += 3) 
                    {
                        var_35 = ((((/* implicit */_Bool) arr_83 [i_10 - 2] [i_12 + 1] [i_12 + 1] [(signed char)1] [i_12] [i_12] [i_12 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_75 [i_10] [i_10 + 3] [i_10 + 2]))) : (arr_30 [i_10 - 1]));
                        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_7)) % (arr_97 [i_10 + 3] [i_10 + 3] [i_15] [i_15] [i_24])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_96 [i_22] [i_22] [i_22] [6LL] [i_22] [i_22]))))) : (((/* implicit */int) (signed char)16)))))));
                        var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_10 + 1])) ? (arr_13 [i_15] [i_12 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39))))))));
                        arr_98 [i_12] [i_12 - 3] [i_15] [i_22] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_26 [i_12] [8LL])) ? (1603078883U) : (arr_62 [i_12] [i_12] [i_15] [i_10])))));
                    }
                    var_38 = ((/* implicit */signed char) ((arr_60 [i_12 - 1] [i_12 + 1] [i_12 + 1]) == (((/* implicit */long long int) ((/* implicit */int) arr_88 [i_12] [i_10 - 1] [i_10 - 1] [i_10 - 1])))));
                    var_39 = ((/* implicit */signed char) arr_46 [i_10] [(signed char)9] [i_15] [i_22]);
                }
            }
        }
        arr_99 [i_10 - 1] = ((arr_22 [(signed char)10] [i_10 + 3] [i_10] [i_10] [i_10 - 1] [i_10] [i_10]) & (arr_22 [i_10] [12U] [i_10] [i_10 + 2] [i_10 - 2] [i_10 - 2] [i_10 + 1]));
        arr_100 [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_72 [i_10] [i_10] [i_10 + 3] [i_10 + 2]))));
    }
    var_40 = (signed char)-80;
    var_41 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (4071198890U) : (var_15)));
}
