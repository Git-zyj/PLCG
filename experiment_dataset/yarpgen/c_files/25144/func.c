/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25144
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) 4294967273U)) ? (((/* implicit */unsigned int) 1323381507)) : (4294967295U))) : (var_0)));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned long long int) var_4);
                var_20 += ((/* implicit */int) ((((/* implicit */_Bool) 2147483628)) ? (23U) : (((/* implicit */unsigned int) 1535021119))));
            }
        } 
    } 
}
