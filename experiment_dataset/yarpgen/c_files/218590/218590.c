/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 59657;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = 1302018469;
                arr_5 [i_0] [i_0] [i_0] = 5;
                var_12 = (min(5893, (arr_1 [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_1] [i_2] [i_3] = -17979075592778644012;
                            arr_11 [i_2] [i_1] [i_2] [i_2] = 4;
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = (((((3036733027 ? var_9 : 31003))) || -var_2));
        arr_15 [i_4] = ((61849 ? var_3 : (((((var_6 ? 65535 : 4294901772))) ? ((((!(arr_12 [i_4]))))) : (min(20, 27577))))));
        var_13 = (~var_7);
        var_14 = ((((var_5 + (arr_12 [i_4]))) <= (((((7 ? var_3 : 2)))))));
    }
    var_15 = (!2305843009213689856);
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 19;i_6 += 1)
        {
            {
                var_16 = ((((arr_21 [i_5]) ? 3391663848 : var_3)));
                arr_22 [i_5] [i_5] [i_6] = var_7;
            }
        }
    }
    #pragma endscop
}
