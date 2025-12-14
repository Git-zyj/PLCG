/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    {
                        var_16 = (min(var_16, (max((!var_15), (((max(var_13, (arr_1 [i_3]))) != ((min((arr_2 [i_0] [i_0] [i_2]), 179)))))))));
                        var_17 = (min(var_17, (((!((!(arr_2 [i_1] [i_1] [i_1 - 1]))))))));
                    }
                }
            }
        }
        var_18 = var_1;
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_19 = (arr_3 [1] [1]);
            arr_16 [i_4] [i_4] = ((!((max(var_9, var_2)))));
        }
        var_20 = (max(var_20, (77 / 103)));
        var_21 ^= (3820787167 == 3820787167);
        var_22 |= (max(var_2, 211));
    }
    var_23 = max((((((var_14 ? var_0 : var_8))) ? ((var_15 ? var_2 : 58)) : (((var_3 ? 1 : var_13))))), 3820787167);
    var_24 = (77 ? 12 : 6598956558517114839);
    var_25 = ((!(var_8 && var_4)));
    #pragma endscop
}
