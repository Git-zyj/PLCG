/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 *= ((+((4076990414 ? (arr_5 [i_1] [i_1]) : 57))));
                    arr_9 [i_1] = (((arr_3 [i_1]) / 1));
                    var_17 = 3031076256;
                }
            }
        }
        arr_10 [i_0] = (!(arr_5 [i_0] [i_0]));
        var_18 = (((((1 ? var_10 : var_10))) ? (var_14 + var_9) : (~0)));
        arr_11 [15] [i_0] = ((var_1 ? (arr_3 [4]) : (arr_0 [i_0])));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_19 = ((+((min((-29714 == var_10), -11524)))));
        var_20 = ((arr_5 [i_3] [i_3]) || -1);
    }
    var_21 -= ((((var_1 ? 1 : -31680)) / ((min(var_8, (min(var_14, var_8)))))));
    var_22 = ((~((~((54 ? 1 : -1))))));
    #pragma endscop
}
