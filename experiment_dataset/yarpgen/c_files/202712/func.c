/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202712
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
    var_10 = ((/* implicit */unsigned long long int) var_3);
    var_11 &= ((/* implicit */short) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((var_5) * (((/* implicit */int) arr_0 [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) arr_5 [i_1 + 3] [i_1 + 1] [i_1 + 1] [(unsigned char)16]);
                                var_14 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_0] [i_0] [i_0] [i_3]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))) | (arr_2 [i_0]))));
                                var_15 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned char) ((signed char) var_6))));
                                var_16 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
                            }
                        } 
                    } 
                    arr_11 [i_0] [i_1] [(short)1] [i_0] |= var_8;
                }
            } 
        } 
    } 
}
