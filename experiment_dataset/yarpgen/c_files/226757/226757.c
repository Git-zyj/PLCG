/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = ((~((2059627633 ? (min(0, var_4)) : ((var_14 ? 1 : 1517706041))))));
        arr_2 [i_0] = max(-1882239916, 7901218352913749781);
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = max((-2147483647 - 1), (arr_3 [i_1 + 1] [i_1]));
        var_19 = min((max((arr_4 [i_1]), ((8357743433096119802 ? (arr_4 [i_1]) : (arr_3 [7] [i_1]))))), ((min((arr_3 [i_1 - 1] [i_1 + 1]), (arr_3 [7] [i_1])))));
        var_20 = arr_4 [i_1 - 1];
    }
    var_21 = ((((((((var_16 ? var_4 : 1))) ? (max(var_17, var_0)) : (((max(var_1, 15))))))) ? var_16 : (((((var_10 ? var_12 : 1)))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            {
                var_22 *= (-(((((7085457764934827420 ? 1 : (arr_7 [i_2])))) ? (min((arr_10 [i_3] [i_2] [i_2]), 11821672548372892753)) : var_13)));
                arr_12 [i_2] = (arr_0 [i_2]);
            }
        }
    }
    #pragma endscop
}
