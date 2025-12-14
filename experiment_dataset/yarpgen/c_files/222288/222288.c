/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_12 = (7936 ? 55758 : 7936);
                        arr_11 [i_0] [i_1] [4] [4] = ((((((var_8 ^ var_2) ? ((max(57623, var_10))) : (17 % 21464)))) ? 6366300189397496975 : (((max(1, 1))))));
                        var_13 = (var_10 ? ((3968 ? 1 : 7936)) : 1096838391);
                        arr_12 [i_0] [7] [4] [i_3] = ((((((((var_0 ? var_8 : var_4))) ? var_5 : var_9))) ? (var_11 * var_5) : (((((var_4 ? var_2 : var_8))) ? ((var_2 ? var_5 : var_2)) : (((var_0 ? 7 : var_0)))))));
                    }
                    var_14 = var_0;
                    arr_13 [i_0] [i_0] = (~65518);
                    arr_14 [i_2] [i_2 - 1] [9] [i_0] = (((~61402) < -var_7));
                }
            }
        }
    }
    var_15 = (max(var_15, var_11));
    #pragma endscop
}
