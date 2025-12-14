/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((min((var_7 <= 1880308440), var_6)))));
    var_17 -= 1880308453;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_18 ^= var_4;
            var_19 = (((-var_1 + 2147483647) << 0));
        }
        arr_6 [i_0] [i_0] = (arr_3 [i_0] [i_0]);
        var_20 = (min((arr_2 [i_0 + 1]), var_3));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 8;i_2 += 1) /* same iter space */
    {
        var_21 = (((arr_4 [i_2] [i_2 - 2]) ? ((((arr_5 [1] [i_2]) ? (arr_2 [i_2]) : var_12))) : (((arr_0 [i_2]) ? var_13 : 6917529027641081856))));
        var_22 ^= (arr_8 [i_2 - 2]);
    }
    for (int i_3 = 3; i_3 < 8;i_3 += 1) /* same iter space */
    {
        var_23 = -1043958291941194576;
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        var_24 = var_6;
                        var_25 ^= min(-var_0, (((!((max((arr_13 [i_3]), (arr_19 [i_3] [4] [i_5] [i_6]))))))));
                        var_26 = (max(((((min((arr_8 [i_3]), var_11))) ? ((var_15 ? -1337560969 : var_2)) : var_12)), 76));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            {
                var_27 = (min(var_27, ((min(-var_12, 0)))));
                var_28 = (((arr_2 [i_7]) & ((1 ? var_3 : (arr_2 [i_7])))));
                var_29 = (((((597710258556415851 ? (arr_3 [i_8] [i_7]) : (arr_23 [i_8])))) ? 139 : var_4));
                var_30 = (min(var_30, 1));
                var_31 = (arr_2 [i_8]);
            }
        }
    }
    #pragma endscop
}
