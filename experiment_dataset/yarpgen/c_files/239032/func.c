/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239032
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((unsigned char) (+(560113995)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 4) 
            {
                arr_9 [10LL] [10LL] = ((/* implicit */_Bool) ((arr_6 [i_0 + 2]) ? (((/* implicit */int) arr_6 [i_0 + 2])) : (((/* implicit */int) var_13))));
                arr_10 [i_1 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_0 + 3] [i_0 - 2] [(unsigned char)20])) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_0 + 4] [i_0 + 4])))));
            }
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                arr_15 [i_3] = ((/* implicit */_Bool) var_5);
                /* LoopSeq 1 */
                for (unsigned short i_4 = 3; i_4 < 22; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 2; i_5 < 22; i_5 += 4) 
                    {
                        arr_21 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0 + 3] [i_0 + 3])) ? (((/* implicit */int) (unsigned short)28493)) : (((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) ((var_12) == (var_3))))));
                        arr_22 [i_0] [i_0] [i_0] [i_0] [(signed char)9] [i_4 - 1] [i_0] = ((/* implicit */signed char) var_13);
                    }
                    /* LoopSeq 2 */
                    for (short i_6 = 1; i_6 < 24; i_6 += 4) 
                    {
                        arr_25 [i_0 + 3] [i_4 - 1] [i_0 + 3] [(unsigned short)24] [i_0 + 3] = ((/* implicit */unsigned long long int) (unsigned short)28477);
                        arr_26 [(short)21] [(short)21] [(short)21] [(short)21] [i_4 - 1] [i_4 - 2] [i_4 - 2] = ((/* implicit */unsigned long long int) ((int) arr_24 [i_6 - 1] [i_6 + 1] [i_6] [i_6] [i_6 - 1] [i_6] [i_6]));
                    }
                    for (short i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)37063)) && (((/* implicit */_Bool) (signed char)104))));
                        var_17 = ((/* implicit */int) var_1);
                        var_18 = ((/* implicit */int) (+(arr_0 [i_0])));
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (-(arr_14 [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    arr_30 [i_3] [11] = ((/* implicit */unsigned short) arr_13 [i_0 + 1] [20LL] [20LL] [20LL]);
                    arr_31 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) arr_29 [i_0 - 1] [i_1] [i_1 - 1] [i_4 - 3] [i_4 - 3]));
                }
                var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0 + 1]))));
            }
            for (int i_8 = 1; i_8 < 23; i_8 += 4) 
            {
                arr_35 [i_0 - 1] [i_8] [i_0 - 1] = arr_23 [i_0 + 1] [i_0] [i_0 + 1] [i_1 + 3] [i_8];
                /* LoopNest 2 */
                for (short i_9 = 1; i_9 < 22; i_9 += 4) 
                {
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_8))));
                            var_22 = (+(((/* implicit */int) arr_34 [i_1] [i_1] [i_9 - 1] [i_1])));
                            arr_43 [i_0] [i_0] [i_0 - 2] [i_8] [i_0 + 1] [(unsigned short)2] [i_0 + 3] = ((/* implicit */short) arr_3 [i_0]);
                            arr_44 [i_8] [i_1] [i_1] = ((/* implicit */short) ((long long int) arr_23 [23U] [i_10] [i_8 + 2] [i_9 - 1] [i_8 + 2]));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_48 [i_0] [i_8] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37069)) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) (unsigned short)37055))));
                    arr_49 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_0])) ? (((/* implicit */int) arr_32 [i_0])) : (((/* implicit */int) arr_32 [i_0]))));
                    arr_50 [i_8] [(_Bool)1] [(_Bool)1] [8] [8] [12] = ((/* implicit */short) ((arr_13 [i_1] [6U] [i_1 + 3] [6U]) << (((/* implicit */int) arr_18 [i_0] [i_0] [i_0 - 2] [i_8 + 2] [i_0 - 2]))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                {
                    var_23 = ((/* implicit */signed char) (~(arr_13 [i_1 + 3] [(unsigned char)0] [(unsigned char)0] [i_8 - 1])));
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [8ULL] [i_8 + 2] [i_8 - 1] [i_0 + 3])) ? (((/* implicit */int) arr_38 [i_8 - 1] [i_0 + 3] [i_8 - 1] [i_0 + 3])) : (((/* implicit */int) arr_38 [24U] [5LL] [i_8 + 2] [i_0 - 1])))))));
                    var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */int) var_0)) >> ((-(((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1]))))))));
                }
            }
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((int) ((short) arr_3 [i_1]))))));
        }
        for (int i_13 = 2; i_13 < 22; i_13 += 1) 
        {
            arr_57 [i_0] [i_0] = ((/* implicit */int) (((_Bool)1) || ((_Bool)1)));
            arr_58 [i_0] [i_0] = ((/* implicit */int) 8112364738935435844ULL);
        }
        arr_59 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -2612350623795737512LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 2]))));
        var_27 += ((((/* implicit */_Bool) arr_42 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_42 [i_0 - 2] [i_0])) : (((/* implicit */int) arr_42 [i_0 - 1] [i_0 - 1])));
    }
}
