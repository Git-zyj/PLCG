/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_18 = ((~(~var_5)));

        for (int i_1 = 4; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_19 *= (!var_8);
            var_20 = var_14;
        }
        /* vectorizable */
        for (int i_2 = 4; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_21 = ((-5078263267804108838 ? 118 : 110));
            var_22 *= (((arr_1 [i_0 - 1] [i_2 - 1]) ? (arr_6 [i_2] [i_2 + 1] [i_2 - 2]) : var_13));
            var_23 = (min(var_23, 55455));
        }
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            arr_11 [i_0] [i_0] = (((((-(((arr_2 [i_0 - 2] [i_0]) ? var_12 : var_5))))) ? 6050736921357469222 : (((arr_6 [i_0] [i_0 - 1] [i_0]) ? 12396007152352082393 : 17))));
            arr_12 [i_0] [i_3] = var_17;
        }
        arr_13 [i_0] [i_0] |= ((var_6 ? var_14 : var_8));
    }
    var_24 = var_4;
    #pragma endscop
}
