/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((max(0, 123))), var_7));
    var_12 = var_3;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0 - 1] = var_10;
        var_13 = ((!(((var_8 ? 1 : (arr_3 [i_0 + 1]))))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_14 += (min(((-1 ? (1 / var_6) : var_8)), var_1));

        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            var_15 = ((var_1 == ((var_9 ? var_8 : ((var_0 ? var_2 : var_10))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    {
                        var_16 = var_3;
                        var_17 *= (((((1 ? (-9223372036854775807 - 1) : (-127 - 1)))) ? (((arr_6 [i_2 + 1] [i_2 - 1]) * var_6)) : ((-(arr_6 [i_2 - 1] [i_2 + 2])))));
                        var_18 = ((min(58075, var_0)));
                    }
                }
            }
            arr_16 [i_1] = 1994352286;
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 15;i_5 += 1)
        {
            var_19 = (18446744073709551612 < var_7);
            arr_19 [i_1] = 16987813814415605738;
        }
        var_20 = var_2;
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = ((4 != -9223372036854775805) / (((arr_5 [i_6 - 1] [i_6]) ? 1458930259293945877 : (-2147483647 - 1))));
        var_21 = 0;
    }
    #pragma endscop
}
