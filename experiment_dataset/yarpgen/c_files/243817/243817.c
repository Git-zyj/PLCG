/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((max((-5987171792371380662 && var_6), var_3)), var_3));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((0 == ((((!(((~(arr_2 [i_0] [i_0]))))))))));
        arr_4 [i_0] = ((((min(62, 2147483623))) & var_9));
        arr_5 [i_0] = (max(217, (((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : 52))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_20 = ((((((212 ? 2842406555465016838 : 2147483632))) ? (~var_17) : var_9)));
        arr_8 [i_1 + 1] [i_1 - 1] = min(((((((arr_7 [i_1] [i_1]) ? var_18 : var_10))) ? 2607829651 : (arr_7 [15] [15]))), (((101 ? (239 - var_16) : (40 + 217)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_21 &= (((232 ? 220 : 52)));
        var_22 = (!var_5);
        var_23 = var_10;
        arr_12 [i_2] = var_16;
    }
    #pragma endscop
}
