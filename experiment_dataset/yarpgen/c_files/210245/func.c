/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210245
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
    var_19 = ((/* implicit */signed char) min((var_15), (var_7)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) max((var_3), (var_3)))) >> (((((((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0)))) - (167))))), (((((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 3])) << (((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) - (10863)))))));
                var_20 = ((/* implicit */unsigned int) min((((((/* implicit */int) (short)-225)) * (min((arr_1 [i_0]), (((/* implicit */int) (unsigned char)29)))))), (((/* implicit */int) arr_0 [i_0]))));
                var_21 = ((/* implicit */short) (_Bool)1);
            }
        } 
    } 
}
