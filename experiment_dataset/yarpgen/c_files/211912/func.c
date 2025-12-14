/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211912
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
    var_20 = ((/* implicit */long long int) (((~(var_1))) > (((/* implicit */unsigned long long int) (~(-1637497986))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25558))) / (arr_1 [i_0])))));
                arr_5 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) ^ (arr_1 [i_0]))), (max((arr_1 [i_0]), (arr_1 [i_0])))));
                var_21 = ((/* implicit */signed char) arr_1 [i_0]);
            }
        } 
    } 
}
