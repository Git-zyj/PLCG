/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246397
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) min((var_8), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (((((/* implicit */unsigned int) var_8)) | (var_2)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_2] [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0] [i_2] [i_0] [i_2] [i_2] [i_0]))));
                                arr_11 [i_1] [i_2] [i_2] [i_4] = (i_2 % 2 == zero) ? (((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (short)0))) ^ (((((/* implicit */_Bool) -7756612625339511715LL)) ? (arr_2 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned char)3] [4] [i_1] [i_2] [i_2] [i_1]))))))) << (((((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_3] [i_2] [i_1] [i_2]))) : (var_2)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_1] [i_2] [i_3] [(signed char)1] [i_1] [i_3]))))))) - (1621ULL)))))) : (((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (short)0))) ^ (((((/* implicit */_Bool) -7756612625339511715LL)) ? (arr_2 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned char)3] [4] [i_1] [i_2] [i_2] [i_1]))))))) << (((((((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_3] [i_2] [i_1] [i_2]))) : (var_2)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_1] [i_2] [i_3] [(signed char)1] [i_1] [i_3]))))))) - (1621ULL))) - (4294964282ULL))))));
                                arr_12 [i_0] [i_0] [i_0] [(unsigned char)3] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -7756612625339511715LL)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [2LL] [i_1]))) | (((((/* implicit */_Bool) var_9)) ? (arr_1 [(signed char)8]) : (((/* implicit */unsigned long long int) var_8))))))));
                                var_12 -= ((/* implicit */unsigned short) arr_1 [(unsigned short)8]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 3; i_5 < 9; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            {
                                arr_19 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7756612625339511698LL)) ? (7756612625339511714LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_6])) ? (arr_14 [i_0] [i_2] [i_0] [7LL] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_5 - 3])))))))) ? (arr_15 [i_0] [i_1] [i_2] [i_0] [i_2] [i_0]) : (max((var_5), (((/* implicit */unsigned long long int) arr_9 [i_5 - 2] [i_5] [i_5 - 1] [i_5] [i_2]))))));
                                var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((var_5) | (((/* implicit */unsigned long long int) arr_8 [i_0] [i_2] [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-19724)) + (2147483647))) << (((arr_2 [i_0]) - (8551060983936093103LL))))))))) ? (((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */unsigned long long int) 7756612625339511713LL)) : (6430218004093760494ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((unsigned char) -7756612625339511715LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) (-(arr_20 [i_7])));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_21 [i_7] [i_7])) : (((/* implicit */int) arr_21 [i_7] [i_7]))));
        arr_22 [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
        /* LoopNest 2 */
        for (long long int i_8 = 4; i_8 < 15; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) (!(((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) 7756612625339511713LL))))));
                    arr_28 [i_7] [i_7] [i_9] [i_9] = ((/* implicit */_Bool) ((int) arr_24 [i_8 + 2] [i_8 + 3]));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_11 = 0; i_11 < 18; i_11 += 3) 
        {
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                for (int i_13 = 3; i_13 < 17; i_13 += 3) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) (+(var_4)));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_6))));
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            var_20 += ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)1)))) > (((((/* implicit */_Bool) arr_41 [i_10] [i_10] [i_10] [i_10] [i_12])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_21 [i_12] [i_12]))))));
                            var_21 = ((/* implicit */_Bool) (~(var_7)));
                        }
                    }
                } 
            } 
            var_22 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_21 [14U] [14U])) != (var_8))))));
        }
        /* LoopNest 2 */
        for (int i_15 = 2; i_15 < 16; i_15 += 4) 
        {
            for (unsigned int i_16 = 0; i_16 < 18; i_16 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 2; i_17 < 17; i_17 += 1) 
                    {
                        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                        {
                            {
                                arr_54 [i_10] [i_15] [i_10] [i_10] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-7756612625339511715LL))))) | (((((/* implicit */_Bool) 12ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8354210591230151412LL)))));
                                var_23 *= ((((/* implicit */_Bool) arr_49 [i_18] [i_17 - 2] [i_15 + 1] [i_15])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_29 [i_16])) >= (((/* implicit */int) arr_47 [i_15])))))));
                                arr_55 [(short)0] [i_15] [i_15] [i_15] [i_15] &= var_7;
                            }
                        } 
                    } 
                    arr_56 [i_10] [i_10] [i_16] = ((/* implicit */signed char) (-((+(var_5)))));
                    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_45 [14LL] [i_10] [14LL]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_19 = 1; i_19 < 17; i_19 += 1) 
        {
            for (short i_20 = 0; i_20 < 18; i_20 += 3) 
            {
                {
                    arr_62 [0] [0] [i_10] [i_20] = ((/* implicit */_Bool) arr_45 [i_20] [i_10] [i_10]);
                    /* LoopNest 2 */
                    for (unsigned short i_21 = 0; i_21 < 18; i_21 += 1) 
                    {
                        for (short i_22 = 3; i_22 < 14; i_22 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_63 [i_22] [i_22] [i_22] [i_22 - 2] [i_22] [i_22]))));
                                arr_67 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_10] [i_22 - 2] [i_22 - 2])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        for (short i_24 = 1; i_24 < 16; i_24 += 1) 
                        {
                            {
                                arr_74 [i_10] [i_19] [i_20] [i_23] [i_24] = ((/* implicit */unsigned char) (-(arr_20 [i_19 - 1])));
                                arr_75 [i_10] [i_19] [i_20] [i_23] [i_10] = ((/* implicit */unsigned long long int) (~(3422033952603740418LL)));
                            }
                        } 
                    } 
                    arr_76 [i_10] [i_10] [i_20] = ((/* implicit */unsigned int) (((~(-1LL))) | (((/* implicit */long long int) ((1239599229) / (((/* implicit */int) arr_51 [i_10] [i_10] [i_10] [i_10] [i_10])))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 8080895020690254958LL))));
        /* LoopNest 2 */
        for (long long int i_26 = 3; i_26 < 16; i_26 += 1) 
        {
            for (unsigned char i_27 = 0; i_27 < 18; i_27 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_28 = 0; i_28 < 18; i_28 += 3) 
                    {
                        for (unsigned short i_29 = 0; i_29 < 18; i_29 += 4) 
                        {
                            {
                                arr_92 [i_25] [i_26] [i_25] [i_28] [i_29] = ((/* implicit */unsigned char) var_7);
                                arr_93 [i_26] [i_26] [i_27] [i_28] [i_29] = ((unsigned int) 65536U);
                                arr_94 [i_25] [i_25] [i_26] [i_26] [i_28] [i_25] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (63488ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))) ? ((+(7756612625339511702LL))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_30 = 3; i_30 < 17; i_30 += 2) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (+(-68020630722760158LL)))) && (((/* implicit */_Bool) 63501ULL))));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_78 [i_25]))) >= (((((/* implicit */long long int) ((/* implicit */int) var_0))) & (var_7)))));
                        arr_98 [i_25] [i_25] [i_26] [i_27] [i_26] [i_26] = ((/* implicit */unsigned long long int) (((~(arr_88 [i_26] [i_25] [i_26] [i_25] [i_30] [i_26]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_71 [i_25] [i_25] [i_26] [i_25]) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                    }
                    arr_99 [i_25] [i_25] [i_26] [i_25] = ((/* implicit */short) ((var_8) >= (var_8)));
                    var_29 -= ((/* implicit */unsigned char) (((_Bool)1) ? (1154704974U) : (65536U)));
                    arr_100 [i_26] [i_26] = ((/* implicit */short) ((arr_90 [i_26 + 1] [i_26 - 1] [i_26] [i_26 - 3] [i_26] [i_26] [i_26 - 3]) & (arr_90 [i_26 + 1] [i_26] [i_26] [i_26 - 3] [i_26] [i_26] [i_26 - 3])));
                }
            } 
        } 
    }
}
