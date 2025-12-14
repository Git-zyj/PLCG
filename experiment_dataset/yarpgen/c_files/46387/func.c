/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46387
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
    var_15 = ((/* implicit */short) -5291126522713925254LL);
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_6))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) ((int) (-(5291126522713925254LL))));
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (short)-10936))));
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 2756392890552500695LL))))), (var_9))))) : (var_2)));
}
