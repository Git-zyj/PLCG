/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = -71372511;
                var_12 = -7971187319606722169;
                arr_5 [i_0] [i_0] [i_0] = (((var_5 / (arr_2 [i_1 + 1] [i_0]))));
            }
        }
    }
    var_13 = (((-6994856599625295754 / (((min((-127 - 1), -117)))))));
    var_14 += (min(((-((var_1 ? var_9 : 13)))), ((((5591975746905376751 ? 1207958909 : 40237))))));
    var_15 = (var_10 ? (!var_10) : -83);
    #pragma endscop
}
