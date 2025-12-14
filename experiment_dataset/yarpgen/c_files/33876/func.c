/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33876
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((unsigned int) arr_2 [i_3]))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)6))))) : (((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6)))))))));
                                var_13 = ((/* implicit */int) 7702552243518401044LL);
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_4 [i_0 + 3] [i_1] [i_2]))));
                                var_15 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)28)) ? (((/* implicit */unsigned long long int) arr_14 [i_0 + 4] [i_0 - 2])) : (18446744073709551609ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_14 [i_0 + 4] [i_0 + 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_0 + 4] [i_0] |= ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) arr_8 [i_0 + 4] [i_0 + 2])), (-7702552243518401027LL)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        for (int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            {
                var_16 *= ((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_5])), (((int) arr_18 [i_5] [i_6] [i_6]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_8 = 1; i_8 < 18; i_8 += 4) 
                    {
                        var_17 |= ((/* implicit */signed char) (~(((unsigned int) 7ULL))));
                        var_18 = ((/* implicit */short) (+(-7702552243518401014LL)));
                    }
                    for (short i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(arr_26 [i_9] [i_7] [i_6] [i_5])))) != (((/* implicit */int) var_0))));
                        var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_21 ^= ((/* implicit */int) (((!((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5]))) : (((arr_19 [i_7]) ? (arr_23 [i_5] [i_6] [i_7] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))));
                        arr_28 [i_5] [i_7] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_5] [i_6])) ? (-7702552243518401049LL) : (((/* implicit */long long int) arr_8 [i_6] [i_6]))));
                    }
                    var_22 = ((/* implicit */unsigned short) (-(arr_8 [i_5] [i_6])));
                    arr_29 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_7] [i_7] [i_5] [i_6] [i_7] [i_7])) ? (((/* implicit */int) arr_6 [i_7] [i_5] [i_5])) : (((/* implicit */int) (_Bool)1))));
                }
            }
        } 
    } 
    var_23 = (_Bool)1;
    /* LoopSeq 1 */
    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_11 = 4; i_11 < 17; i_11 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 19; i_12 += 2) 
            {
                for (unsigned int i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    {
                        arr_39 [i_10] [i_11] [i_11] [(_Bool)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (unsigned char)219)))))));
                        arr_40 [i_11] [i_11 - 3] [i_12] [i_10] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 9ULL)) && (((/* implicit */_Bool) 6041175U))));
                        /* LoopSeq 3 */
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            arr_43 [i_10] [i_10] [i_11] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_4 [i_11 + 2] [i_11 + 2] [i_14 - 1])) << (((((/* implicit */int) var_2)) + (11787))))), (((/* implicit */int) max(((_Bool)1), (arr_4 [i_11 - 2] [i_14 - 1] [i_14 - 1]))))));
                            var_24 += ((/* implicit */unsigned int) (-(18446744073709551602ULL)));
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (6041147U) : (arr_14 [i_10] [i_14])))) ? (arr_10 [i_10] [i_11 - 4]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) (_Bool)1)))))));
                        }
                        for (long long int i_15 = 0; i_15 < 19; i_15 += 2) 
                        {
                            arr_46 [i_12] [i_10] [i_11] [i_13] [i_15] [i_15] [i_10] = ((/* implicit */unsigned int) 1116098166438567539LL);
                            arr_47 [i_11] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned int) 1102557691))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)72)) && (((/* implicit */_Bool) var_8)))))) : (min((((/* implicit */long long int) arr_45 [i_10] [i_11] [i_12] [2U] [8ULL] [i_15] [i_15])), (-374567773871112519LL))))) / (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((signed char) 12843911074874276176ULL)))))));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_26 = ((long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32566)))))));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_26 [i_11 - 4] [i_11 - 1] [i_11 - 2] [i_11 - 4]))) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_5))))))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) min(((((_Bool)1) ? (min((6908512236557618661ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) (-(arr_12 [i_13] [i_11 - 3])))))), (((/* implicit */unsigned long long int) arr_33 [i_10] [9LL] [i_10])))))));
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) (_Bool)1))))))));
                        }
                        for (unsigned char i_18 = 1; i_18 < 15; i_18 += 1) 
                        {
                            var_30 |= ((/* implicit */unsigned int) arr_52 [i_10] [i_11 - 1] [i_11 - 1] [i_13] [i_10] [6] [i_10]);
                            arr_57 [i_10] [i_10] [i_11 + 1] [i_12] [i_11] [i_18] = ((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (3819598533U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(21ULL)))) ? ((~(((/* implicit */int) (unsigned short)65526)))) : (((/* implicit */int) min(((unsigned char)120), (((/* implicit */unsigned char) arr_7 [i_10] [(unsigned short)6] [i_10] [i_10]))))))))));
                            var_31 = ((/* implicit */_Bool) (unsigned short)52407);
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50190))) | (var_3)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-24))))) : (8ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) 475368763U))))))));
                        }
                    }
                } 
            } 
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_32 [i_10]))) ? (((unsigned int) (+(((/* implicit */int) (signed char)-120))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_10] [i_11] [i_11] [i_10])) + ((+(((/* implicit */int) arr_4 [i_10] [i_10] [(signed char)22])))))))));
        }
        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)3226)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6332))))) : (((/* implicit */int) (short)-22924))));
        arr_58 [i_10] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 3U))))) * (((/* implicit */int) max((arr_31 [i_10] [i_10]), (((/* implicit */short) arr_26 [i_10] [i_10] [i_10] [i_10])))))));
        arr_59 [i_10] [i_10] = ((/* implicit */unsigned short) (-(4288926105U)));
    }
}
