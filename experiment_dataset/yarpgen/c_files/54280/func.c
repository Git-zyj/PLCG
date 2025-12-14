/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54280
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) arr_4 [i_0] [i_0]);
                    var_10 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1544953585400305224LL)) ? ((~(((/* implicit */int) (unsigned short)41307)))) : (((/* implicit */int) (signed char)72))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 1; i_3 < 21; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned int) arr_8 [i_3]);
                var_12 = ((/* implicit */_Bool) (+((((~(-401044006394110275LL))) << (((((arr_9 [i_4]) + (1902386300))) - (51)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) var_3))));
}
