/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215393
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
    var_14 = ((/* implicit */signed char) var_0);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (unsigned char)224)))))));
        var_16 = ((/* implicit */signed char) (+(((281474976677888ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (short)31)) : (((/* implicit */int) (unsigned char)31))))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                /* LoopSeq 3 */
                for (int i_3 = 4; i_3 < 9; i_3 += 2) 
                {
                    arr_9 [i_0] [i_1] [(_Bool)1] |= ((/* implicit */unsigned int) max(((unsigned char)31), (((/* implicit */unsigned char) (signed char)0))));
                    arr_10 [i_3] [i_2] [(signed char)9] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_3 [i_0 + 1] [i_0 + 1] [i_2]))) || (((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) (~(3ULL))))))));
                    arr_11 [i_0] [(short)2] [(signed char)1] [i_3] = ((/* implicit */short) (signed char)-1);
                }
                for (long long int i_4 = 1; i_4 < 10; i_4 += 2) 
                {
                    var_18 = 4294967295U;
                    arr_14 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)10)) ? (0) : (((/* implicit */int) (short)0))))) ? (max((((/* implicit */long long int) (-2147483647 - 1))), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) var_11)))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))))));
                    arr_15 [i_0] [i_1] [i_1] [i_4] [i_4] = ((/* implicit */_Bool) max((2251799813685247ULL), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)224)) ? (var_11) : (((/* implicit */int) (signed char)-16)))))))));
                }
                for (short i_5 = 1; i_5 < 10; i_5 += 3) 
                {
                    arr_19 [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)0)), ((-2147483647 - 1))))))) ? ((+((~(0U))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(_Bool)1] [(short)8])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)2047)))), ((-(-24))))))));
                    /* LoopSeq 3 */
                    for (short i_6 = 1; i_6 < 10; i_6 += 3) /* same iter space */
                    {
                        arr_22 [i_0] [i_5 - 1] = ((/* implicit */short) ((((/* implicit */int) var_12)) >= ((-(max((-42), (((/* implicit */int) (short)0))))))));
                        arr_23 [i_0 + 1] [i_0 + 1] [(unsigned char)3] [i_0 + 1] = ((((/* implicit */_Bool) (unsigned short)15)) ? (2147483636) : (((/* implicit */int) (unsigned char)0)));
                        arr_24 [i_2] [i_1] [i_2] [i_2] [(short)9] = ((/* implicit */short) var_10);
                    }
                    for (short i_7 = 1; i_7 < 10; i_7 += 3) /* same iter space */
                    {
                        arr_27 [i_0] [(short)5] [i_2] [i_7] [i_7 + 1] = (~((~(8380416))));
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_16 [i_0 + 1])) ? (((/* implicit */int) arr_16 [i_0 - 1])) : (((/* implicit */int) arr_16 [i_0 + 1])))))))));
                    }
                    for (short i_8 = 1; i_8 < 10; i_8 += 3) /* same iter space */
                    {
                        arr_30 [(_Bool)1] [i_1] [i_2] [i_5] [i_8] = ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)32760)), (max((-1LL), (((/* implicit */long long int) 7))))))) == (arr_26 [i_8] [i_5] [i_2] [i_1] [i_0 + 1]));
                        var_20 = -7;
                        arr_31 [i_8] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned long long int) max((42), (((/* implicit */int) (unsigned char)255))))) : (((((/* implicit */_Bool) 12)) ? (((/* implicit */unsigned long long int) var_4)) : (18446744073709551615ULL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) min((arr_6 [6] [i_1] [i_2] [6]), ((signed char)126)))) << (((((/* implicit */_Bool) var_12)) ? (3ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL))))))) : (arr_21 [i_0] [6] [i_0] [i_0] [i_0] [i_0])));
                    }
                    arr_32 [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */int) arr_28 [i_5 - 1])) * (((/* implicit */int) (unsigned char)0)))) >> ((((+(((/* implicit */int) (unsigned char)235)))) - (226)))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [i_5 - 1] [i_0 - 1] [i_2]) ? (((/* implicit */int) (short)-32760)) : (((/* implicit */int) arr_3 [i_5 - 1] [i_0 - 1] [i_5 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 12)))))) : (((18446744073709551607ULL) / (((/* implicit */unsigned long long int) 10U))))));
                }
                var_22 = ((/* implicit */unsigned long long int) 4607182418800017408LL);
                arr_33 [i_0 + 1] [i_2] &= ((/* implicit */unsigned long long int) (-(var_11)));
                var_23 = ((/* implicit */unsigned long long int) ((((255) * (((/* implicit */int) (short)2040)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) 1006632960U)))))));
            }
            for (int i_9 = 1; i_9 < 7; i_9 += 2) 
            {
                var_24 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)63)))) ? (((/* implicit */unsigned int) ((2) << (((((((/* implicit */_Bool) 4607182418800017423LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) - ((-9223372036854775807LL - 1LL))))))) : ((-((~(0U)))))));
                arr_38 [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */_Bool) (-(((max((4467570830351532032ULL), (18446744073709551615ULL))) / ((+(32766ULL)))))));
            }
        }
    }
    for (unsigned long long int i_10 = 1; i_10 < 21; i_10 += 2) 
    {
        arr_42 [i_10] = ((/* implicit */signed char) (short)32765);
        var_25 |= ((/* implicit */int) ((max((((arr_39 [6]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-122))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_41 [16]) ? (((/* implicit */int) (_Bool)1)) : (arr_40 [i_10]))) <= (max((((/* implicit */int) (short)32765)), (-3)))))))));
        arr_43 [i_10 + 1] [i_10] = ((/* implicit */int) min(((~(16383U))), (((arr_41 [i_10]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_10]))) : (268435456U)))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 3) 
    {
        arr_47 [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)32756)), (2047)))) ? (((((/* implicit */_Bool) arr_7 [i_11])) ? (4607182418800017408ULL) : (arr_7 [i_11]))) : (((arr_41 [i_11]) ? (arr_7 [i_11]) : (((/* implicit */unsigned long long int) -28))))));
        var_26 = ((/* implicit */unsigned int) var_9);
        arr_48 [i_11] [i_11] = ((/* implicit */_Bool) arr_4 [i_11] [i_11] [i_11] [(unsigned short)3]);
        var_27 = ((/* implicit */unsigned int) (!(((1073741696) <= (((((/* implicit */_Bool) 2026)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127))))))));
    }
}
