/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22984
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */short) var_0);
                    arr_8 [i_1] = ((/* implicit */long long int) arr_6 [(_Bool)1] [i_1] [i_1]);
                    arr_9 [i_1] [i_1] = ((/* implicit */signed char) var_9);
                    var_11 = min((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) -7776664733952097006LL)))), ((_Bool)0));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 508985073)) ? (((2839512677U) ^ (((/* implicit */unsigned int) 837450297)))) : (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-12547))));
}
