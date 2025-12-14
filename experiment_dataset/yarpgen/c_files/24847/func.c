/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24847
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
    var_12 = (!(((/* implicit */_Bool) (~((~(var_7)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) (~((-((-(((/* implicit */int) (signed char)-65))))))));
                var_14 = ((/* implicit */_Bool) (~((~((~(var_2)))))));
                var_15 = ((/* implicit */long long int) (-((+((-(((/* implicit */int) (short)-30160))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) min((var_16), ((~((-((~(((/* implicit */int) var_4))))))))));
}
