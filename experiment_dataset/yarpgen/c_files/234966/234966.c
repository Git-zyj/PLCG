/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = ((-8080963905972787750 ? -1589682154 : 126));
                var_19 = (min(var_19, (((1589682154 ? 85 : -1589682154)))));
                arr_5 [i_0] [i_0] = -123315942884922031;
                var_20 = (max(123315942884922031, 2987475032));
            }
        }
    }
    var_21 |= var_15;

    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {

        for (int i_3 = 4; i_3 < 16;i_3 += 1)
        {
            var_22 = var_13;
            var_23 = (min(var_23, ((max((((var_11 ? (arr_9 [i_2 + 1] [10] [12]) : var_1))), (min(76, (arr_8 [i_3 - 4] [i_3 - 2] [i_3 - 4]))))))));
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                {
                    arr_15 [i_5] [i_4] = ((!(arr_9 [i_5] [i_5 - 1] [i_5])));
                    var_24 = 2081061861;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                {
                    var_25 = (max(var_25, (((!((min(((123315942884922030 ? var_8 : 0)), -107))))))));
                    var_26 = (((arr_14 [i_7 + 2] [i_2 + 1]) * var_6));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_27 = (min(var_27, (((!((max(-6, (arr_8 [i_8] [i_8] [i_8])))))))));
            var_28 = (min(var_28, (-59 && 1503955369)));
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 16;i_11 += 1)
                {
                    {
                        var_29 = 32;
                        var_30 = (min(var_30, var_5));
                        var_31 = (((arr_28 [i_9] [i_11 - 1] [i_11 - 1] [i_9]) && (arr_7 [16])));
                    }
                }
            }
            var_32 = (!-403406555629661671);
        }
        for (int i_12 = 2; i_12 < 15;i_12 += 1)
        {
            var_33 = 3437742919;
            arr_36 [i_12] [1] [i_8] = var_6;
            var_34 = ((-1 ? var_0 : ((53366 ? (max(-403406555629661698, var_16)) : 11014074234241328705))));
        }
        arr_37 [i_8] = ((((arr_9 [i_8] [i_8] [i_8]) + (arr_9 [i_8] [i_8] [i_8]))));
    }
    #pragma endscop
}
