/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = -1399217506;
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = var_9;
                    var_15 = 1399217506;
                    arr_9 [i_0] |= (arr_6 [i_2]);
                }
            }
        }
        var_16 = (!-1);
        var_17 = (min(var_17, (17 & 305120984)));
    }
    var_18 = var_2;
    var_19 = var_8;
    var_20 = var_12;

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_21 = var_4;
        var_22 *= 17;
        var_23 = 18446744073709551615;
        arr_13 [3] [i_3] = (((arr_5 [i_3] [i_3]) ^ 1));
        arr_14 [i_3] = ((!((max((min(1399217506, 255)), (!-821175054))))));
    }
    #pragma endscop
}
