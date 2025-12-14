/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            var_16 = (min(var_16, ((((~(!-68)))))));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_3] [i_3] = ((((var_3 ? ((max(23, -68))) : (33551 || 33551))) >= ((max(var_7, (arr_1 [i_1 - 2]))))));
                            var_17 = ((min(var_14, ((var_0 ? (arr_5 [i_4 - 1] [i_4 - 1] [i_0] [i_4]) : var_15)))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] [i_4] [i_4] = (((((min((arr_5 [i_4] [i_0] [i_0] [i_0]), var_14))) ? -32333 : (arr_2 [i_0]))) >= (((-127 - 1) ? ((min(17398, var_12))) : 67)));
                        }
                    }
                }
            }
        }
        for (int i_5 = 3; i_5 < 16;i_5 += 1)
        {
            arr_16 [i_0] = var_8;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        var_18 = (((arr_18 [7] [i_0] [i_6]) | ((~((~(arr_23 [i_0] [i_0] [i_6] [i_7])))))));
                        var_19 |= var_1;
                    }
                }
            }
            var_20 = var_5;
            var_21 = var_8;
        }
        var_22 = var_2;
        var_23 = (~101);
        var_24 = (!var_0);
        var_25 = (min(222, (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0]) ? -1951862990 : 10475))));
    }
    var_26 = var_13;
    #pragma endscop
}
