/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((4505876556245212035 / 4505876556245212021), 7585));

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_12 = (max(var_12, (~4505876556245212035)));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            arr_11 [i_0] = ((((arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_3 + 1]) / 19457)));
                            var_13 = (min(var_13, (((+((min((((arr_9 [i_1] [i_1] [i_4]) && var_4)), (!-4505876556245212035)))))))));
                            var_14 = var_2;
                        }
                    }
                }
            }
            var_15 = ((max((-4505876556245212035 | var_10), 2871674688043655183)));
        }
    }
    var_16 = ((((((var_4 - var_9) ? 0 : ((min(26910, 768)))))) ? var_5 : var_5));
    var_17 = ((-(((((min(var_2, 18111))) < var_7)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                var_18 = (arr_6 [i_6] [i_6]);
                var_19 = (min(var_19, (((((((arr_15 [i_5]) + (arr_12 [i_6])))) ? (((~(arr_15 [i_6])))) : (max(102, 602401902)))))));
            }
        }
    }
    #pragma endscop
}
