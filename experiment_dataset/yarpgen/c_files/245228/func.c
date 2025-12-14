/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245228
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    arr_6 [i_0] [i_1 - 1] [i_2] = ((/* implicit */_Bool) var_15);
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)93)))))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_13) & (((((/* implicit */unsigned long long int) var_5)) | (var_4))))))));
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
    var_20 = ((/* implicit */unsigned long long int) var_8);
}
