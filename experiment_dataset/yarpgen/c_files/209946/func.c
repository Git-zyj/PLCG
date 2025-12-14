/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209946
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
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (var_6)))) ? ((~(((unsigned int) 85664632U)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_8 [i_0] = ((/* implicit */int) (-(min((((/* implicit */unsigned int) (short)-9818)), (arr_0 [i_0])))));
                var_15 = ((/* implicit */unsigned short) arr_0 [i_0]);
                var_16 = ((/* implicit */unsigned int) max((var_16), (max((arr_3 [(short)6]), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))));
                arr_9 [i_0] [i_0] = ((/* implicit */_Bool) min((min((var_9), (0U))), (((/* implicit */unsigned int) ((_Bool) arr_5 [i_0] [i_0 + 1] [i_0])))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((int) (unsigned short)47075));
}
