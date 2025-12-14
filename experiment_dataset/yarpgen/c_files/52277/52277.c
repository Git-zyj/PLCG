/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (((((((max(var_19, var_10))) && var_17))) == var_9));
    var_21 = (!var_18);
    var_22 = (((min(((max(134, -92))), var_1))) ? ((((((var_2 ? -101 : var_6))) ? (var_19 / var_7) : var_3))) : (max(var_13, ((13629022778444864897 ? var_11 : 15757104255174496009)))));
    var_23 = max(8711939174174029414, 219);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_24 = 26076;
                arr_6 [i_0 + 1] = min(((((arr_2 [i_0 - 1] [i_0 - 3]) - var_5))), (max(var_11, (arr_0 [i_0 - 4]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_25 = ((!((min(-100, (min((arr_0 [i_3]), var_5)))))));
                            var_26 -= 5393328116160204178;
                        }
                    }
                }
                var_27 *= ((~((((arr_10 [i_0]) == 39)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_28 = (((-101 != var_13) ? (arr_7 [i_0 - 2] [i_0 - 4] [i_0 - 4]) : (min(-100, (arr_15 [i_0 + 1] [i_4] [i_5] [i_5] [i_5])))));
                            var_29 = ((max((((91419298 ? var_4 : 146))), 1467487322)));
                            var_30 = (max((arr_15 [i_4] [i_1] [i_0 - 4] [i_0 + 2] [i_0 + 2]), (min(5393328116160204178, (arr_3 [i_0 + 2])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
