/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195721
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
    var_17 = var_8;
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))));
    var_19 &= ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((short) (+(var_15)))))));
                var_21 = ((/* implicit */unsigned long long int) (short)32386);
                var_22 = ((/* implicit */short) (+((-(((/* implicit */int) min(((short)27159), (((/* implicit */short) var_16)))))))));
            }
        } 
    } 
}
