/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_7));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_10 [4] [i_0] [i_2] [i_0] [i_2] = ((-((-((0 ? 2241711004 : var_5))))));
                        var_12 = (max(var_12, ((max(((2241710996 ? 2488982475 : 2053256291)), (((arr_6 [i_0] [i_1] [i_2] [i_3]) ? (((arr_5 [i_0] [i_0] [i_2] [i_1]) * 2241711000)) : (((7 / (arr_5 [7] [7] [7] [i_0])))))))))));
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = 2241710998;
        var_13 = (-(((arr_5 [i_0] [i_0] [13] [i_0]) ? (((arr_0 [6]) ? (arr_4 [i_0] [i_0]) : var_8)) : (2053256294 + 255))));

        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
        {
            arr_16 [i_0] [i_0] [i_4] = (arr_8 [i_0] [i_0] [i_0] [i_4] [i_4] [i_4]);
            var_14 = -var_10;
            var_15 = (min(var_15, (((+((((var_3 || 2241711004) && ((!(arr_7 [i_0] [3] [i_0] [i_0] [i_0] [0])))))))))));
            var_16 = ((-((var_5 * (arr_9 [i_0] [i_0] [6] [6])))));
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
        {
            var_17 = var_1;
            arr_20 [i_0] = (max(((max((arr_5 [i_0] [i_0] [i_5] [i_5]), (arr_17 [i_0] [i_0] [1])))), (!1)));
            arr_21 [i_0] [i_0] = (((((-var_3 * (arr_5 [i_0] [i_0] [i_5] [i_5])))) || (((-15189 ? 2241711000 : 0)))));
        }
        var_18 = (arr_9 [i_0] [i_0] [7] [1]);
    }
    for (int i_6 = 3; i_6 < 11;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_19 = 137;
            arr_27 [i_7] = var_4;
            var_20 = ((((max(-var_5, 5466))) ? var_6 : (arr_23 [i_6] [3])));
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_21 = var_3;
            var_22 = (max(((9000093743611983089 ? 3 : ((min(3792891017, -27))))), 23));
            arr_30 [i_6] [i_6] [i_6] = (~-9000093743611983093);
            arr_31 [i_6 + 1] [i_6] [i_8] = arr_18 [i_6 + 4] [2];
        }
        var_23 = var_0;
    }
    var_24 = -31494;
    var_25 = ((12241 ? (~var_5) : 0));
    #pragma endscop
}
