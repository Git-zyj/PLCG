/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47202
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_2 [2U] &= ((/* implicit */long long int) arr_1 [6ULL] [i_0]);
        arr_3 [i_0] = 9223372035781033984LL;
    }
    for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
    {
        arr_6 [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) arr_1 [4U] [i_1 - 1]);
        var_12 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((((/* implicit */int) (signed char)-112)) % (((/* implicit */int) (signed char)-94))))) / ((-9223372036854775807LL - 1LL)))) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-102)))));
    }
    /* LoopNest 3 */
    for (signed char i_2 = 4; i_2 < 20; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 4) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_11 [i_2]) + (arr_10 [i_2] [i_4]))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 784021522062348524ULL)) && (((/* implicit */_Bool) arr_10 [i_2] [i_2]))))))))) && (((/* implicit */_Bool) 4261412864U))));
                    arr_14 [i_2] = ((/* implicit */unsigned int) arr_9 [14LL] [i_3] [i_2]);
                    var_14 = ((/* implicit */unsigned int) arr_11 [i_2]);
                }
            } 
        } 
    } 
}
