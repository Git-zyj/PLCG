/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (-(((!(arr_1 [i_0])))));
        var_10 *= ((var_7 ? (arr_0 [i_0]) : (arr_1 [i_0])));
        var_11 = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, (arr_6 [i_0] [i_1] [i_2])));
                    var_13 = 1;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = (arr_7 [i_3]);
        var_14 = ((-36 ? 18666 : -6138));
    }
    var_15 = var_0;
    var_16 = (~var_6);
    #pragma endscop
}
