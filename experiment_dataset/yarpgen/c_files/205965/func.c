/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205965
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
    var_13 *= ((/* implicit */unsigned char) max((var_12), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)(-127 - 1))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((arr_4 [i_0]), (((/* implicit */short) (signed char)(-127 - 1)))));
                var_14 -= ((/* implicit */int) arr_0 [i_1]);
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) (signed char)(-127 - 1));
}
