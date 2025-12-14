/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((((arr_3 [i_0 - 1]) + (min((arr_3 [i_0 - 1]), (arr_1 [i_1]))))))));
                arr_6 [i_0] = (min((((arr_0 [i_0 - 1] [i_0 - 1]) ? var_13 : (arr_0 [i_0 - 1] [i_0 - 1]))), (var_12 == 1)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_17 = (arr_3 [i_0]);
                            arr_13 [i_0] [i_0] = var_6;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_18 = (((((0 ? 3023077284 : 5084904844562822358))) / var_15));
                            var_19 = 45879;
                            var_20 = var_8;

                            for (int i_6 = 1; i_6 < 20;i_6 += 1)
                            {
                                var_21 = (arr_19 [i_0 + 1] [i_1] [i_4] [i_6]);
                                var_22 = var_8;
                            }

                            for (int i_7 = 0; i_7 < 23;i_7 += 1)
                            {
                                var_23 ^= 0;
                                arr_24 [i_1] [i_4] [i_0] [i_5 + 4] [i_1] = (~var_15);
                                var_24 = (max((max(var_2, var_7)), (((!(((arr_15 [i_0] [i_4]) < -5084904844562822358)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_0;
    #pragma endscop
}
