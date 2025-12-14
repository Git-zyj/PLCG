/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202597
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned int) arr_0 [i_0]);
                var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [14])) & ((~(((/* implicit */int) arr_2 [i_0])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        for (int i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? ((~(((/* implicit */int) arr_7 [i_3] [i_3])))) : (((((/* implicit */_Bool) arr_9 [(short)12] [(short)12] [i_3])) ? (((/* implicit */int) arr_7 [(signed char)2] [(signed char)2])) : (((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) arr_10 [i_2] [i_3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_7 [i_3] [i_3 + 1])))) : (((((/* implicit */_Bool) arr_6 [i_2] [i_3 - 1])) ? (((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_9 [(short)10] [(unsigned short)18] [i_3])))) : (((/* implicit */int) arr_7 [i_2] [i_3 + 1])))))))));
                arr_11 [(unsigned short)12] |= var_7;
            }
        } 
    } 
}
