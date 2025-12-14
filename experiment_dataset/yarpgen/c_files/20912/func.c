/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20912
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
    var_20 = ((((/* implicit */long long int) (-(min((((/* implicit */unsigned int) var_4)), (var_9)))))) > (((min((((/* implicit */long long int) var_3)), (4767801900998691824LL))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)5))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0 + 2] = (signed char)41;
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) var_13);
            }
        } 
    } 
}
