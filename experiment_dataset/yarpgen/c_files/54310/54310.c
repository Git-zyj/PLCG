/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_11));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = -21282;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_15 -= (min(((~(arr_0 [17] [17]))), ((((1 == 417692374) % (-21266 <= -21265))))));
            arr_6 [i_0] = ((246 + (var_5 + var_0)));
            arr_7 [i_0] = (max(93, var_4));
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_19 [9] [i_0] = arr_16 [i_0] [i_2] [i_2] [i_0];
                        var_16 = var_10;
                    }
                }
            }
        }
        var_17 -= (max(((var_6 << (21281 <= 469762048))), ((min(-21262, 39766)))));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_28 [i_6] = var_3;
                    arr_29 [i_7] [2] [2] [i_5] |= (arr_12 [i_5] [6] [0] [16]);
                }
            }
        }
    }
    var_18 = (((max(28672, -5653860283562174652)) & var_11));
    #pragma endscop
}
