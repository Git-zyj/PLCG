/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(max((2305843009213693951 << var_2), (1702075206 > 188)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((~(((arr_2 [i_0]) >> var_2)))) > (!var_7)));
                var_16 = (min(var_16, ((((arr_1 [i_1]) ? ((((arr_1 [i_1]) && (arr_1 [i_1])))) : ((1 << (var_4 + 646328364))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (((arr_7 [i_2]) & var_2));
        var_17 = ((-((~(min(0, (arr_7 [i_2])))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_18 = (var_4 ? 0 : (!var_12));
        var_19 *= (!-var_1);

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_16 [i_3] [i_4] = (var_13 && 1);
            arr_17 [i_4] = var_0;
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_21 [i_3] = (((((var_3 ? var_13 : -1))) ? ((2749303811 ? var_0 : var_3)) : 1433136364));
            var_20 = (max(var_20, (((~(arr_0 [i_5]))))));
        }
    }
    #pragma endscop
}
