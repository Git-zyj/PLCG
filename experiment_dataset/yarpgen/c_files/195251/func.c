/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195251
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */long long int) var_9)), (var_2))) : (((/* implicit */long long int) max(((+(var_10))), (var_3))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8U)) ? ((+(549747425280LL))) : (2370436466810049260LL)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [i_0 + 3] [(unsigned short)18] [i_1] [i_2] &= ((/* implicit */_Bool) ((unsigned short) min((((((/* implicit */_Bool) (unsigned short)57562)) ? (((/* implicit */long long int) ((/* implicit */int) (short)13181))) : (var_11))), (var_11))));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 2370436466810049258LL)) && (((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-32)), (var_1))))))), (((131071LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 3] [i_0 + 1] [i_0 - 3])))))));
                }
            } 
        } 
    } 
    var_15 &= ((/* implicit */unsigned short) var_0);
}
