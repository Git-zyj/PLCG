/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1453646558;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] [i_1] |= ((-((3028772081082972995 ? 9505 : 43692))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] = (((-32767 - 1) ? (arr_11 [i_0] [i_1] [i_1] [i_2] [i_3]) : (~var_6)));
                        var_17 = (((-9223372036854775807 - 1) ? 21843 : 51338));
                    }
                }
            }
            arr_13 [i_1] [i_1] [i_1] = 0;
        }
        var_18 = (min(var_18, ((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_6)))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        var_19 = (max(var_19, -var_11));
                        var_20 = (-1 > 14197);
                    }
                }
            }
        }
        arr_23 [i_4] = (18446744073709551615 & var_13);
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 22;i_8 += 1) /* same iter space */
    {
        var_21 = (max(var_21, ((((arr_19 [i_8 - 1]) << (arr_19 [i_8 + 1]))))));
        arr_27 [i_8] [i_8] = ((var_8 % (arr_20 [i_8] [i_8] [i_8])));
        arr_28 [i_8] [i_8] = -51338;
    }
    var_22 = (max((~var_1), (((min(1607376152, 9223372036854775807)) >> (var_7 - 2929918239106867960)))));
    #pragma endscop
}
