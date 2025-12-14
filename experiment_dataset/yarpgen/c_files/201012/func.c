/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201012
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_2))))));
                    var_11 &= ((/* implicit */unsigned char) -1718238366);
                }
            } 
        } 
    } 
    var_12 = (-(min((((((/* implicit */unsigned long long int) -1718238366)) + (var_0))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))))));
    var_13 = ((/* implicit */unsigned short) -1015358318);
    var_14 = ((/* implicit */long long int) var_5);
}
