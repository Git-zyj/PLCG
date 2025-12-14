/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_2 ? var_3 : (~var_2))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 &= ((-((-((((arr_2 [i_0]) >= 1275840901397315459)))))));
        arr_3 [i_0] = (max((max((arr_1 [i_0]), 15654)), ((((arr_1 [i_0]) ? (((arr_0 [i_0]) ? var_5 : var_8)) : (((((arr_1 [i_0]) > var_0)))))))));
        var_21 = -52699;
        arr_4 [i_0] = var_2;
    }
    var_22 = (max(var_22, (((52699 ? ((var_17 ? var_16 : var_3)) : var_6)))));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            {
                var_23 = (min(var_23, (((-6711286745724126202 ? (arr_8 [i_1]) : (((arr_9 [i_1]) ? -6826557561828904600 : (arr_7 [i_1]))))))));
                arr_11 [i_1] [i_1] [i_1] = -4917644444322559757;
                arr_12 [i_2] = (arr_6 [6] [i_1 - 1]);
                arr_13 [13] [13] [i_2] = (arr_10 [i_1 - 1] [i_1 - 1]);
                var_24 += (!-15666);
            }
        }
    }
    #pragma endscop
}
