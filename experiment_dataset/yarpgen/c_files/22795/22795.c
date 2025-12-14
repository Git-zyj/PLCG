/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = max(13595878975227538524, (((~(arr_2 [i_0] [i_0])))));
        arr_3 [i_0] = -2792397804;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [9] = ((~(arr_2 [i_1] [i_2])));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_0] = max(var_14, ((max((arr_5 [i_0] [i_0] [i_0]), 1502569487))));
                        var_16 |= -75;
                    }
                }
            }
        }
        arr_15 [i_0] [1] = ((-(min(var_3, -var_8))));
        var_17 = 372318016;
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_18 = ((+(max((arr_17 [i_4]), (arr_17 [i_4])))));
        var_19 += (max((~88671011), ((-(((!(arr_17 [i_4]))))))));
        var_20 = (max(var_20, (((((min(3700638606, (!-24453591)))) ? (((!(~533469067194381519)))) : (!3700638602))))));
    }
    var_21 = ((~(max(594328718, (min(var_11, var_6))))));
    var_22 = (max(-216, (-350664865 ^ 52)));
    var_23 = var_5;
    #pragma endscop
}
