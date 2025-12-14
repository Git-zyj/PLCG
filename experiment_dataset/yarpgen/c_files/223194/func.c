/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223194
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */signed char) arr_2 [i_0]);
        var_20 = ((/* implicit */_Bool) var_1);
    }
    var_21 = ((/* implicit */_Bool) 471716874U);
    /* LoopNest 3 */
    for (short i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_4))));
                    arr_11 [i_1] |= ((/* implicit */short) (-(((/* implicit */int) (unsigned short)62907))));
                    arr_12 [i_1 - 2] [i_2] [(unsigned short)11] = ((/* implicit */long long int) arr_4 [i_1]);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) var_18);
    var_24 = var_11;
}
