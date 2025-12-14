/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29961
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
    var_11 = ((/* implicit */unsigned char) ((((-2112122025) + (2147483647))) << (((((/* implicit */int) (unsigned short)60162)) - (60162)))));
    var_12 = ((/* implicit */unsigned long long int) var_6);
    var_13 = var_4;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) max(((~((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) arr_2 [i_0] [i_1]))));
                var_14 = ((/* implicit */long long int) var_7);
            }
        } 
    } 
}
