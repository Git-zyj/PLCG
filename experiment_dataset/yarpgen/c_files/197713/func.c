/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197713
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
    var_16 = ((/* implicit */unsigned short) var_10);
    var_17 = ((/* implicit */long long int) var_11);
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_8))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_2] = ((/* implicit */signed char) (~(min(((-2147483647 - 1)), (((/* implicit */int) var_0))))));
                    arr_7 [i_2] [i_2] = (~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))) + (4000534580U))));
                }
            } 
        } 
    } 
}
