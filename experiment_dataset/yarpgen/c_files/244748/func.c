/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244748
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
    for (unsigned long long int i_0 = 4; i_0 < 15; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            var_15 = ((/* implicit */signed char) arr_12 [(short)7] [i_4] [i_2] [i_4]);
                            var_16 *= ((/* implicit */short) 13U);
                            arr_13 [i_0] [i_0] [i_4] [i_2 - 1] [i_3] [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0] [i_4] [i_2] [i_0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                            var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)252)) ? (10U) : (4294967282U)))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)61)) & (((/* implicit */int) arr_4 [(short)0] [(short)0]))))));
                            arr_16 [i_0] [i_0] [i_0] [1LL] = ((/* implicit */_Bool) (~(arr_14 [i_0] [(signed char)4] [i_2] [i_2 - 1] [i_2 - 1] [(short)3] [i_0 + 2])));
                        }
                        for (signed char i_6 = 1; i_6 < 14; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */short) var_4);
                            arr_19 [i_0] [i_0] [i_0] [i_3] [i_6] [i_6] = ((/* implicit */unsigned short) min((var_0), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_10)))))));
                            var_20 -= ((/* implicit */int) var_10);
                        }
                        for (short i_7 = 2; i_7 < 16; i_7 += 2) 
                        {
                            arr_22 [(short)0] [(short)15] [(short)13] [(short)15] = ((/* implicit */short) (-9223372036854775807LL - 1LL));
                            var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_2 - 1])) ? ((-(var_3))) : (((/* implicit */int) arr_18 [(signed char)12] [i_0 - 3] [i_2 - 1])))) : ((+(((/* implicit */int) var_11))))));
                        }
                        arr_23 [i_0] [(unsigned char)6] [i_0] [(short)13] [i_1] [i_2] = ((/* implicit */signed char) 4294967295U);
                    }
                } 
            } 
            var_22 = ((/* implicit */short) var_7);
            var_23 -= ((/* implicit */unsigned char) var_14);
        }
        for (signed char i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                for (signed char i_10 = 3; i_10 < 14; i_10 += 1) 
                {
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        {
                            var_24 ^= (~((((_Bool)1) ? (((/* implicit */int) var_7)) : (((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((((/* implicit */int) (short)-4544)) + (4554))) - (10))))))));
                            var_25 = ((/* implicit */short) 1125899902648320ULL);
                            var_26 *= ((/* implicit */short) (signed char)(-127 - 1));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                for (signed char i_13 = 1; i_13 < 15; i_13 += 3) 
                {
                    for (long long int i_14 = 0; i_14 < 17; i_14 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */short) (((-(((/* implicit */int) arr_25 [i_0] [i_13 + 1] [i_8])))) + (((/* implicit */int) ((signed char) arr_11 [i_8] [i_13 + 2] [i_8])))));
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (short)-1))));
                            arr_42 [i_0] [i_0] [i_12] [(signed char)5] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0 + 1] [i_0] [i_0 - 3] [i_0 + 1])) ? (((((/* implicit */_Bool) arr_3 [i_0] [(signed char)16])) ? (((/* implicit */int) arr_34 [12ULL] [i_8])) : (((/* implicit */int) (short)-9792)))) : ((-(((/* implicit */int) arr_33 [(unsigned char)6]))))))) ? (((((/* implicit */_Bool) arr_20 [(unsigned char)16] [(unsigned char)16] [i_12] [i_13] [(unsigned char)16] [(unsigned char)16])) ? ((((_Bool)1) ? (4294967288U) : (4294967285U))) : (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) (-((~(((/* implicit */int) var_11)))))))));
                            arr_43 [(short)16] [(short)16] [i_12] [i_8] [i_12] [i_8] [(signed char)10] = ((/* implicit */short) ((((2954852521338346201ULL) << (((((/* implicit */int) var_10)) + (91))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_0 - 4]), (arr_5 [i_0])))))));
                        }
                    } 
                } 
            } 
            arr_44 [i_8] [i_8] [i_8] = ((/* implicit */short) var_10);
        }
        for (int i_15 = 0; i_15 < 17; i_15 += 3) 
        {
            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) || (((/* implicit */_Bool) arr_14 [i_0 - 1] [(short)1] [i_0] [i_15] [i_0 - 1] [i_15] [i_0 - 1]))));
            /* LoopNest 2 */
            for (short i_16 = 0; i_16 < 17; i_16 += 3) 
            {
                for (signed char i_17 = 0; i_17 < 17; i_17 += 4) 
                {
                    {
                        arr_53 [(short)7] [i_17] [i_16] = ((/* implicit */short) (-((~(10U)))));
                        /* LoopSeq 1 */
                        for (short i_18 = 1; i_18 < 14; i_18 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(arr_15 [i_15] [i_18 + 1] [i_15] [i_15] [i_15]))))));
                            arr_57 [i_18] [i_15] [i_18] [i_17] [i_15] [i_15] [i_15] &= (short)-32746;
                        }
                    }
                } 
            } 
            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (signed char)-30))));
        }
        var_32 ^= arr_25 [i_0] [i_0] [(unsigned char)0];
        /* LoopNest 2 */
        for (signed char i_19 = 0; i_19 < 17; i_19 += 4) 
        {
            for (unsigned char i_20 = 0; i_20 < 17; i_20 += 2) 
            {
                {
                    var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) arr_46 [i_20] [i_0 - 2]))));
                    arr_62 [i_20] [i_20] [i_20] = ((/* implicit */unsigned char) ((unsigned long long int) 15491891552371205414ULL));
                    arr_63 [i_19] [i_19] [(short)8] [i_19] = ((/* implicit */short) arr_11 [i_20] [i_20] [i_20]);
                }
            } 
        } 
    }
    for (unsigned long long int i_21 = 4; i_21 < 15; i_21 += 1) /* same iter space */
    {
        arr_66 [(signed char)4] [0ULL] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_39 [i_21 - 3] [i_21 - 4] [i_21 - 4] [i_21] [i_21 + 1]), (arr_39 [i_21 + 1] [i_21 - 4] [i_21 - 4] [i_21 + 1] [i_21 - 3])))) ? (((/* implicit */int) arr_39 [i_21 - 3] [i_21 - 2] [i_21 - 3] [i_21] [i_21 - 1])) : (((((/* implicit */int) var_7)) & (((/* implicit */int) arr_39 [i_21 + 1] [i_21 + 2] [i_21 + 1] [i_21] [i_21 - 2]))))));
        /* LoopSeq 1 */
        for (short i_22 = 3; i_22 < 16; i_22 += 1) 
        {
            var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-18))));
            arr_71 [i_21] [i_21] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_55 [i_21] [i_21 - 4] [i_21 + 2] [i_21 + 2] [i_21 + 1]))))));
            var_35 = ((/* implicit */signed char) (-((+((+(((/* implicit */int) arr_37 [i_21] [i_21] [8ULL] [i_21]))))))));
            var_36 = ((/* implicit */_Bool) 9223372036854775807LL);
            var_37 = ((/* implicit */long long int) (unsigned char)171);
        }
    }
    for (unsigned long long int i_23 = 4; i_23 < 15; i_23 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_24 = 0; i_24 < 17; i_24 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_25 = 0; i_25 < 17; i_25 += 1) 
            {
                arr_79 [i_23] [3LL] [i_23] [i_25] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_55 [i_23] [(short)13] [i_24] [i_25] [i_25])) ? (((/* implicit */int) arr_28 [i_23] [i_24] [i_23])) : (((((/* implicit */_Bool) 1348892002U)) ? (((/* implicit */int) arr_74 [i_23] [i_23 - 2])) : (((/* implicit */int) min((((/* implicit */unsigned char) var_14)), (var_5))))))));
                arr_80 [(short)4] [i_23] [i_23] [(short)4] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) (short)-64)) * (((/* implicit */int) var_5)))))) ? ((-(((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_21 [i_23] [16ULL] [(signed char)10] [i_24] [(unsigned char)13] [i_25])) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) var_9))));
            }
            arr_81 [i_23] = ((/* implicit */unsigned char) ((signed char) min((max((((/* implicit */unsigned char) (signed char)98)), ((unsigned char)77))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))))))));
            arr_82 [i_23] [i_23] = ((/* implicit */short) ((((((((/* implicit */int) arr_6 [i_23 - 1] [i_23 - 1] [i_23 - 4])) + (2147483647))) << (((((((/* implicit */int) arr_6 [i_23 + 2] [i_23 - 2] [i_23 + 1])) + (6387))) - (26))))) << ((((~(((/* implicit */int) arr_6 [i_23 - 4] [i_23 - 3] [i_23 - 2])))) - (6360)))));
        }
        for (short i_26 = 0; i_26 < 17; i_26 += 2) /* same iter space */
        {
            arr_85 [i_23] [i_26] = (signed char)-61;
            arr_86 [i_23] = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_34 [i_23] [i_23]), (arr_11 [i_23] [i_23 - 3] [i_23])))) << (((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) arr_11 [i_23] [i_23 + 1] [(signed char)2])))))));
        }
        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) var_4))));
    }
    var_39 *= ((/* implicit */short) var_13);
    var_40 = var_9;
    /* LoopNest 2 */
    for (signed char i_27 = 0; i_27 < 18; i_27 += 1) 
    {
        for (signed char i_28 = 0; i_28 < 18; i_28 += 2) 
        {
            {
                arr_93 [i_27] [i_27] [i_28] = ((/* implicit */short) ((((/* implicit */int) (short)18)) / (((/* implicit */int) (short)5))));
                arr_94 [i_27] = ((/* implicit */short) ((((/* implicit */_Bool) arr_90 [i_27] [i_27] [i_27])) ? (((/* implicit */int) arr_90 [i_27] [i_28] [i_27])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_90 [i_27] [i_27] [i_27])) || (((/* implicit */_Bool) arr_90 [i_28] [i_27] [i_27])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_29 = 0; i_29 < 20; i_29 += 3) 
    {
        var_41 = ((/* implicit */short) var_3);
        var_42 = ((/* implicit */signed char) arr_95 [i_29]);
        var_43 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) arr_95 [i_29])) != (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) (signed char)-1)) ? (((((/* implicit */_Bool) (signed char)-125)) ? (arr_96 [i_29] [i_29]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))));
        var_44 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned char) var_13)), (arr_95 [i_29])))) * ((+(((/* implicit */int) (short)0))))));
        arr_97 [(signed char)11] = ((/* implicit */signed char) arr_95 [12U]);
    }
}
