/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209672
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
    var_18 = ((/* implicit */signed char) min((var_18), ((signed char)16)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            arr_14 [i_0] [(unsigned char)0] [i_2] [(short)2] [i_0] = ((/* implicit */long long int) arr_0 [i_1 - 1] [i_1]);
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_2 - 4] [i_3] [i_4] [i_4 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)120))));
                        }
                        for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            var_20 += ((/* implicit */unsigned char) arr_11 [i_5] [i_3] [i_2] [i_2] [i_1] [i_0] [i_5]);
                            var_21 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
                        }
                        /* LoopSeq 4 */
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned int) (_Bool)1);
                            arr_21 [i_0] [i_3] [i_2] [i_1 - 4] [4ULL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))))) % (var_0)));
                            var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_11 [i_6] [i_0] [i_3 + 1] [0U] [i_6] [i_1 - 4] [2]) : (522240U)));
                        }
                        for (short i_7 = 4; i_7 < 14; i_7 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (+(2271120335U))))));
                            var_25 -= ((/* implicit */unsigned int) arr_19 [i_0] [i_1] [i_3] [i_7]);
                            var_26 = ((/* implicit */signed char) (-(((arr_17 [i_0] [i_0] [i_2] [i_3] [i_7]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned short i_8 = 1; i_8 < 14; i_8 += 1) /* same iter space */
                        {
                            arr_26 [5LL] [i_3 - 1] [i_3] [i_0] [(unsigned char)5] [i_3] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
                            var_27 = ((/* implicit */unsigned char) (unsigned short)1161);
                        }
                        for (unsigned short i_9 = 1; i_9 < 14; i_9 += 1) /* same iter space */
                        {
                            var_28 += ((/* implicit */unsigned char) arr_20 [(_Bool)1] [i_1] [i_1]);
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (+(((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) (signed char)-30)))))))));
                        }
                    }
                    for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 4) 
                    {
                        arr_33 [i_0] [i_2] [i_1] [i_10 - 1] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_10 + 1]))) : (9223372036854775807LL)));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) arr_31 [i_1 - 1] [i_1 - 3] [i_1 - 3] [i_2] [i_2] [12ULL])) / ((+(((/* implicit */int) arr_13 [2ULL] [i_1] [i_2 - 2] [i_2] [(signed char)12] [i_1] [i_0])))))))));
                        var_31 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_32 [i_0] [i_0])));
                        arr_34 [i_10] [i_0] [i_10] [i_10] [0] = ((/* implicit */unsigned char) var_1);
                    }
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (!(((var_2) != (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 3) 
        {
            for (long long int i_12 = 1; i_12 < 13; i_12 += 3) 
            {
                for (long long int i_13 = 2; i_13 < 14; i_13 += 4) 
                {
                    {
                        var_33 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_0] [i_11] [i_12] [i_11])))))));
                        arr_43 [i_0] [i_12 + 2] [i_0] = ((/* implicit */unsigned short) 2652194743U);
                        var_34 = ((/* implicit */unsigned short) (~((-(522240U)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 3) 
    {
        arr_46 [i_14] [i_14] = ((/* implicit */_Bool) (~(-1339336505)));
        /* LoopSeq 1 */
        for (signed char i_15 = 0; i_15 < 11; i_15 += 4) 
        {
            var_35 = ((/* implicit */unsigned int) (((((+(3459918192U))) & (arr_41 [i_14] [i_14] [i_15] [i_15] [i_14]))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775807LL))))))))));
            var_36 = ((/* implicit */_Bool) ((arr_35 [12ULL] [i_15] [(_Bool)1]) * (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)41882)))))))))));
        }
    }
    for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 2) 
    {
        arr_52 [i_16] = ((/* implicit */int) 2023846960U);
        arr_53 [i_16] |= ((/* implicit */int) max(((+(3408184370105954152LL))), ((~(arr_49 [i_16] [i_16])))));
        arr_54 [i_16] = ((/* implicit */_Bool) arr_50 [i_16] [i_16]);
    }
}
