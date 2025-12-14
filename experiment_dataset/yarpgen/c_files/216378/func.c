/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216378
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
    var_14 = ((((min((var_1), (var_12))) ^ (var_2))) & (var_5));
    var_15 = max((max((((((/* implicit */_Bool) 437388851)) ? (-596367670) : (1973208183))), (((-925729655) | (var_11))))), (((min((1724432802), (var_2))) / (((((/* implicit */_Bool) var_6)) ? ((-2147483647 - 1)) : (-949222373))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */_Bool) min(((-(var_12))), (min((arr_4 [i_1 + 2] [i_1]), (arr_2 [i_0 - 1] [2])))))) ? (min((((int) var_4)), (var_2))) : (((/* implicit */int) (((-(arr_4 [i_0] [i_0]))) != (((/* implicit */int) (((-2147483647 - 1)) != (65535)))))))))));
                arr_6 [i_0] [i_0] = min(((-2147483647 - 1)), (min((arr_3 [i_0 - 1]), (arr_3 [i_0 - 2]))));
            }
        } 
    } 
    var_17 = ((int) ((((-1827725455) + (2147483647))) << ((((~(var_3))) - (1574280757)))));
}
