/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_6 [i_0 - 1] [i_1] [i_1] [i_2] = 4294967286;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 = (min(82, 17179869183));
                                var_14 = (max(var_14, (arr_1 [13])));
                            }
                        }
                    }
                    arr_11 [i_2] [i_1] [5] = (max(var_1, ((4678238907821035443 ? 12656981858550952828 : ((min(-19, -64)))))));

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            arr_16 [i_2] [i_6] [i_5] [i_2] [i_1] [i_2] = (min((((-((65524 >> (2147467264 - 2147467251)))))), ((36024398972452864 ? 36024398972452865 : 61440))));
                            var_15 = 8185178429133863093;
                        }
                        arr_17 [i_0] [i_0] [i_0 - 1] [i_2] [i_2] [i_5] = (min((arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_2]), (arr_7 [i_0 - 1] [13] [i_0 - 1] [i_0] [i_0 - 1] [1])));
                        arr_18 [i_2] [i_0 - 1] [8] [5] [i_0 - 1] [i_0] = 25878;
                        var_16 -= ((-252 ? (max(18446744073709551615, var_4)) : (((-(arr_14 [i_0] [10] [i_0 - 1]))))));
                        arr_19 [i_2] [i_2] = (arr_4 [9] [i_5]);
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_17 = (min(var_17, 13123213049292209321));
                        var_18 = 13768505165888516173;
                        var_19 -= (min(255, (max(((4678238907821035427 ? 13768505165888516176 : (arr_10 [i_0] [i_0]))), (((arr_10 [i_0] [i_0]) ? var_2 : 1))))));
                    }
                }
                var_20 *= var_10;
            }
        }
    }
    var_21 = max(var_12, 4678238907821035449);
    var_22 = var_8;
    var_23 = var_4;
    var_24 = max(var_9, ((1 ? -567817907704230665 : var_0)));
    #pragma endscop
}
