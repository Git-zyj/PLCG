/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239513
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
    var_18 -= ((/* implicit */long long int) ((unsigned short) ((max((((/* implicit */int) (unsigned short)45881)), (var_6))) + (((((/* implicit */int) var_7)) + (var_6))))));
    var_19 = ((/* implicit */long long int) ((int) max((((/* implicit */int) (_Bool)1)), (var_6))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */int) (~(((unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) arr_1 [(unsigned short)11])) : (arr_2 [i_0]))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_21 ^= ((/* implicit */unsigned long long int) arr_4 [i_0] [7ULL] [i_2]);
                    var_22 += ((/* implicit */signed char) ((unsigned char) 2083096622));
                    var_23 = (-(((/* implicit */int) arr_7 [i_0] [(signed char)1] [i_1])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] = ((/* implicit */unsigned int) arr_6 [i_3 - 2] [1] [i_3 - 1]);
                                var_24 = ((/* implicit */signed char) (~(arr_13 [i_4] [i_4] [i_3 - 1] [i_3 - 1] [(unsigned char)20] [i_3 - 2])));
                            }
                        } 
                    } 
                }
                for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    var_25 -= ((/* implicit */unsigned short) (((-(((long long int) var_9)))) / (max((((/* implicit */long long int) ((_Bool) arr_17 [i_0] [i_0] [i_0] [i_0]))), ((-(var_0)))))));
                    var_26 = ((/* implicit */short) ((int) max((arr_12 [i_5] [i_5] [i_1] [i_1] [i_0] [i_0] [i_0]), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_5] [(_Bool)1]))));
                    var_27 ^= ((/* implicit */signed char) arr_3 [i_0]);
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    var_28 += ((/* implicit */short) ((long long int) arr_17 [(_Bool)1] [i_1] [i_0] [i_0]));
                    arr_22 [i_1] [i_1] = ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_1] [i_6]);
                }
                for (unsigned long long int i_7 = 2; i_7 < 22; i_7 += 3) 
                {
                    var_29 -= ((/* implicit */long long int) 0U);
                    /* LoopNest 2 */
                    for (short i_8 = 1; i_8 < 22; i_8 += 2) 
                    {
                        for (short i_9 = 1; i_9 < 22; i_9 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) arr_5 [(signed char)4] [i_1] [i_7 - 2]))));
                                var_31 = ((/* implicit */_Bool) min((var_31), ((_Bool)0)));
                                var_32 = ((/* implicit */unsigned short) (unsigned char)184);
                            }
                        } 
                    } 
                    arr_34 [i_0] [i_1] [(short)6] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [3LL])) && (((/* implicit */_Bool) var_17)))))) > (((((/* implicit */unsigned long long int) var_6)) / (arr_2 [i_7])))))) << (((((((arr_2 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45885))))) - (8380ULL)))));
                    arr_35 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) max((((/* implicit */long long int) max((arr_7 [i_1] [2ULL] [i_1]), (((/* implicit */short) var_12))))), (arr_33 [i_7 + 2] [i_7 + 2] [i_1] [i_7] [i_7 - 1]))));
                }
            }
        } 
    } 
}
