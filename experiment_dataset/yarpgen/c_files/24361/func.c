/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24361
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_17 -= ((/* implicit */unsigned char) var_15);
                    var_18 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) var_2)) <= (-1222336861))))));
                    var_19 = ((/* implicit */short) ((min((var_12), (((/* implicit */long long int) var_6)))) | (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((/* implicit */long long int) (-(((/* implicit */int) var_10))))), (var_8))))));
}
