/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_10 = ((3310894533 ? (((arr_12 [i_3 - 1] [i_2] [i_4 - 1]) ? (arr_11 [i_3 - 1] [i_1 - 4] [i_2] [4]) : 1)) : 43));
                                var_11 = ((((min(62718, 984072762))) ? (((arr_6 [i_1 + 2] [i_3 - 1]) ? 30882 : (arr_6 [i_1 - 3] [i_3 - 2]))) : (var_4 * 3310894533)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_20 [4] [i_2] [i_1] [i_0] [4] = ((((arr_10 [i_5] [i_1 - 4] [i_2 - 3] [i_1 - 4]) & 2693329237)));
                                var_12 -= (max(((!(984072768 == 3310894528))), (((arr_15 [i_2 - 1] [i_5] [i_1 - 1] [i_1] [i_1] [i_5] [i_1]) <= (arr_16 [i_1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1])))));
                                arr_21 [i_6] [i_2] [i_0] [i_2] [i_0] = (((((((arr_16 [7] [i_1] [1] [3] [7] [3]) ? var_8 : (arr_6 [i_5] [i_6]))))) << ((((var_2 ? (((3310894528 ? 80127694 : 1))) : ((984072762 % (arr_8 [i_0]))))) - 80127675))));
                                arr_22 [i_2] = var_7;
                            }
                        }
                    }
                    var_13 = (((((((-(arr_7 [i_0])))))) * (min(984072763, 2047))));
                }
            }
        }
    }
    var_14 = var_2;
    #pragma endscop
}
