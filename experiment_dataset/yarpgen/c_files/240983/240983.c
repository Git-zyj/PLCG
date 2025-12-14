/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = var_9;
        var_14 = ((var_12 >= ((-215686923 ? var_0 : (arr_3 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_1] [0] = var_12;
            var_15 *= (((arr_3 [i_0] [i_0]) <= ((var_7 ? (arr_1 [i_0] [i_0]) : var_8))));
        }
        var_16 = (((((-1153073862 ? 0 : 3918139279))) ? (arr_3 [i_0] [i_0]) : (3890527337380892280 * var_4)));
        var_17 *= (!var_0);
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_2] = -35520411411637565;
                var_18 = ((max(-1, 1)));
            }
        }
    }
    #pragma endscop
}
