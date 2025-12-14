/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_12 ^= (((max(0, (arr_3 [18])))));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_13 |= arr_4 [19] [i_3] [i_4];
                                arr_13 [17] [i_1] [i_2] [i_3] [i_0] [i_4] [i_4] = (((((var_6 ? var_8 : 0))) ? (arr_2 [i_0]) : (((max(var_2, (arr_8 [i_0] [i_1] [i_2])))))));
                                arr_14 [i_0] [6] [i_2] [i_0] [i_4] = var_4;
                            }
                            for (int i_5 = 1; i_5 < 18;i_5 += 1)
                            {
                                var_14 ^= (((((var_4 ? (arr_3 [14]) : (arr_0 [i_1])))) ? ((var_11 ? var_5 : 1)) : (((arr_10 [14] [i_5 - 1] [i_5 + 1] [i_5 + 2] [i_5] [i_5]) ? (!0) : (0 / 59550)))));
                                var_15 = ((var_6 ? ((min(432829981546165372, (((var_4 ? 1 : var_1)))))) : ((((max(var_8, 17774))) ? 11676451466169549780 : var_0))));
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_0] = (-32767 - 1);
            }
        }
    }
    var_16 = var_1;
    var_17 = var_5;
    var_18 = (var_1 && 4);

    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_19 *= ((!(arr_18 [1])));
        var_20 = var_1;
    }
    #pragma endscop
}
