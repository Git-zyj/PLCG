/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_15 = (min((max((arr_1 [i_0]), ((104 ? var_14 : 7)))), (arr_0 [i_0 + 1])));
        arr_2 [i_0 - 1] [i_0] = var_12;
        var_16 = (max(51, (arr_1 [2])));
        var_17 = var_14;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_1] [8] [i_3] = (min((min((arr_7 [i_2 + 2] [i_2] [i_2]), (1603012794 || var_12))), 917635492));
                        var_18 = -69;
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [0] = (min(var_8, (!19928)));
                    }

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_19 = (min(-48, var_11));
                        arr_17 [i_0 - 3] [i_1 - 1] [i_2] [i_4] [i_0] = ((-((min(-104, (arr_8 [i_2 + 3] [i_2 - 1] [i_2 + 3] [i_2 + 3]))))));
                        var_20 = (min(-var_13, var_8));
                        arr_18 [i_0] = ((~((((var_5 ? var_14 : var_10)) & (((65520 ? 104 : 834603229)))))));
                        arr_19 [14] [i_1] = (((-((((arr_5 [i_0]) >= (arr_1 [i_0])))))));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_21 = 104;
                        arr_23 [8] [i_5] [i_5] [i_5] = (~var_6);
                    }
                }
            }
        }
    }
    var_22 = ((((max(var_1, (-7785 | 251)))) ? 9822544201869741800 : ((((max(var_11, var_5)) >> (-60 - 4294967233))))));
    #pragma endscop
}
