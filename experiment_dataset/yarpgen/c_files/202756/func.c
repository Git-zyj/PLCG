/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202756
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) arr_3 [i_0]))));
                arr_6 [i_0] [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) ((_Bool) arr_5 [i_0])))) > (((/* implicit */int) arr_3 [i_1]))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_2);
    var_18 = ((/* implicit */_Bool) ((signed char) ((unsigned char) ((var_6) / (var_10)))));
}
