/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = var_4;
    var_12 = ((min(((var_4 ? 62 : 235)), var_5)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = ((((((arr_1 [i_0] [i_1]) ? (((arr_1 [i_0] [i_0]) ? 1666800840 : var_9)) : ((min((arr_1 [i_0] [i_1]), (arr_2 [i_0]))))))) ? (((((min(108086391056891904, (arr_2 [i_0])))) ? (~1) : (39 & var_0)))) : (arr_2 [i_0])));
                var_14 = -var_1;
                var_15 = ((+((59032 ? (43 + var_5) : (max(419220636602767991, (arr_1 [i_0] [i_1])))))));
                var_16 = (min(var_16, (((((var_9 >= (arr_3 [i_0 + 3] [i_0 + 3]))) ? (max((((arr_4 [i_0 - 2] [i_1] [i_0 + 4]) & (arr_1 [i_1] [i_0]))), (arr_3 [i_0] [i_1]))) : (((var_6 <= ((min(var_7, var_8)))))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_4] [i_4] = ((((((arr_7 [i_0] [i_0 - 1] [i_0] [i_0 + 4] [i_4 + 1] [i_4 + 1]) ? 28 : (arr_7 [i_0] [i_0] [i_0] [i_0 + 2] [i_4 + 1] [i_4])))) ? (min(var_8, (arr_7 [i_0] [i_0] [i_0] [i_0 - 2] [i_4 + 1] [i_0 - 2]))) : (arr_7 [i_0 - 1] [i_0 + 2] [i_0] [i_0 - 1] [i_4 + 1] [i_4])));
                                arr_16 [i_4] [i_4] = (arr_6 [i_0 + 1] [i_0 + 4]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((((max((max(var_6, var_7)), 255))) ? ((var_8 ? 3950943503860414571 : (max(var_1, var_2)))) : var_9));
    #pragma endscop
}
