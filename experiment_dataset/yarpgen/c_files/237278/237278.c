/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_20 = (min(var_20, ((min(((~((11415 ? 0 : (arr_0 [i_0] [i_0]))))), (~1))))));
                            arr_12 [i_2] [i_1] [i_1] [i_2] [i_1] [11] [i_4] = (((((5564 * 0) % (((1 != (arr_9 [i_0] [i_1] [i_2 - 1] [i_3 - 1] [i_4])))))) > 58391));
                            arr_13 [i_0 - 1] [i_0 - 1] [i_2] [i_0 + 2] [i_0 + 3] = (min(14, ((65527 & ((58378 ? 7765 : 57770))))));
                        }
                    }
                }
            }
            var_21 = (((((1 ? (arr_8 [i_0] [1] [i_0 + 1]) : (arr_8 [i_0] [i_1] [i_0 + 3])))) ? (arr_8 [i_0] [i_1] [i_0 + 4]) : ((~(arr_8 [i_0] [i_1] [i_0 - 2])))));
            arr_14 [i_0 + 1] = -1;
        }
        var_22 += (((((max(1, 23)) ? ((1 ? 1 : 676)) : 1))));
    }
    var_23 = (((~1) ? var_17 : 1));
    var_24 = ((1 ? ((1 ? var_3 : ((37691 ? 34051 : 11408)))) : ((((1 ? 54113 : 7145))))));
    var_25 += ((((min(-1, ((max(var_18, 1)))))) ? (min(1, ((65535 ? 1 : 45541)))) : var_4));
    #pragma endscop
}
