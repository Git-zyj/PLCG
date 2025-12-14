/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (-var_14 + 120);
        var_19 = ((((var_0 ? 576460752303423487 : -39)) / (arr_1 [i_0])));
        var_20 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_21 |= (((((-(arr_3 [i_1])))) % -1));
                    var_22 &= (!18446744073709551615);
                }
            }
        }
    }
    var_23 &= (68 - var_11);

    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_24 = var_15;
        var_25 = (((((((-285204795 ? -1448313771 : -39))) ? 4 : -408928134820736239)) == -1));
        var_26 = (max(var_26, (((!((((arr_11 [i_4]) ? (255 * 1622716734) : var_4))))))));
        var_27 |= 43;
    }
    #pragma endscop
}
