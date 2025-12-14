/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = (min(-745349705442229453, 49154));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = max(49142, (arr_5 [i_2] [6]));
                    var_15 = (max(var_15, ((min((max((arr_3 [i_0]), 2147475456)), (arr_11 [i_0] [i_0 + 2] [i_0 + 3]))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_19 [i_0] [i_3] [i_4] [2] [i_5] = (min(var_1, 16356));
                        arr_20 [6] [i_4 - 1] = (min(0, 4294967295));
                        var_16 = (max((max((((!(arr_7 [i_0] [13] [i_5])))), 4294967282)), (arr_7 [i_0] [i_3] [i_4])));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        arr_23 [0] [1] = -2147475465;
        var_17 = (min(var_17, (((4294967282 ? 4294967295 : 7)))));
        arr_24 [i_6] = (arr_21 [i_6] [i_6]);
        var_18 = (!4294967282);
    }
    #pragma endscop
}
