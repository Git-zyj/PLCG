/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((4294967294 ? ((((max(161, 1))) ? (var_9 % var_16) : (!var_6))) : (((48109 & var_6) ? ((max(32767, var_9))) : 17426))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_19 *= (((((arr_0 [i_0]) && 43)) ? 48130 : var_10));
        var_20 = 23762;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_21 = (((min(-var_10, (9887 ^ 4294895109))) < (max((arr_1 [i_1]), (arr_1 [i_1])))));
        var_22 = ((~(((arr_4 [i_1]) ? 1 : 1913))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            var_23 = var_0;
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_18 [i_4] [i_3 - 1] [i_2] [i_2] [i_6] = var_13;
                            var_24 = ((207 ? 7 : -9903));
                        }
                    }
                }
            }
            var_25 = (~var_3);
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_26 = 4294967295;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        var_27 = (max(((216 ? 0 : 1)), ((max(0, 1913)))));
                        var_28 = ((-(arr_14 [15] [i_2] [15] [i_7] [i_2] [15])));
                        var_29 = (((var_10 >> (var_7 + 72))));
                    }
                }
            }
        }
        var_30 = ((((((var_7 ? var_11 : (arr_15 [i_2] [0] [14] [i_2] [i_2]))) - -var_2))) ? (!var_13) : (~var_3));
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
    {
        arr_32 [i_10] = (~var_13);

        for (int i_11 = 2; i_11 < 14;i_11 += 1)
        {
            var_31 = (max(((var_14 ? (arr_15 [i_11] [i_11] [i_11] [i_11] [i_11 + 1]) : 1912)), (arr_15 [i_11] [i_11] [i_11] [i_11] [i_11 - 1])));
            var_32 = (min(var_32, (((-((var_9 ? ((var_9 ? var_12 : var_15)) : (((min(0, 4)))))))))));
            var_33 -= (-(~-23763));
            var_34 = (min((4083306352 & 2325801559), ((((~2851807468) ? ((max((arr_23 [i_10]), 64))) : ((var_7 ? var_7 : var_8)))))));
            var_35 = (((((-7407 ? var_4 : 12))) || ((max((-2147483647 - 1), (arr_23 [i_11 - 2]))))));
        }
        arr_35 [i_10] [i_10] = 0;
        var_36 = (max(0, (max(3, (arr_14 [i_10] [1] [1] [i_10] [8] [i_10])))));
    }
    var_37 = (min(var_37, ((((min(var_8, var_10))) ? var_3 : ((((-10331 ? var_9 : -42))))))));
    var_38 = -74;
    var_39 = ((-(((min(534, 3387314050)) + 23742))));
    #pragma endscop
}
