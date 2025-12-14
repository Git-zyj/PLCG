/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0 - 1] [i_1 + 1] [i_0 - 1] = var_13;
                arr_7 [i_0] [i_1 + 3] [i_0] = (((((-(var_2 / -18)))) > ((1 ? -9223372036854775806 : 32993))));
                arr_8 [i_0] [i_0] [i_0] = arr_3 [i_0] [8];
            }
        }
    }
    var_15 = ((((min((~var_0), var_11))) ? ((var_10 ? (min(3444714682562086608, var_3)) : (((15002029391147464988 ? var_11 : var_4))))) : 13888741952150440903));

    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        arr_13 [i_2] = (((((~(arr_9 [i_2 - 1] [i_2 + 2])))) ? (((arr_9 [i_2 + 1] [i_2 + 1]) ? 7465423 : 5179088061537805986)) : (((~(arr_10 [i_2]))))));
        var_16 = ((3444714682562086630 + (((min((!15002029391147465002), (arr_11 [i_2])))))));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        arr_16 [i_3] = (((arr_15 [i_3]) && var_9));
        var_17 = (arr_15 [i_3]);
    }
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        var_18 = (((((-100 ? 8365 : 15002029391147465007))) ? ((((min((arr_19 [i_4] [i_4]), var_8))) ? (arr_18 [3]) : (max(var_7, 15002029391147465007)))) : (-15002029391147465007 * -var_7)));
        var_19 = var_7;
    }
    var_20 = 3444714682562086613;
    #pragma endscop
}
