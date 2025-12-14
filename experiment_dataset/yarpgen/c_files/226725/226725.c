/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = -9223372036854775806;
        arr_3 [i_0] [i_0] = 3960535014;
        arr_4 [i_0] = ((-(~var_12)));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_14 += (-9223372036854775807 - 1);
        var_15 = (+-9223372036854775784);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_13 [i_3] = (max(var_0, (min((~-9223372036854775779), (~var_10)))));
                    arr_14 [5] [i_3] [5] = var_8;
                }
            }
        }
        arr_15 [i_1] = (min(var_2, var_8));
    }
    var_16 -= (min(var_10, (~1442546396160892062)));
    var_17 = max(var_0, (~1));
    var_18 += var_1;
    var_19 = var_1;
    #pragma endscop
}
