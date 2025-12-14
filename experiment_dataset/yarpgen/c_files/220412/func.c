/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220412
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
    for (signed char i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_0 - 3] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (~(arr_1 [i_0 + 3] [i_2])));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (-(((arr_5 [i_2] [i_1] [i_0 - 2]) ? (((/* implicit */int) (short)23253)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) arr_6 [i_1] [i_2]))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_12);
    var_15 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) 2147483647)), ((-(-5812845157686940132LL))))) * (((/* implicit */long long int) max((var_12), (min((var_9), (((/* implicit */int) var_0)))))))));
}
