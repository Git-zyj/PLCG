/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53531
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_1] &= var_6;
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_5), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_2 [i_0])))))) ? (((min((4294967295U), (((/* implicit */unsigned int) var_10)))) & (((/* implicit */unsigned int) ((/* implicit */int) ((6226970433490898082ULL) == (((/* implicit */unsigned long long int) arr_0 [i_0])))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33212))) <= (2324487543U)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            {
                var_13 |= ((/* implicit */short) arr_6 [i_3]);
                arr_11 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)32323)) - (((/* implicit */int) (signed char)-92)))))));
                var_14 = ((/* implicit */_Bool) arr_9 [i_2] [i_3]);
                var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2])) ? (min(((~(arr_7 [(short)12]))), (((/* implicit */long long int) arr_6 [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_3] [i_3])))));
            }
        } 
    } 
}
