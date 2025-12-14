/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235207
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */_Bool) 2147483637);
                arr_4 [i_1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (max((((/* implicit */int) (unsigned char)126)), (-2147483638))) : (((/* implicit */int) var_8))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */int) var_8))));
}
