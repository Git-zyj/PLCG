/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = -122;
                var_19 = (max(var_19, ((max(((117 ? ((((arr_4 [i_0]) || 121))) : (arr_0 [i_0]))), ((((min(var_4, (arr_3 [i_1] [i_1])))) ? var_15 : ((max(32767, var_5))))))))));
                var_20 ^= (((((((((arr_0 [i_0]) == -2964877582924962353))) << ((((23108 ? var_17 : var_0)) - 16408394548955787307))))) || (((((var_0 ? var_12 : (arr_0 [i_1]))) % (arr_4 [i_0]))))));
            }
        }
    }
    var_21 = (max(var_21, (((var_5 ? ((((var_16 && (((var_16 ? -556789356318326354 : var_2))))))) : var_2)))));
    var_22 = min(2964877582924962352, 15678589204867299269);
    #pragma endscop
}
