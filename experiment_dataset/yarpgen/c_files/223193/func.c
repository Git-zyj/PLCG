/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223193
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
    var_16 = ((/* implicit */long long int) var_4);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_3 [(unsigned short)2] = ((/* implicit */short) ((((/* implicit */long long int) (-(970354398U)))) / (((((/* implicit */_Bool) (short)8128)) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) arr_2 [i_0 - 1] [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((arr_2 [i_0 + 1] [i_0 + 2]) + (2147483647))) << (((((arr_2 [i_0 - 2] [i_0 + 3]) + (1385700390))) - (27))))), (((((/* implicit */int) arr_1 [i_0] [i_0 - 1])) >> (((((/* implicit */int) arr_1 [i_0] [i_0 + 3])) - (40374)))))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) (short)23884);
    }
    var_17 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopNest 2 */
    for (short i_1 = 3; i_1 < 14; i_1 += 2) 
    {
        for (int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            {
                arr_12 [i_1] [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 22389897)) || (((/* implicit */_Bool) 0)))), ((!((!(((/* implicit */_Bool) arr_8 [i_2] [i_1 - 1]))))))));
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    arr_15 [15ULL] [i_3] [(_Bool)0] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 1]))) << ((((-(((/* implicit */int) max((arr_6 [i_3]), (arr_6 [i_1])))))) + (55746)))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        arr_20 [10ULL] [(_Bool)1] [i_3] [i_2] [(_Bool)1] = ((/* implicit */unsigned char) (short)24792);
                        arr_21 [i_1 - 3] [i_1 - 3] [i_3 + 1] [i_1] [i_3] [i_3 + 1] |= ((/* implicit */unsigned long long int) (+(var_15)));
                        arr_22 [(signed char)13] = ((/* implicit */unsigned char) 22U);
                        arr_23 [i_1] [i_1 - 1] [(unsigned char)14] [i_1 + 1] [(short)12] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) (short)25424));
                        arr_24 [i_1 - 2] [i_3] [i_2] [i_1 - 2] = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_1 - 3] [i_2] [8U]))))));
                    }
                    for (unsigned char i_5 = 1; i_5 < 15; i_5 += 4) 
                    {
                        arr_28 [i_1] [i_2] [i_1] [i_3 + 1] [i_5] [7] = ((/* implicit */unsigned int) min((((/* implicit */int) ((2147483643) <= (871250500)))), ((+(((((/* implicit */_Bool) arr_18 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                        arr_29 [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) (unsigned short)43228);
                        arr_30 [i_1] [i_5] [i_5] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((arr_17 [i_2] [i_2] [i_3] [i_2] [i_5] [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [(short)2] [i_3 + 1] [(_Bool)1] [(_Bool)1] [(signed char)4] [i_3 + 1])))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) : ((~(var_1))))), (((/* implicit */unsigned int) ((unsigned short) arr_9 [i_1 + 3] [i_1])))));
                        arr_31 [i_5] = ((/* implicit */long long int) ((-1472333863) - (((/* implicit */int) ((13721139006402429162ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)51))))))));
                    }
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        arr_34 [i_1 + 1] [i_1] [i_1] = (unsigned short)19861;
                        arr_35 [i_1] [i_2] = ((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */long long int) ((/* implicit */int) min((max(((short)15735), (((/* implicit */short) (signed char)20)))), (((/* implicit */short) (signed char)-77)))))) : (((((-2737338520568536043LL) + (9223372036854775807LL))) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
                        arr_36 [i_1] [i_1] [(unsigned short)6] [i_1] [i_1] = max((var_14), (var_13));
                    }
                    arr_37 [i_1] [i_2] [8U] [(_Bool)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((max((var_9), (7081595578921466941LL))) & (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)0))))))))));
                    arr_38 [i_1] = ((/* implicit */unsigned int) ((unsigned short) max((1461985905U), (((/* implicit */unsigned int) (short)19739)))));
                }
            }
        } 
    } 
}
