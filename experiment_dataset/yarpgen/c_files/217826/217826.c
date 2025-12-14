/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = ((-(var_15 <= -5891707083039784366)));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_9 [i_1] = (min((max(var_12, (((!(arr_3 [i_0])))))), ((max(var_2, (arr_0 [i_2]))))));
                    arr_10 [i_1] [i_1] = (arr_5 [i_0] [9] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((((((14372155643405706524 ? 25 : 14372155643405706537))) || (arr_3 [i_0]))))));
                                var_21 = (min((min((arr_14 [i_0] [i_1 - 2] [i_2] [i_0] [i_4 + 1]), (arr_14 [i_3] [i_1 - 2] [i_2] [i_2] [i_4 + 2]))), ((-(arr_14 [i_0] [i_1 - 1] [i_1 - 1] [i_3] [i_4 + 2])))));
                            }
                        }
                    }
                }
                var_22 = var_17;
                var_23 = -5891707083039784362;
                var_24 = (max(var_10, (15 < 0)));
            }
        }
    }
    var_25 -= (min((((var_16 >= (min(var_3, var_2))))), (max(var_14, var_14))));
    var_26 = var_12;
    var_27 = var_7;
    var_28 = (min(var_28, (((0 ? var_18 : ((min(var_11, (min(var_17, 6))))))))));
    #pragma endscop
}
