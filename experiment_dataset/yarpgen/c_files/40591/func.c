/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40591
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) var_0);
                var_15 ^= ((/* implicit */unsigned int) ((arr_1 [i_0] [i_1]) || (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_16 -= ((/* implicit */_Bool) 4294967295U);
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 4) 
        {
            {
                var_17 = ((/* implicit */int) min((((var_8) ? (arr_10 [i_3 - 1] [i_3 + 2] [i_3 + 2]) : (arr_10 [i_3 + 1] [i_3 + 2] [i_3 - 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) arr_1 [i_2] [i_3])))) : (((/* implicit */int) arr_4 [i_2] [i_2] [i_2])))))));
                var_18 ^= ((/* implicit */_Bool) ((((long long int) ((arr_0 [i_2] [(short)13]) ^ (arr_0 [i_2] [i_2])))) << ((((+(((/* implicit */int) (unsigned short)58448)))) >> (((min((((/* implicit */unsigned long long int) var_9)), (arr_10 [i_2] [i_2] [i_2]))) - (1956229618ULL)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-110)) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)109)))))) - (((unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) (-(var_5)))))))));
}
