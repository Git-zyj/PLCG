/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43059
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                var_16 = ((/* implicit */int) ((unsigned int) arr_2 [i_0 + 3] [i_0 + 3]));
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_4 = 1; i_4 < 21; i_4 += 3) /* same iter space */
                    {
                        arr_15 [i_0] [i_3] = ((/* implicit */unsigned int) 411099951);
                        var_17 = ((/* implicit */unsigned char) 21LL);
                    }
                    for (unsigned char i_5 = 1; i_5 < 21; i_5 += 3) /* same iter space */
                    {
                        var_18 = ((/* implicit */_Bool) arr_13 [i_0] [i_0 + 3] [i_3] [i_0 + 1] [i_0 + 3] [19] [5ULL]);
                        arr_18 [i_0] [i_3] [i_0] [i_0 + 1] = ((arr_5 [i_0 + 2] [i_5 - 1]) ? (((/* implicit */int) arr_11 [i_0 - 1] [i_5 - 1] [i_2] [i_3] [i_5] [i_3])) : (((/* implicit */int) (short)-6429)));
                        arr_19 [20] [20] [20] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_5 + 1] [i_5 + 1] [i_3] [i_5 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 3])) : (((/* implicit */int) var_4))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_3] [i_0 + 2] [i_0 + 2] [i_3])) ? (((/* implicit */int) arr_8 [i_3] [i_0 + 2] [i_0] [i_3])) : (((/* implicit */int) arr_8 [i_3] [i_0 + 2] [i_0] [i_3]))));
                    }
                    for (unsigned char i_6 = 1; i_6 < 21; i_6 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -597607541)) ? (((((/* implicit */_Bool) (unsigned short)56817)) ? (((/* implicit */int) arr_11 [(short)20] [i_1 + 3] [i_2] [i_3] [i_6] [i_1 + 3])) : (((/* implicit */int) arr_4 [(signed char)9] [i_1])))) : (((((/* implicit */_Bool) 411099951)) ? (arr_9 [i_6] [i_6] [i_2] [i_3] [i_3]) : (((/* implicit */int) var_6))))));
                        arr_22 [i_0] [(unsigned char)9] [i_3] [i_0] [i_2] = ((/* implicit */short) arr_3 [i_0 + 3] [i_3]);
                        arr_23 [i_1] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
                    }
                    var_21 = ((/* implicit */int) max((var_21), (597607555)));
                    var_22 = ((((/* implicit */int) arr_17 [i_3] [i_0 + 1])) * (((/* implicit */int) arr_17 [i_3] [i_0 + 3])));
                }
                arr_24 [i_0 - 1] [i_0] [i_0 + 2] [14ULL] = ((/* implicit */long long int) ((arr_1 [i_0] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 3] [(short)1]))) : (arr_10 [i_2] [i_1] [i_0 - 1] [i_1 + 3])));
                var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [(short)3] [i_0 + 2]))));
            }
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                var_24 ^= ((/* implicit */unsigned char) 4294967295U);
                arr_28 [i_0 - 1] [i_1] [i_1] &= ((/* implicit */unsigned long long int) (-(762020822)));
            }
            for (unsigned short i_8 = 2; i_8 < 20; i_8 += 4) 
            {
                arr_31 [i_0 + 2] [i_1 + 1] [i_8 + 1] = ((/* implicit */_Bool) ((unsigned char) 171787723));
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1 + 4] [i_8 + 2])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_14))));
            }
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) << (((var_11) - (2976190513U)))));
        }
        var_27 = ((/* implicit */short) arr_11 [(unsigned char)10] [8U] [i_0] [(unsigned short)18] [i_0] [i_0]);
    }
    var_28 = (unsigned char)15;
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
    {
        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            {
                arr_36 [i_9] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) arr_26 [i_9]))))) * (arr_34 [i_10] [i_9]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_9] [i_9] [i_9] [i_10])) ? ((+(((/* implicit */int) (unsigned char)198)))) : (((/* implicit */int) (unsigned short)14644)))))));
                arr_37 [i_9] [i_9] [i_10] = ((/* implicit */unsigned int) max((min((arr_6 [i_9] [i_9] [i_9] [i_9]), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)10))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) 945914588)) : (228939933U))))));
                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)3892)) >> ((((~(228939933U))) - (4066027333U))))))));
                arr_38 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned char) var_0))))) ? (((/* implicit */long long int) min((max((171787732), (((/* implicit */int) var_8)))), ((+(((/* implicit */int) var_6))))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)17)) ? (-597607541) : (((/* implicit */int) var_3))))) : (((((/* implicit */long long int) -1159024872)) / (4747328286465863505LL)))))));
                arr_39 [9LL] [i_10] [i_9] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)0)), (171787706)));
            }
        } 
    } 
}
