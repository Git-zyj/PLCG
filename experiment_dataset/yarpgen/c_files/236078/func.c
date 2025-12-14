/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236078
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
    var_13 = ((/* implicit */int) var_7);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_2] [i_1] [i_0] = ((/* implicit */int) ((long long int) 4260305805U));
                    var_14 |= ((/* implicit */int) ((((((5LL) * (((/* implicit */long long int) 2147483637)))) != (((/* implicit */long long int) var_4)))) ? (var_3) : (((/* implicit */unsigned long long int) -5))));
                }
            } 
        } 
    } 
}
