/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((2444756685659369027 ? 3126962957 : (((-77 ^ (arr_2 [i_0]))))))) ? var_11 : 1));
        var_19 *= ((-((1502144277 ? (var_0 <= 12702246884473076979) : 5744497189236474637))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_1] = ((((var_17 ? 2444756685659369027 : 1))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        var_20 = var_0;
                        var_21 = (arr_7 [i_3 + 1] [i_3 - 1] [i_3 - 2] [i_3 - 2]);
                        var_22 = ((-var_11 ? -12702246884473076984 : var_2));
                        var_23 -= ((~(~-3309)));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = ((var_2 ? (((((3126962988 ? 31391 : 3)) > (!1168004339)))) : ((-(arr_11 [i_0] [i_0])))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = ((((-23 ? 2712605892 : (arr_13 [i_4] [i_4])))) ? -898012889 : var_18);
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_24 = 9663989056358888348;
                        var_25 += ((((((((-(arr_20 [i_7] [i_6] [2] [10])))) ? (~var_18) : ((var_4 ? (arr_14 [i_5] [i_7]) : (arr_13 [i_6] [i_7])))))) ? (arr_18 [i_6 + 1] [i_6 + 1] [i_6 - 2]) : 1386083199));
                        var_26 = (min(var_26, (((1168004308 == (((((~var_12) > (arr_16 [22] [i_6 - 4]))))))))));
                    }
                }
            }
        }
        var_27 = 3126962956;
        var_28 = ((((min((min((arr_17 [i_4] [i_4] [i_4]), (arr_18 [i_4] [i_4] [i_4]))), ((((arr_22 [i_4] [i_4] [19] [i_4] [i_4] [20]) ? (arr_21 [i_4] [i_4] [i_4] [i_4]) : (-32767 - 1))))))) ? var_9 : ((~(((arr_22 [14] [i_4] [i_4] [12] [i_4] [12]) & var_10))))));
    }
    var_29 = (!var_4);
    #pragma endscop
}
