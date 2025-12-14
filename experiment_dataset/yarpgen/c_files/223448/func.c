/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223448
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
    var_19 &= ((/* implicit */_Bool) 4294967295U);
    var_20 = ((/* implicit */_Bool) var_16);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_1 [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned short) arr_2 [i_0 + 1] [i_0 + 1])))))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) 4294967269U))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_2 = 2; i_2 < 9; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 4; i_4 < 9; i_4 += 4) 
                {
                    {
                        arr_13 [i_4] [i_3 - 1] [i_3 - 1] [i_2 + 2] [i_1 - 1] = ((/* implicit */short) (unsigned char)151);
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_23 ^= ((/* implicit */int) (+(((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_4 - 1])) ? (14151121445914713554ULL) : (((/* implicit */unsigned long long int) -1054702740))))));
                            arr_16 [i_5] [i_2 + 2] [i_3 - 1] [i_4 + 1] [i_5] [i_4] [i_2 + 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 1]))));
                            var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? ((-(4295622627794838061ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15)))))));
                            var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_1 - 1] [i_1]))));
                        }
                    }
                } 
            } 
            arr_17 [i_1] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_15 [i_2 - 1] [i_2] [i_2 + 1] [i_2] [i_1] [i_1] [i_1])) ? (arr_9 [i_1] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))));
        }
        for (short i_6 = 2; i_6 < 10; i_6 += 2) 
        {
            var_26 |= ((/* implicit */signed char) arr_6 [i_1]);
            arr_20 [i_6 - 2] [i_1 - 1] = ((/* implicit */_Bool) arr_10 [i_6 - 2] [i_6 - 1] [i_6] [i_6 + 1]);
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    {
                        arr_28 [i_9] [i_9] [i_8] [i_7] [i_9] [i_1 + 1] |= ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) 4294967295U)))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_7 - 1] [i_1 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_8] [i_8] [i_9])))))));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_7 - 1] [i_1])) ? (((/* implicit */int) arr_8 [i_1 - 1])) : (((((/* implicit */_Bool) arr_2 [i_1] [i_7 - 1])) ? (arr_27 [i_1] [i_7] [i_7] [i_7]) : (((/* implicit */int) var_9))))));
            var_29 = ((/* implicit */short) arr_6 [i_7]);
            var_30 -= ((/* implicit */unsigned char) var_1);
            arr_29 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_1 + 1])) ? (((/* implicit */int) arr_24 [i_7] [i_7] [i_7 - 1] [i_7])) : (((/* implicit */int) var_13))));
        }
        arr_30 [i_1] [i_1 + 1] &= ((/* implicit */unsigned long long int) ((signed char) arr_7 [i_1 - 1]));
    }
    for (unsigned short i_10 = 1; i_10 < 10; i_10 += 3) /* same iter space */
    {
        var_31 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)35966)) ? (((/* implicit */int) ((unsigned short) arr_27 [i_10] [(unsigned short)8] [i_10] [i_10 - 1]))) : (((/* implicit */int) arr_11 [i_10 - 1] [i_10 + 1])))));
        var_32 = ((/* implicit */unsigned int) var_15);
        arr_34 [i_10] = ((/* implicit */signed char) ((int) 232569902203036317ULL));
    }
}
