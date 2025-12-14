/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] &= (((arr_1 [i_0] [i_0]) * var_12));
        var_19 = (~var_8);
        var_20 = (max(var_20, 28277));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_21 = (min((arr_2 [i_1 - 2] [i_1 - 1]), (((arr_5 [i_1 - 1]) ? -51 : (arr_5 [i_1 - 2])))));
        var_22 = ((!(((var_10 * (((arr_5 [i_1 - 2]) ? var_11 : 3926129220)))))));
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_4] [i_2] [i_2] = 1941616172316789369;
                    var_23 = -839109157;
                    var_24 = ((((((!(arr_9 [i_4] [i_4 - 2] [i_4]))))) ^ -2736917757));
                }
            }
        }
        var_25 = (min(var_25, (((~(max(var_5, (906003787074217611 + 90))))))));
        var_26 = (((arr_7 [i_2]) ? (((166946863 != 1635629661) ^ (arr_12 [i_2] [i_2]))) : (arr_12 [i_2] [i_2])));
    }
    var_27 = (((((var_13 ? var_8 : var_12)) >= var_0)));
    #pragma endscop
}
