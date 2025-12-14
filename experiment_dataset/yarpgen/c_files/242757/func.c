/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242757
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_10 += (!(((/* implicit */_Bool) 1661064586)));
                var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) (((-(arr_3 [i_1 + 1] [2]))) >= (min((-912763793), (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (_Bool)1))))))))))));
                var_12 = ((/* implicit */_Bool) arr_3 [i_0] [10]);
                arr_5 [i_1] = ((/* implicit */unsigned short) -912763821);
            }
        } 
    } 
    var_13 += (+((+(((/* implicit */int) (short)15242)))));
    var_14 = ((unsigned short) -912763821);
}
