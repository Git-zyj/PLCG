/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_2));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 = (min(var_21, 18446744073709551615));
        arr_2 [i_0] = (min((arr_0 [i_0]), ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_2] = ((((((arr_6 [i_0] [i_0] [i_1] [i_2]) ? (arr_3 [i_0]) : var_16))) ? (((7939217794985614275 ? (arr_4 [i_0] [i_1] [i_2]) : (arr_4 [i_0] [i_1] [i_2])))) : (arr_6 [i_0] [i_1] [i_2] [i_0])));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = (min(-16626, var_17));
                    var_22 *= (((((((((arr_0 [i_2]) - var_6))) && ((min(16626, var_14)))))) + (((-1 == 255) ? 214 : -1))));
                    var_23 = 214;
                }
            }
        }
    }
    #pragma endscop
}
