/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198604
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_2] [i_1] = ((/* implicit */short) (signed char)-116);
                    var_14 = ((/* implicit */signed char) min(((~((+(((/* implicit */int) var_3)))))), (((((/* implicit */int) arr_5 [i_2] [(short)6] [(short)6] [7U])) >> (((var_4) - (1686138339U)))))));
                    var_15 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (9223372036854775807LL) : (arr_3 [i_0 - 2]))) >> (((arr_3 [i_0 - 1]) & (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))));
                    var_16 -= ((/* implicit */unsigned int) ((long long int) min((268435455LL), (((/* implicit */long long int) var_4)))));
                }
            } 
        } 
    } 
    var_17 = var_8;
}
