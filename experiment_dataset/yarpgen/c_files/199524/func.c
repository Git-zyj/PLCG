/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199524
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
    var_11 |= ((/* implicit */int) ((long long int) ((((/* implicit */int) ((-2515019005695944039LL) == (((/* implicit */long long int) 1079154142))))) << (((((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (var_7)))) - (111))))));
    var_12 |= ((/* implicit */int) var_0);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */long long int) arr_1 [i_0])) / (arr_2 [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_9) : (arr_2 [i_0])))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28817))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((long long int) -2515019005695944027LL));
                /* LoopSeq 3 */
                for (long long int i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0] [i_1] [i_1] [i_2] [i_2] [6ULL] = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) var_4)))))))), (arr_6 [i_3] [i_1] [i_1] [i_0])));
                    arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] [(signed char)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((((/* implicit */int) var_3)), (arr_10 [i_1])))))) ? (((max((var_10), (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_2])))) - (((/* implicit */long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) arr_3 [i_0]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))) : (var_0)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)920)))) : (arr_7 [i_0] [i_1]))))));
                }
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */int) (-(((((/* implicit */_Bool) (short)907)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (2515019005695944027LL)))));
                    arr_15 [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_13 [i_4] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_1))))));
                }
                for (long long int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((1582985771164445260ULL), (((/* implicit */unsigned long long int) (unsigned short)6))))) ? (arr_4 [i_5] [i_2] [i_1]) : (((((/* implicit */_Bool) arr_9 [i_1] [(_Bool)1] [i_2] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_2] [i_1] [i_5] [i_1])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_1] [i_5] [i_1]))))));
                    var_16 = ((/* implicit */signed char) arr_5 [i_2]);
                }
                var_17 &= ((/* implicit */_Bool) (unsigned char)152);
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_18 = ((((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [(signed char)18] [i_0])) ? (((((/* implicit */_Bool) (short)-1295)) ? (-2515019005695944042LL) : (((/* implicit */long long int) arr_13 [i_0] [i_1] [(signed char)3] [i_6])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_18 [i_6] [i_1] [i_0]))))))) + (9223372036854775807LL))) << (((((var_10) + (2161961082587272284LL))) - (1LL))));
                var_19 *= ((/* implicit */unsigned short) (-(((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) >= (var_0)))) | (((/* implicit */int) arr_16 [i_1] [i_0] [i_6] [i_1]))))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_2))));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) arr_1 [i_1]);
                            var_22 = ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_9] [i_8] [i_1] [i_1] [i_1] [i_0]))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)(-127 - 1)))));
                arr_29 [i_0] [i_0] [i_1] [14LL] = ((/* implicit */signed char) (-(((/* implicit */int) var_4))));
                /* LoopSeq 2 */
                for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    var_24 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_0] [i_10])) ? (var_6) : (var_8)));
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_7] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : ((-(var_0)))));
                    var_26 = ((/* implicit */unsigned int) arr_26 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_10]);
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_5)) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (1286238403)))))));
                }
                for (long long int i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        var_28 &= ((/* implicit */unsigned long long int) arr_27 [i_0] [i_0] [i_0]);
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(arr_2 [i_0])))))))));
                        var_30 = ((/* implicit */unsigned int) ((2515019005695944009LL) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_12] [i_1] [i_1] [i_1] [i_0])) ? (-1744924025) : (((/* implicit */int) (unsigned short)37218)))))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_1])) ? (arr_30 [i_1] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0])))));
                        var_32 *= ((/* implicit */int) (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_24 [i_11] [18] [i_11] [i_7] [i_1] [i_11])) : (var_2))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_7] [i_7] [i_7] [i_1])))))));
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_6 [i_0] [14] [i_11] [i_13]) ^ (((/* implicit */int) arr_16 [i_0] [i_0] [6U] [i_13]))))))))));
                    }
                    var_34 = ((/* implicit */unsigned long long int) 2515019005695944027LL);
                }
            }
            var_35 ^= ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ^ ((-(3211852774506389387ULL)))))));
            arr_39 [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) ((var_0) - (((/* implicit */long long int) ((int) var_3))))));
        }
    }
}
