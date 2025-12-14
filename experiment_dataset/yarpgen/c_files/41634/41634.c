/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((~(max((min(var_5, var_1)), (var_0 + var_15))))))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {
                        var_17 = (((min(-2202733962581111214, 2016235313)) << (((max((var_13 + var_6), var_4)) - 15484363999746376644))));

                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] = 28392;
                            var_18 = (((arr_6 [i_0 - 1]) | (arr_9 [i_0] [4] [i_2 + 2] [i_3 + 1] [i_4])));
                            var_19 = ((((min((max(216, var_1)), var_7))) * -15465));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 20;i_5 += 1)
                        {
                            var_20 = (((~var_14) < ((26 ? var_10 : var_12))));
                            arr_17 [i_0] [i_5] = (var_0 | var_10);
                            arr_18 [i_0] [i_0] [i_2] [i_3] [i_5 - 2] [i_5] [i_3 - 1] = var_15;
                            var_21 = (min(var_21, ((((var_8 / var_0) < var_2)))));
                            arr_19 [i_0] [i_0] [i_0] = (arr_2 [i_2 + 2] [i_3 + 1] [i_0]);
                        }
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            var_22 = min((((min(var_10, -576460752303423488)))), ((((max(3711275072, 0))) & ((var_11 ? 3711275072 : 3128305909642623036)))));
                            arr_22 [i_0 + 1] [i_1] [i_2] [i_3 + 1] [i_0] = (((var_1 ? 1 : 2118878126503861071)));
                            arr_23 [i_0] [i_1] = max(((var_12 ? (arr_0 [i_0 - 1]) : 2147483647)), (arr_0 [i_0 + 1]));
                        }
                        var_23 = (((10720 < 1284137215) ? ((((arr_7 [i_0 - 1] [i_1] [i_0 - 1] [i_2 - 3] [i_3 + 2]) < var_9))) : (max(2147483647, (arr_7 [i_0] [i_1] [i_0 - 1] [i_2 + 3] [i_3 + 1])))));
                    }
                }
            }
        }
        arr_24 [i_0] = 18557;
    }
    var_24 = var_6;
    var_25 = ((((3183200029 ? (!var_14) : var_13))) ? (min((-2118878126503861059 / var_6), (var_7 * 4146123043060579725))) : ((min((max(var_3, var_7)), (min(var_8, var_7))))));
    #pragma endscop
}
