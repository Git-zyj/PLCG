/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21283
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
    var_16 = var_11;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_5 [20] [i_0] [20])))))));
                    var_18 *= ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [12U] [i_2])) == (((/* implicit */int) arr_7 [i_0] [(short)22] [i_2]))))), (1127851274331734545LL)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) % (3ULL)))) ? (((/* implicit */long long int) (-(1836830974)))) : (max((var_0), (((/* implicit */long long int) var_7)))))) > (((/* implicit */long long int) ((/* implicit */int) var_7)))));
}
