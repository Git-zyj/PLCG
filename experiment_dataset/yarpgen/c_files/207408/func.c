/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207408
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
    var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)31094), ((short)31094)))) ? ((~(var_4))) : (((/* implicit */long long int) max((var_19), (((/* implicit */int) var_3)))))))), (((var_7) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_18)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) (short)2047))));
                    var_21 = min((var_6), (((/* implicit */int) min((((var_6) >= (var_17))), (((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))))));
                }
            } 
        } 
    } 
    var_22 *= ((/* implicit */int) var_18);
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((unsigned long long int) (+((+(((/* implicit */int) (short)-31105))))))))));
}
