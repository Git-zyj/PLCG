/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29106
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
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_11 -= ((/* implicit */long long int) ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_3 [i_0 - 2]))));
        var_12 = ((/* implicit */long long int) ((unsigned short) var_8));
    }
    for (unsigned char i_1 = 3; i_1 < 12; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (short i_3 = 2; i_3 < 10; i_3 += 3) 
            {
                for (unsigned char i_4 = 1; i_4 < 12; i_4 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1 - 1]))) / (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_5])))))));
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 486603076U)) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            var_15 = ((/* implicit */signed char) ((((/* implicit */int) max((min((((/* implicit */short) (signed char)(-127 - 1))), (var_8))), (max((var_8), (((/* implicit */short) var_0))))))) < (((/* implicit */int) (short)8191))));
                            arr_22 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)127))));
                            arr_23 [i_1] [i_2] [i_4] [(signed char)2] [i_6] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_1] [i_1 - 1])))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_16 = ((/* implicit */_Bool) var_1);
                            var_17 &= ((((/* implicit */_Bool) max((arr_15 [i_3] [(signed char)12] [(short)2] [i_3 + 3] [i_3] [i_4 - 1] [i_4]), (arr_15 [(signed char)8] [(unsigned char)8] [(short)12] [i_1] [0] [i_4 - 1] [(_Bool)1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -433925151)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32759))) : (7523095105201056116ULL)))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_27 [12LL] [12LL] [i_3 + 2] [i_3 + 3] [i_7]))))) : (((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_7))));
                            var_18 |= ((/* implicit */_Bool) (unsigned char)207);
                        }
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((long long int) arr_20 [i_4] [(unsigned short)12] [i_1 - 3] [i_3 + 1] [i_3])) / (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_10)), (min((var_8), (((/* implicit */short) var_10)))))))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_8 = 4; i_8 < 12; i_8 += 3) 
        {
            arr_31 [i_1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_3 [i_1 - 1]), ((signed char)-120)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)42))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 2; i_9 < 11; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 2) 
                {
                    {
                        var_20 = ((/* implicit */short) var_10);
                        var_21 = ((/* implicit */unsigned short) arr_7 [i_1 - 2] [i_8]);
                        /* LoopSeq 3 */
                        for (signed char i_11 = 2; i_11 < 10; i_11 += 2) 
                        {
                            arr_42 [i_1 - 2] [i_8] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) -433925151)) ? (((/* implicit */int) min(((signed char)-94), ((signed char)84)))) : (((/* implicit */int) min((((/* implicit */short) (signed char)-84)), ((short)-1)))))), (((/* implicit */int) (unsigned short)63109))));
                            var_22 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) (short)-32760)), (((((/* implicit */_Bool) (signed char)78)) ? (((long long int) var_3)) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)2047)))))))));
                        }
                        for (short i_12 = 0; i_12 < 13; i_12 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) arr_39 [i_8 - 2] [i_8]);
                            arr_45 [i_1] [i_1] [i_8 - 4] [i_8 - 4] [i_8] [i_10] [i_12] = ((/* implicit */signed char) ((((((/* implicit */int) arr_30 [i_8] [i_8 - 4])) % (((/* implicit */int) var_2)))) - (((/* implicit */int) arr_6 [i_1 - 2]))));
                        }
                        for (unsigned long long int i_13 = 1; i_13 < 12; i_13 += 3) 
                        {
                            arr_49 [i_8] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_18 [i_8] [i_8 + 1] [i_9] [(_Bool)1] [(signed char)0])) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) arr_33 [i_8 - 3] [i_10] [i_10])) : (((/* implicit */int) var_2))))), (arr_5 [i_1 - 2])));
                            var_24 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) max((arr_29 [(unsigned char)3] [(unsigned char)3] [i_8]), (arr_14 [i_1 - 2] [i_8] [i_9] [i_13])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_8] [i_8])) ? (((/* implicit */int) arr_13 [i_8] [(unsigned short)4] [i_9])) : (((/* implicit */int) (signed char)99))))) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) var_6))))));
                        }
                        arr_50 [i_1] [i_8] [i_8] [i_10] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_4)), (arr_24 [i_1] [i_8 - 4] [i_8 + 1] [i_8 - 1] [i_9] [i_10])));
                    }
                } 
            } 
            var_25 = ((/* implicit */_Bool) var_7);
        }
    }
    for (unsigned char i_14 = 3; i_14 < 12; i_14 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) min((-1825185228), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (var_5)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))))))))));
        arr_54 [(unsigned short)3] = var_9;
        arr_55 [i_14 + 1] = ((/* implicit */unsigned short) arr_27 [i_14 - 2] [(signed char)3] [i_14 - 3] [i_14 - 1] [i_14]);
    }
    /* LoopSeq 4 */
    for (unsigned int i_15 = 2; i_15 < 9; i_15 += 3) /* same iter space */
    {
        arr_58 [i_15 - 2] [i_15] = ((/* implicit */short) ((unsigned long long int) arr_39 [i_15 + 1] [(signed char)8]));
        arr_59 [i_15] [i_15 - 1] = ((/* implicit */long long int) (signed char)96);
        /* LoopNest 2 */
        for (unsigned int i_16 = 1; i_16 < 6; i_16 += 2) 
        {
            for (unsigned short i_17 = 3; i_17 < 8; i_17 += 1) 
            {
                {
                    arr_65 [i_15 - 2] [(short)4] [i_17] [i_15] = ((/* implicit */signed char) min((((/* implicit */int) var_2)), ((+(((/* implicit */int) arr_26 [i_15] [i_17] [(signed char)9] [i_17] [i_17 + 1] [i_17 - 3]))))));
                    /* LoopSeq 1 */
                    for (long long int i_18 = 0; i_18 < 10; i_18 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (var_7)))) ? (((((/* implicit */_Bool) arr_6 [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_18] [(unsigned short)7] [i_18] [(signed char)4] [i_16] [i_15 - 2]))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(signed char)6] [i_16] [i_18] [i_17 + 1] [(_Bool)1] [i_16] [(unsigned short)12])))))));
                        var_28 = arr_19 [i_15] [i_16] [i_17];
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_19 = 2; i_19 < 9; i_19 += 3) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned int) (_Bool)0);
        arr_72 [i_19] = ((/* implicit */short) arr_46 [i_19 - 1] [i_19 - 1] [i_19] [(_Bool)1] [i_19] [(_Bool)1] [i_19]);
    }
    for (unsigned int i_20 = 2; i_20 < 9; i_20 += 3) /* same iter space */
    {
        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) min((var_3), (min((min((((/* implicit */unsigned short) var_2)), ((unsigned short)10581))), (((/* implicit */unsigned short) (signed char)-84)))))))));
        var_31 = ((/* implicit */_Bool) max(((~(18446744073709551615ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((signed char)-112), ((signed char)-122)))))))));
    }
    /* vectorizable */
    for (unsigned int i_21 = 2; i_21 < 9; i_21 += 3) /* same iter space */
    {
        arr_80 [i_21] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_6 [i_21])) < (((/* implicit */int) arr_77 [(unsigned short)0] [i_21 - 2])))))));
        arr_81 [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_21 - 1] [i_21] [i_21] [i_21 - 1] [i_21] [i_21 + 1] [i_21])) ? (((((/* implicit */_Bool) 510347704U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)6893)))) : (((/* implicit */int) arr_15 [i_21] [i_21 - 1] [i_21] [i_21 + 1] [i_21] [i_21] [i_21 - 2]))));
        arr_82 [i_21] = (unsigned short)3472;
    }
}
