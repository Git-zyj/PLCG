/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (var_12 <= var_4)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = (min((max((~var_6), ((min(var_0, 1))))), 1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [1] [i_0] = (((((~(0 || var_10)))) ? (((!(((10446 ? var_7 : var_7)))))) : (1477811149 < var_15)));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_18 = (max(var_18, ((min((min(1, 1)), (-12637 && 10446))))));
                            var_19 -= (!(1 && 1));
                            arr_16 [i_0] [i_0] [i_1] [i_2] [i_3] [9] [i_4] = ((-(236 && 1)));
                        }

                        for (int i_5 = 2; i_5 < 8;i_5 += 1)
                        {
                            var_20 *= 1;
                            arr_19 [1] [3] [i_2] [i_3] [i_5] = ((((((((max(var_1, var_12)) + 2147483647)) >> ((1 >> (var_3 - 9167473643391399343)))))) ^ (~var_13)));
                        }
                        var_21 |= (((-10447 <= (min(var_12, 1)))) ? (min(-var_10, ((1 ? var_5 : var_15)))) : ((((!(1 <= var_12))))));
                    }
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_22 += (min((var_12 && -302816279), (!1)));
                        var_23 = ((1 < (((min(var_7, 54)) | -10452))));
                        arr_22 [1] [i_1] [i_1] [i_1] [4] [4] = (((((((524256 ? 302816299 : 0)) == -1))) <= ((((var_8 || 0) && (!var_4))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 4; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            {
                var_24 = (((((-674140148347820986 ? 34 : 124))) != 911478944));
                arr_28 [i_8] = (1 && 42);
            }
        }
    }
    #pragma endscop
}
