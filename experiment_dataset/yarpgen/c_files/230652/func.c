/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230652
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
    var_20 = ((/* implicit */int) var_10);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) var_16);
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) -1))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_4 [i_0 - 1] [i_0 + 1]);
                }
            } 
        } 
    } 
    var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_7))));
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 17; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 17; i_7 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) ((long long int) ((var_16) ^ (arr_18 [i_6 - 1] [i_3] [i_6 - 1]))));
                                var_25 = var_0;
                                arr_24 [i_7 + 2] [i_6 + 1] [(_Bool)1] [i_3] [(_Bool)1] [i_3] [i_3] |= arr_15 [(short)14] [i_4] [(short)14] [(short)14];
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */_Bool) max(((+(max((((/* implicit */long long int) arr_12 [i_3] [i_3])), (arr_20 [i_3] [i_3] [i_3] [i_3] [i_3]))))), (((/* implicit */long long int) var_2))));
                }
            } 
        } 
    } 
}
