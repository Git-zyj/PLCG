/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236453
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
    for (unsigned char i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = max((((signed char) (signed char)98)), (var_0));
                arr_7 [i_0] = ((/* implicit */signed char) var_15);
                var_16 = 17701401510571579113ULL;
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_1))))));
}
