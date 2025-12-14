/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24924
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
    var_10 += ((/* implicit */unsigned int) max((((((/* implicit */int) var_6)) * (((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned short) var_0))))))))));
    var_11 *= ((/* implicit */signed char) ((min((((/* implicit */long long int) min((((/* implicit */unsigned short) (short)16749)), (var_1)))), (var_3))) / (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) arr_4 [i_1] [i_0] [i_0])), (min((((/* implicit */unsigned short) arr_5 [i_1 - 1] [i_0])), (max((var_5), (((/* implicit */unsigned short) var_6))))))));
                var_13 += (_Bool)1;
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) min((min((min((var_3), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) (-(((/* implicit */int) var_7))))))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_0)))))));
}
