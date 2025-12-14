/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232277
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
    var_10 = ((/* implicit */signed char) min((((/* implicit */int) var_0)), ((-(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_8)))))))));
    var_11 = ((/* implicit */signed char) min((((/* implicit */long long int) var_0)), (var_8)));
    var_12 &= ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) max((var_13), (var_6)));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (2453756858154380915ULL)));
                }
            } 
        } 
    } 
}
