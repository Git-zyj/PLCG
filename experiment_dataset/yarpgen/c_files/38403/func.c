/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38403
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) max((9223372036854775800LL), (((/* implicit */long long int) ((unsigned char) arr_2 [i_0] [i_0])))));
        /* LoopSeq 1 */
        for (long long int i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 2; i_2 < 18; i_2 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        arr_13 [i_3] [i_1 - 1] [i_2 + 1] [i_3] [i_4] = 9223372036854775807LL;
                        var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_2 + 1] [i_1 - 1] [i_0]))))) ? (((long long int) arr_12 [i_4] [i_2] [i_0] [i_1 + 1] [i_1])) : (arr_12 [i_4] [i_1 - 1] [i_0] [i_1 - 1] [i_1])));
                    }
                    arr_14 [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) (~((~(max((arr_2 [i_3] [i_2]), (((/* implicit */unsigned long long int) (unsigned char)127))))))));
                    arr_15 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */int) arr_12 [i_0] [i_3] [i_3] [i_3] [i_1]);
                }
                for (long long int i_5 = 3; i_5 < 17; i_5 += 3) 
                {
                    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((((((arr_17 [i_1] [i_1]) + (9223372036854775807LL))) << (((max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0])))) - (18446744073709547077ULL))))), (arr_1 [i_0]))))));
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((576460752303423487LL) + ((-(-7719018143779832313LL))))))));
                    arr_18 [i_5] [i_2] [i_1] [i_0] = ((/* implicit */long long int) 1888792383U);
                    var_16 = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_3))))) - (((((/* implicit */_Bool) (short)-6988)) ? (arr_12 [i_2] [i_2 - 1] [i_2] [i_2] [i_5 + 1]) : (arr_12 [i_0] [i_0] [i_1] [i_0] [i_0])))));
                }
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_9 [i_2 - 2] [i_1 - 4]), (((/* implicit */long long int) max((var_7), (((/* implicit */int) arr_3 [i_1])))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)21933)) ? (((/* implicit */int) (signed char)19)) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)56960))))))) : (((long long int) (_Bool)1))));
                var_18 = ((/* implicit */signed char) (short)21940);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                {
                    var_19 *= ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_1 - 2] [i_1] [i_1 - 3] [i_0]))));
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                }
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
                {
                    arr_25 [i_0] = ((/* implicit */int) (unsigned char)224);
                    var_21 = ((/* implicit */int) (-(9223372036854775800LL)));
                }
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max(((((+(((/* implicit */int) (short)2334)))) << ((((((_Bool)1) ? (2406174933U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) - (2406174919U))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2] [i_2 - 1]))))))))));
            }
            for (long long int i_8 = 2; i_8 < 18; i_8 += 4) /* same iter space */
            {
                arr_28 [i_0] [i_1] = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0]))))));
                /* LoopSeq 1 */
                for (unsigned char i_9 = 2; i_9 < 17; i_9 += 1) 
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((int) ((unsigned int) var_11)))) * (0LL)));
                    /* LoopSeq 2 */
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (-(((min((arr_22 [i_10] [i_9] [i_0] [i_1] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1207579105) == (((/* implicit */int) arr_3 [i_1])))))))))))));
                        var_25 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((/* implicit */int) var_4)), ((~(((/* implicit */int) var_1))))))), ((((_Bool)1) ? (arr_21 [i_1 + 1] [i_9 - 2] [i_8] [i_9] [i_8 - 2]) : (arr_21 [i_1 - 1] [i_9 - 1] [i_8] [i_9] [i_8 - 1])))));
                        var_26 = ((/* implicit */unsigned char) ((int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_27 [i_8 + 1] [i_8 - 2])))));
                    }
                    for (long long int i_11 = 0; i_11 < 20; i_11 += 4) /* same iter space */
                    {
                        var_27 += ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-58))));
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) arr_9 [i_11] [i_1]))));
                    }
                    var_29 = ((/* implicit */long long int) ((unsigned char) arr_20 [i_0] [i_0] [i_1] [i_0] [i_9] [i_9]));
                }
            }
            for (int i_12 = 1; i_12 < 19; i_12 += 4) 
            {
                arr_39 [i_0] [i_1] [i_12] [i_12] = ((/* implicit */_Bool) (~((-(var_5)))));
                arr_40 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1 + 2] [i_1 + 2] [i_1] [i_1])) ? (arr_22 [i_1] [i_1] [i_1 - 3] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
            }
            var_30 = ((/* implicit */int) ((signed char) -6626875745973405197LL));
        }
    }
    var_31 = ((/* implicit */long long int) var_6);
}
