/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_0] [i_0] [8] = (max(var_1, (arr_2 [i_0] [3] [i_2])));
                    var_17 = (max(var_17, var_16));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = (max((((((((arr_6 [i_0]) ? -1 : -4763360347401874836))) ? -var_10 : var_10))), (max(-4763360347401874819, -117))));
                                arr_13 [10] [i_1] [i_2] [i_0] [i_4] = (arr_0 [i_2] [i_4]);
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_0] = (((((((20 ? var_12 : var_3))) ? ((var_11 ? (arr_2 [i_2] [i_1] [i_0]) : 15)) : (((4763360347401874830 | (arr_1 [i_2])))))) % ((min((arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] [i_2]), (arr_0 [i_0] [i_0]))))));
                    var_19 = (((arr_2 [i_0] [i_1] [9]) - (((+((1675012647 ? (arr_5 [i_0]) : (arr_0 [i_0] [i_0]))))))));
                }
            }
        }
    }
    var_20 = (max(var_1, (((-4763360347401874830 >= (-725279730 >= 2619954669))))));
    var_21 += ((!((max(var_10, (min(var_10, var_6)))))));
    #pragma endscop
}
