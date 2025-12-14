/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_18 = (max(var_18, (((~(max(((min(var_3, var_11))), ((var_8 ? var_3 : var_9)))))))));
                            arr_12 [8] [i_3] [14] [i_3] [i_3] = (max((~15061), ((15646 ? 8190 : 50474))));
                        }
                        for (int i_5 = 3; i_5 < 13;i_5 += 1)
                        {
                            var_19 = (min(var_19, var_9));
                            var_20 = (var_0 ? (((((max(var_15, var_4))) ? ((var_9 ? var_10 : var_15)) : var_13))) : (max(((var_14 ? var_0 : var_7)), ((max(var_13, var_16))))));
                            var_21 = (min(var_21, (((((max(((var_9 ? var_4 : var_7)), -var_1))) ? (max(var_9, (~var_15))) : var_6)))));
                            var_22 = ((var_16 ? ((((min(var_7, var_9))) ? (~var_9) : var_12)) : (!var_13)));
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_23 = (max(((max(((var_1 ? var_1 : var_5)), -15062))), ((var_0 ? (((min(var_10, var_0)))) : var_9))));
                            arr_20 [i_0] [i_0] [i_0] [4] [i_0] [i_0] = (min(61045, var_0));
                            arr_21 [4] [i_2] = (!var_0);
                        }

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_24 = ((!(((50475 ? 50459 : 50474)))));
                            var_25 |= ((((((((var_10 ? var_15 : var_3))) ? (((-32767 - 1) ? 1165 : 15060)) : ((min(var_3, var_4)))))) ? var_10 : ((~((var_0 ? var_17 : var_1))))));
                            var_26 = ((+((var_15 ? (~var_1) : ((-5645 ? 15061 : 42688))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            var_27 = (~var_11);
                            arr_27 [i_0] [i_0] [i_1 + 1] [i_8] = (((~var_3) ? ((50475 ? 51 : 32)) : -28765));
                            var_28 = var_7;
                            var_29 |= (((-16 ? var_13 : (-9223372036854775807 - 1))));
                        }
                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            var_30 = var_0;
                            var_31 = ((-((var_4 ? var_15 : var_12))));
                            var_32 = (!64);
                            var_33 = var_6;
                        }
                        for (int i_10 = 3; i_10 < 13;i_10 += 1)
                        {
                            arr_35 [i_2] [i_3] = 1074818959808947190;
                            arr_36 [i_0] = (min(((var_4 ? ((min(var_5, var_12))) : (~var_3))), (min(0, 15067))));
                        }
                        arr_37 [i_0] [12] [i_0] [i_0] [9] |= (max(var_13, (max(((min(var_16, var_11))), ((var_5 ? var_10 : var_12))))));
                    }
                }
            }
        }
        var_34 = ((~((32 ? 1 : 0))));
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        var_35 = (max(var_35, ((min(((~(~-1801636486339417721))), (((~((max(var_14, var_1)))))))))));
        arr_41 [i_11] = var_10;
        arr_42 [15] [i_11] = ((!(((var_14 ? (((var_13 ? var_2 : var_12))) : (max(var_7, var_17)))))));
    }
    var_36 = ((57355 ? (((~((min(0, (-32767 - 1))))))) : (max(var_6, var_9))));
    #pragma endscop
}
