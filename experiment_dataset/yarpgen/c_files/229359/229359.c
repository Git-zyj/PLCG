/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((((7894569161572063566 ? 8 : 0))) ? 7894569161572063566 : (arr_0 [i_0])));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            arr_14 [20] [i_0] [i_2] [19] [i_4] [i_4] = (10552174912137488045 ? (arr_10 [i_0] [i_1 - 1] [i_2] [16] [i_0]) : 376311000);
                            arr_15 [i_0] [i_0] [2] [17] [i_0] = 87;
                            var_20 = (min(var_20, 4294967295));
                            arr_16 [i_0 + 2] [10] [10] [i_0] [i_2] [i_3] [i_4] = 0;
                            arr_17 [i_0] [i_0] [i_0 - 1] [i_0 + 2] [i_0 + 2] [17] = ((((~(arr_8 [i_0] [i_0] [i_0] [i_3])))) ? -557411528 : 7693547990528388067);
                        }
                    }
                }
            }
            var_21 = (min(var_21, (((7693547990528388067 ? (arr_7 [i_0 + 2] [i_0 + 2] [i_1] [i_1 + 2]) : 2882561873)))));
            var_22 = (11998 ? (arr_13 [i_0] [i_0] [20] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 - 1]) : ((95 ? 7693547990528388067 : (arr_3 [i_0] [i_1] [17]))));
        }

        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_22 [i_0 - 1] [i_0] = -4294967295;
            var_23 = (((((-31189 ? 0 : 1934888462))) ? 0 : (arr_10 [i_0] [i_5] [i_0] [i_0 - 1] [i_0 + 4])));
        }
        var_24 = (!(((-268435456 ? 0 : -29293))));
    }
    var_25 = 124;
    var_26 = (var_0 ? (max(var_12, var_15)) : var_15);
    var_27 = 31188;
    #pragma endscop
}
