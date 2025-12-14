/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46561
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
    var_12 |= (signed char)77;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_0])) ? (arr_0 [i_1 + 2] [i_1 + 1]) : (((/* implicit */int) (unsigned short)45316))))) ? (max((max((var_2), (((/* implicit */unsigned long long int) 1826302366U)))), (((/* implicit */unsigned long long int) 1357952373U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-128)))))))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) ((signed char) (short)-124));
                        var_14 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 1) /* same iter space */
                        {
                            var_15 *= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */long long int) var_4)) : (var_11))) : (((/* implicit */long long int) (-(((/* implicit */int) var_10))))))));
                            var_16 *= ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_2)) ? (arr_5 [i_2] [i_1 + 2]) : (arr_5 [i_2] [i_1 + 1])))));
                            var_17 &= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (((_Bool)1) ? (2468664932U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)161)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (max(((((_Bool)1) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)94)))))))));
                            var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((21U) - (((/* implicit */unsigned int) 354157477)))), (((/* implicit */unsigned int) arr_7 [i_1 + 2] [i_1 - 1] [i_4 - 1])))))));
                            arr_14 [i_0] [i_0] [7LL] [0U] [i_3] [i_0] = ((/* implicit */_Bool) (short)20911);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 1) /* same iter space */
                        {
                            var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) : (11746061)))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (unsigned short)8))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [(short)1] [i_5 - 2] [i_5] [i_5 - 2] [i_5 - 2]))) : (var_11)));
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned short) min((((/* implicit */short) var_6)), (((short) arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))), (arr_8 [i_0])));
                            var_23 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967291U)) ? (max((-5136921446217562080LL), (((/* implicit */long long int) (short)-124)))) : (((/* implicit */long long int) (-(1454403548)))))))));
                        }
                    }
                } 
            } 
            arr_21 [i_0] [i_0] [i_1 + 2] = ((/* implicit */int) min(((-(((5663991190500271203ULL) >> (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(short)9] [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-92)) ? (max((((/* implicit */int) var_1)), (14))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_7))))))))));
        }
        /* vectorizable */
        for (long long int i_7 = 1; i_7 < 8; i_7 += 1) 
        {
            var_24 = ((/* implicit */_Bool) -9223372036854775780LL);
            /* LoopSeq 4 */
            for (short i_8 = 2; i_8 < 11; i_8 += 3) /* same iter space */
            {
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)4219)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_7 + 4] [i_7] [i_7 + 4] [10]))) : (24U))))));
                var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-2133541895) / (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) var_7))));
            }
            for (short i_9 = 2; i_9 < 11; i_9 += 3) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) * (6U)));
                var_28 = (!(((/* implicit */_Bool) var_5)));
                var_29 -= ((/* implicit */short) (+(arr_5 [(_Bool)1] [i_7 + 1])));
            }
            for (short i_10 = 2; i_10 < 11; i_10 += 3) /* same iter space */
            {
                arr_31 [(short)4] [i_10] &= ((/* implicit */unsigned short) (signed char)-91);
                var_30 = ((((/* implicit */_Bool) arr_0 [i_7 + 3] [i_10 - 1])) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) < (((/* implicit */int) (signed char)2))))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_12 = 1; i_12 < 8; i_12 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        arr_41 [i_0] [i_11] [i_11] [(unsigned char)4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_11] [i_11] [i_11] [i_12 + 4])) ? (((1684598868715209519LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        arr_42 [i_0] [i_0] = ((((/* implicit */_Bool) arr_19 [i_0] [i_7 - 1] [i_7] [i_7 + 1] [i_12 + 3] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_12 - 1]))) : (arr_27 [i_12 + 1] [i_12 + 1]));
                    }
                    var_31 |= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))));
                    arr_43 [i_0] = ((/* implicit */unsigned char) var_0);
                }
                for (int i_14 = 0; i_14 < 12; i_14 += 2) 
                {
                    var_32 *= ((/* implicit */unsigned char) ((arr_5 [i_14] [i_14]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_14])))));
                    arr_46 [i_0] [i_11] [7LL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)7)) : (var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) (signed char)-2))))));
                }
                for (signed char i_15 = 1; i_15 < 9; i_15 += 3) 
                {
                    arr_51 [i_0] [(signed char)4] [i_11] [i_15 + 3] [i_15] [i_15 + 1] |= ((/* implicit */unsigned short) ((unsigned long long int) arr_22 [i_0] [i_0] [i_11]));
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) 1200235649006525769ULL))));
                }
                arr_52 [i_0] = (+((-(((/* implicit */int) var_3)))));
                arr_53 [i_0] [i_7 + 2] [i_11] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_44 [i_7] [i_7 - 1] [i_7 - 1] [i_7 + 2])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_11])))));
                arr_54 [i_11] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_7 + 1] [i_0])) ? (arr_25 [i_7 + 4] [i_7] [i_7 + 1] [i_7 + 4]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14157)))));
            }
        }
        var_34 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_32 [i_0])) >> (((/* implicit */int) (unsigned short)6)))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)45817)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) (short)13393)) : (((/* implicit */int) var_3)))) - (13384)))));
    }
}
