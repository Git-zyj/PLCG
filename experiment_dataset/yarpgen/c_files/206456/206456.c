/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_14 << (min(((max(var_17, var_13))), var_7))));
    var_19 = -11402;

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [1]);
        arr_3 [i_0] = var_3;
        arr_4 [i_0] = (arr_0 [12]);
        arr_5 [i_0] [i_0] = ((-1776689824 + 2147483647) << (var_3 - 28359));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1 - 2] = (6394 - 6880437471469709279);
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 21;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_20 [i_1] = ((-(arr_15 [i_2 - 2] [i_2] [i_1])));
                                var_20 += ((0 ? 64195 : 682211214));
                            }
                        }
                    }
                    var_21 = (max((((min(var_16, (arr_15 [i_3] [4] [i_3]))) * (((1812095041 % (arr_11 [19])))))), (min(var_11, (var_17 && var_14)))));
                    var_22 = (arr_14 [i_1 + 2] [i_1 + 2] [i_1]);
                }
            }
        }
        var_23 = (min(1, 1));
        var_24 = ((-(((!(arr_11 [i_1 + 2]))))));
        var_25 = (~var_7);
    }
    for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = ((-((1513149777 << (((((arr_22 [i_6 - 1]) + 1776588953)) - 29))))));
        arr_24 [i_6] = (((((max((arr_8 [i_6 - 2]), (arr_8 [i_6 - 2]))) + 2147483647)) << (((!(arr_8 [i_6 + 2]))))));
        arr_25 [i_6] = 1;
    }
    #pragma endscop
}
