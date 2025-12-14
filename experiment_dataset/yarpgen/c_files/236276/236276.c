/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (min(var_9, (((((var_9 ? var_10 : var_8)) % var_4)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = (min(var_14, var_0));
        arr_4 [i_0] = (((((177070252 ? 11 : var_9))) * (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_15 = 37541;
        arr_8 [i_1] [i_1] = min(((((min(177070252, 177070233))) ? (((!(arr_6 [i_1])))) : (!var_12))), (arr_5 [i_1]));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_15 [i_1] = ((((min((((arr_9 [i_1] [i_2] [i_4]) ? var_5 : 4)), var_11))) ? (((var_2 + 9223372036854775807) << (((min(2794254638756611730, 177070252)) - 177070252)))) : ((((!((max(2, 1)))))))));
                        var_16 = ((max((max(61343, (arr_12 [i_1] [i_1] [i_3])), 177070253))));

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_17 = (((arr_6 [i_5]) ? var_7 : var_8));
                            var_18 = 0;
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((-(arr_5 [i_1])));
                            arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = 2796143031590726830;
                        }
                    }
                }
            }
        }
        var_19 = (min(((4831 ? 1713832850 : 4834)), (((!(arr_11 [i_1]))))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = 40;
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        var_20 = 61343;
                        var_21 = 143;
                        arr_31 [i_6] [i_6] [i_6] [i_7] [i_8] [i_9] = 60693;
                    }
                }
            }
        }
        arr_32 [i_6] [i_6] = 47282;
    }
    #pragma endscop
}
