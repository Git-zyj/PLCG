/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 3187455808;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((4819 ? 4819 : 35));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, 1));
                    arr_9 [13] [i_0] [i_1] [i_0] &= (min((min(1, 2944136431)), (((((((arr_5 [i_2]) ? (arr_5 [i_0]) : 8191))) ? 8209 : 111)))));
                    arr_10 [i_0 + 4] [i_0] [i_0 + 4] [13] = ((((3381253744 >> (arr_0 [i_2 - 1])))));
                    var_19 = (min((max(1884147234, -1466820305768360246)), 1));
                }
            }
        }
        var_20 = var_16;
        var_21 |= -33;
        var_22 = (max(var_22, (((21800 ? var_3 : (arr_0 [i_0]))))));
    }
    var_23 = (min(var_23, (max(var_15, 8191))));
    #pragma endscop
}
