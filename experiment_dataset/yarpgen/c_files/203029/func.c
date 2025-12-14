/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203029
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
    var_11 |= ((/* implicit */unsigned char) var_9);
    var_12 = ((/* implicit */long long int) var_7);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_2] [i_1])), (2581159138U)))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_2]))))))) : (((((/* implicit */int) arr_6 [i_1] [i_0 - 1] [i_2])) + (((/* implicit */int) (signed char)68))))));
                    arr_8 [i_1 + 2] [19U] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1 + 2] [i_0 + 1])) - (((/* implicit */int) ((signed char) arr_1 [i_1 + 1] [i_0 - 1])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_12 [i_2] [i_1 + 2] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_4);
                        arr_13 [i_1] = ((/* implicit */unsigned char) arr_6 [i_1] [i_1] [i_1]);
                    }
                    var_13 = ((/* implicit */_Bool) max((-7356170151284336503LL), (((/* implicit */long long int) arr_6 [i_1] [i_0] [i_1]))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_2] [i_5] [i_1] = ((/* implicit */unsigned short) max((var_6), (((/* implicit */unsigned long long int) arr_16 [i_5] [i_1] [i_2] [i_5] [i_5]))));
                                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) max((arr_4 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_1 [i_0 + 3] [i_0 + 3])))))) ? (((((/* implicit */long long int) ((unsigned int) arr_15 [i_0 + 2] [i_1] [i_2] [i_0] [i_5] [i_1]))) + (max((arr_16 [i_0 + 1] [i_1] [i_2] [i_1] [i_5]), (((/* implicit */long long int) (unsigned short)37937)))))) : (((/* implicit */long long int) min((((/* implicit */int) (signed char)-6)), ((~(((/* implicit */int) (unsigned char)196)))))))));
                                arr_20 [i_0] [i_2] [i_2] [(unsigned char)12] [i_5] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_10 [i_1] [i_5] [i_2] [i_0] [i_5] [i_0])) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))))))) ? ((-(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)21)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
