/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28339
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
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_1] = var_5;
                var_14 = (short)-18640;
            }
        } 
    } 
    var_15 = ((/* implicit */short) min((((min((4404909877473734013LL), (((/* implicit */long long int) (short)18615)))) & (min((var_3), (((/* implicit */long long int) (short)-1)))))), (min((min((((/* implicit */long long int) (short)21324)), (var_4))), (((/* implicit */long long int) (~(((/* implicit */int) (short)-18640)))))))));
    var_16 = min(((-(((((/* implicit */long long int) ((/* implicit */int) (short)-4223))) + (var_4))))), (((/* implicit */long long int) min((min(((short)-14362), ((short)-7960))), ((short)8632)))));
}
