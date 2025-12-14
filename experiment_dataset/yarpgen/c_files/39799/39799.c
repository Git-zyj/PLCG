/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_13 = var_9;
        arr_2 [i_0] = 3;
    }
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {
        arr_6 [i_1] = (max((max(((min(var_12, var_5))), (min(var_0, var_10)))), var_10));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 6;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_14 = (min(((max(1728191942, 3300347923452950901))), (min(var_2, ((min(var_4, var_7)))))));
                    arr_12 [3] [i_2 + 3] [i_2 + 3] = ((~(min((min(var_0, var_5)), (max(var_2, var_8))))));
                }
            }
        }

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_15 = (min(var_15, ((max((min(((min(var_12, var_3))), (max(var_7, var_10)))), (max(var_11, ((var_0 ? var_11 : var_4)))))))));
            var_16 = (min((((0 ? 8 : 101))), (max(var_8, 1445366263193806423))));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            var_17 = -201326592;
            var_18 -= (var_12 >= var_3);
        }
        var_19 -= (max((((min(var_11, -1)) | 1)), (-var_12 * var_1)));
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_20 = (min(var_8, ((var_9 ? var_0 : var_11))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    arr_25 [i_6] = (((var_11 + (((min(var_1, var_0)))))));
                    arr_26 [i_6] [i_7] [i_8] = (min(0, 1115336937));
                    var_21 = var_3;
                    var_22 -= (min(((max((min(1115336949, -13541)), var_4))), ((-((var_1 ? var_2 : var_12))))));
                }
            }
        }

        for (int i_9 = 2; i_9 < 18;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                var_23 = (min(((-((min(var_0, var_0))))), var_7));
                var_24 = ((-(min(-9054869330827884405, 10690402930735961980))));
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_25 = ((-(((min(var_9, var_5)) * (((min(var_3, var_12))))))));
                            arr_38 [i_11] [i_11] [i_9] [i_11] = min(10, ((40562 ? -1115336954 : (-127 - 1))));
                            arr_39 [i_11] [i_11] [i_11] [i_12] [i_12 + 3] [i_12] = (min((min(var_10, ((min(var_8, var_3))))), ((max(-493237803, ((max(var_4, var_7))))))));
                            var_26 = (min((((!((max(var_6, var_10)))))), (min(var_11, var_12))));
                            var_27 = (max(9223372036854775804, -1115336929));
                        }
                    }
                }
                arr_40 [i_9] [i_9 + 2] [i_9 - 1] [i_9] |= (var_3 ? ((var_9 ? ((var_3 ? var_5 : var_11)) : (min(var_11, var_9)))) : (((min(var_4, var_3)))));
            }
            for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
            {
                var_28 = var_6;
                arr_43 [13] [i_14] [i_6] = (~-3300347923452950902);
                arr_44 [i_14] [i_6] [i_6] [i_14] = (max((min(0, -752817458)), ((min((min(var_7, var_0)), ((max(var_8, var_8))))))));
            }
            var_29 -= (min(((var_5 ? var_8 : var_0)), (min((min((-2147483647 - 1), 186)), ((min(var_9, var_12)))))));
            var_30 = (min(var_30, ((min(1, 32767)))));
            var_31 = (min(1445366263193806431, 1));
        }
        arr_45 [i_6] = (max(((min((min(var_1, var_7)), (min(var_7, var_4))))), var_0));
    }
    var_32 = (max(var_32, ((min((min((min(var_10, var_4)), (max(var_10, var_7)))), ((max(-var_1, ((min(var_12, var_0)))))))))));
    var_33 = (max(((min(((max(var_4, var_12))), (min(var_3, var_8))))), (min((max(var_5, var_8)), var_4))));
    #pragma endscop
}
