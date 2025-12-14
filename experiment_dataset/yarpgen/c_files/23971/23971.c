/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_11 = (max((-2564371080108658923 >= var_9), (~var_2)));
                                var_12 = ((min((!-2564371080108658923), (-9223372036854775807 - 1))) - (!var_8));
                                arr_14 [2] [i_3] [i_2] [i_3 - 2] [i_4] = (arr_4 [i_0] [19]);
                            }
                        }
                    }
                    var_13 = (~(((arr_0 [i_0 - 2]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 1]))));
                }
            }
        }

        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            var_14 = ((((9223372036854775799 ? (-9223372036854775807 - 1) : 2564371080108658922))) ? 9223372036854775807 : (min(-5596845338871883440, 9223372036854775807)));
            var_15 = ((~712805426109882051) ? (min(var_3, ((3615128410261022619 ? var_2 : var_8)))) : (max(((~(arr_2 [i_0 - 1] [i_0 - 1]))), (min((arr_0 [i_0 + 1]), var_8)))));
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            var_16 = var_0;
            var_17 |= (~(~-4592987072501642534));
            arr_21 [14] [i_6] = (6473991189110691120 % -4465042935972106752);
            var_18 = (1550285563360765401 ? 590688737524599969 : (((arr_5 [i_0] [i_0 - 3] [i_0 - 1]) / 2232456448381023145)));
        }
    }
    var_19 = (min(var_19, var_3));
    var_20 = (~(min(5596845338871883439, 7319362727129258679)));
    #pragma endscop
}
