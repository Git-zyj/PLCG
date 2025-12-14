/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33227
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (+(((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) var_2)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) max((var_3), (((/* implicit */unsigned int) var_0))))) : (min((((/* implicit */long long int) var_1)), (26LL))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            arr_12 [(short)19] [i_1] [i_2] [i_0] [(unsigned short)22] [20LL] [i_0] = ((/* implicit */unsigned long long int) var_6);
                            var_16 = ((/* implicit */int) var_14);
                            var_17 = ((/* implicit */unsigned int) (+(var_11)));
                            arr_13 [4] [i_0] [12U] = ((/* implicit */signed char) ((((/* implicit */long long int) ((arr_1 [i_0] [i_0]) ? (arr_4 [i_2] [i_2] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(_Bool)1] [(signed char)17] [(_Bool)1] [(_Bool)1])))))) - (((arr_10 [(_Bool)1]) * (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3] [i_4])))))));
                        }
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [(unsigned char)7] [(unsigned char)7] [(unsigned char)20]))))) * (max((var_2), (((/* implicit */unsigned int) arr_0 [(short)12] [i_0]))))))) % ((-(arr_7 [(_Bool)1] [i_1 + 1] [i_2])))));
                        arr_14 [i_0] [i_1] [i_2] [1ULL] = ((/* implicit */signed char) ((int) min((arr_6 [i_0] [i_1 + 1] [i_3]), (max((arr_6 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_5)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                    {
                        arr_17 [i_0] [(_Bool)1] [13ULL] [(signed char)16] [(_Bool)1] = ((/* implicit */unsigned int) 2147483647);
                        /* LoopSeq 4 */
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            arr_21 [13] [i_1] [13] [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (var_2) : (0U)));
                            arr_22 [i_0] [16ULL] [i_2] [i_5] [9U] = ((/* implicit */_Bool) ((int) arr_1 [i_1 - 2] [i_1 + 1]));
                        }
                        for (int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            arr_25 [i_0] [i_1] [i_1] [2] [(short)9] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
                            var_19 = ((/* implicit */int) var_3);
                        }
                        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((int) arr_7 [i_1 - 2] [i_1 + 1] [i_1 - 1])))));
                            arr_29 [i_0] [i_1] [i_1] [i_0] [i_8] = ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]));
                            var_21 = ((/* implicit */unsigned long long int) ((var_12) % (((/* implicit */long long int) var_1))));
                        }
                        for (short i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            var_22 *= ((/* implicit */unsigned int) ((var_11) | (((/* implicit */unsigned long long int) var_2))));
                            arr_33 [i_0] [i_0] [i_0] [(unsigned short)11] [i_0] [(_Bool)1] = -1824805373;
                        }
                        var_23 = ((/* implicit */unsigned short) ((unsigned long long int) arr_0 [i_1 + 1] [i_0]));
                        arr_34 [(unsigned short)13] [i_0] [13] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_1 + 2]))) - (arr_4 [i_1 - 2] [i_1] [i_1 + 1])));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        for (signed char i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            {
                                arr_40 [i_0] [i_1] = ((/* implicit */unsigned short) arr_6 [i_0] [i_1] [14LL]);
                                arr_41 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (~(((((/* implicit */_Bool) 10671008535620180728ULL)) ? (((/* implicit */int) arr_20 [i_0] [i_0])) : (((/* implicit */int) var_5)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
