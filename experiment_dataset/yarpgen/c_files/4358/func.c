/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4358
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_2))));
                var_19 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) (unsigned short)14761))), ((unsigned short)14765)))), (((((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) + (var_4)))));
            }
        } 
    } 
    var_20 -= ((/* implicit */short) (+((~((+(var_0)))))));
    var_21 += ((/* implicit */unsigned int) -1);
}
