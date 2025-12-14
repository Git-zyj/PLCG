/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_2, (((~((max(1, var_8))))))));
    var_11 = (min(var_11, var_0));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 &= (~((~((var_3 ? (arr_1 [i_0] [9]) : 27)))));
        arr_3 [i_0] |= (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_1] = (((arr_4 [i_1] [i_1] [i_0]) ? 1 : (arr_2 [i_0])));
            arr_7 [i_0] [i_1] = (max(5318898952693095837, 1791186446));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_12 [i_0] [i_0] [12] = (((arr_4 [i_0] [i_2] [i_2]) / (arr_11 [i_2] [i_0])));
            arr_13 [i_2] = (((arr_1 [i_0] [i_2]) ? (arr_5 [i_0] [i_0]) : (arr_1 [i_0] [i_2])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_13 = (!var_1);
            var_14 += (13127845121016455763 == 4294967292);
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                {
                    arr_26 [i_6] [i_6] [i_6] [i_6] = ((~(((((-1916730382 ? 1 : 0)) >= ((max(500795801, var_6))))))));
                    var_15 = (7 ? var_0 : (arr_20 [i_6 + 1]));
                }
            }
        }
    }
    #pragma endscop
}
