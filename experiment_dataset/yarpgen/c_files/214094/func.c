/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214094
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_18 ^= ((/* implicit */long long int) arr_0 [i_0]);
                arr_4 [i_1] = arr_0 [i_0];
                var_19 -= ((/* implicit */unsigned int) arr_0 [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            {
                arr_10 [i_3] [i_2] [i_2] |= ((/* implicit */unsigned int) arr_7 [i_2]);
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) ((((/* implicit */long long int) arr_1 [(short)12])) >= (arr_3 [i_2] [i_3])))) : (max((arr_0 [(short)7]), (((/* implicit */int) arr_7 [i_3]))))))) ? ((~(-1412401059))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? ((+(arr_2 [i_3] [i_3] [i_2]))) : (arr_0 [i_2])))));
            }
        } 
    } 
}
