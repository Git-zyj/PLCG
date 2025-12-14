/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240838
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
    var_17 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) arr_5 [12] [i_1] [i_2]);
                    var_19 *= ((/* implicit */short) ((signed char) var_12));
                    var_20 = ((/* implicit */long long int) arr_2 [i_2] [i_0] [i_0]);
                    var_21 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_14))));
                }
            } 
        } 
    } 
    var_22 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (((long long int) (signed char)10))));
    var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_8))))))), (var_15)));
}
