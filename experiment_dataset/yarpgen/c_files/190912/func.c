/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190912
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
    var_14 = ((/* implicit */unsigned int) var_6);
    var_15 = ((/* implicit */signed char) var_9);
    var_16 *= ((/* implicit */unsigned int) (+(min((((int) 2211124847U)), ((-(((/* implicit */int) var_12))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))))), (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned int) arr_2 [i_0] [i_1])), (967425527U)))))) : (967425527U)));
                var_18 = ((/* implicit */signed char) ((long long int) min((var_6), (((/* implicit */int) ((arr_0 [i_0] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4)))))))));
            }
        } 
    } 
}
