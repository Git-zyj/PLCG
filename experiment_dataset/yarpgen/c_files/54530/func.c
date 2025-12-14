/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54530
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
    var_13 = ((/* implicit */int) (unsigned short)22);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] [(short)16] &= ((/* implicit */signed char) 2407345369U);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_14 += ((/* implicit */short) ((arr_10 [i_0] [i_1] [i_2] [i_4]) / (((((arr_13 [i_0] [i_0] [i_0] [(unsigned char)15] [(unsigned char)15] [i_0] [i_0]) >= (((/* implicit */int) arr_3 [(unsigned char)20])))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3] [i_4])))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [21] [i_3] = ((/* implicit */int) min((((/* implicit */unsigned int) max((var_9), (((((/* implicit */_Bool) arr_4 [i_4] [i_4])) ? (-1448532080) : (((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) var_9)) ? (arr_8 [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_1) < (0U))))) <= (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)53119)), (arr_13 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) (+(25)))) : (arr_8 [i_0] [1ULL])))));
            }
        } 
    } 
}
