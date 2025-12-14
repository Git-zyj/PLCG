/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44964
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] [i_1] = ((short) max((((/* implicit */long long int) min((((/* implicit */unsigned short) (short)(-32767 - 1))), (arr_2 [i_0])))), (var_12)));
                var_17 *= ((/* implicit */_Bool) ((unsigned short) min((var_15), (max((var_1), (((/* implicit */unsigned long long int) var_10)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) (~(-5822235861029013283LL)));
}
