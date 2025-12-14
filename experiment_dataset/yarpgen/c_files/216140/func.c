/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216140
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
    var_15 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) (_Bool)0);
                arr_5 [i_0] [i_1] [(unsigned char)11] = ((/* implicit */long long int) 1315435727U);
                arr_6 [i_1] = ((/* implicit */_Bool) var_12);
                var_17 = ((/* implicit */int) min((((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), (((short) (_Bool)1))))), (min((((/* implicit */long long int) ((int) arr_1 [i_0] [i_0]))), (max((arr_3 [(_Bool)1] [i_1]), (((/* implicit */long long int) var_10))))))));
                arr_7 [i_0] [i_0] [i_0] = (_Bool)1;
            }
        } 
    } 
}
