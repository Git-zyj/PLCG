/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_13 = ((!(((arr_1 [i_0]) != 0))));
        var_14 = (arr_1 [i_0 - 1]);
        var_15 = var_0;

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_16 = var_5;
            var_17 ^= (arr_2 [i_0 - 2]);
            var_18 *= (arr_5 [10]);
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_19 = ((var_1 ? (((245 != (arr_9 [i_0 - 3] [7])))) : var_11));
            var_20 = -1;
            var_21 = ((((((((arr_9 [i_0] [i_2]) * (arr_9 [i_2] [i_2])))) ? var_8 : 11)) / var_10));
        }
    }
    for (int i_3 = 3; i_3 < 19;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] |= ((((((arr_10 [i_3]) / var_0))) / -4192502308215542156));
        arr_13 [i_3] [i_3] |= 1307786700881634687;
        arr_14 [i_3] [19] = arr_8 [1] [0];
        var_22 = ((arr_11 [i_3] [i_3]) ? (1 / 990771773118628139) : 0);
    }
    var_23 = (max(var_23, var_10));
    var_24 += (!var_8);
    var_25 = var_8;
    #pragma endscop
}
