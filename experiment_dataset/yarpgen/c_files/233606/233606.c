/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    var_21 = (((~(15823 & var_3))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_22 = (var_14 ? (arr_0 [4]) : ((124 ? 144115188075855871 : var_11)));
        arr_2 [i_0 + 1] = (((min(var_7, 11093))));
        arr_3 [i_0 - 3] = (min((max((min(-20, var_12)), (((-(arr_0 [i_0])))))), (65525 & 1)));
        var_23 = var_16;
    }
    var_24 = (var_8 ? var_10 : ((((((-26165 ? 30720 : 27848)) != 1)))));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    arr_13 [i_3] [i_2] [i_1] = (min(-2296637445434520520, (((((-27850 ? (arr_9 [i_1] [i_2]) : (arr_10 [i_3] [1]))) >= (!var_0))))));
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_20 [i_5] = -7592;
                                arr_21 [15] [i_1] [i_5] = ((((((arr_0 [i_4 - 4]) & 1))) ? var_18 : ((0 ? (3054 / -18066) : (1 & 18439)))));
                            }
                        }
                    }
                    var_25 = ((((min(((1 ? 4626744734103612458 : -8026057460370218689)), (((3286 > (arr_19 [14] [i_3] [2] [i_1] [i_3] [1]))))))) ? 13094 : 7587));
                }
            }
        }
    }
    #pragma endscop
}
