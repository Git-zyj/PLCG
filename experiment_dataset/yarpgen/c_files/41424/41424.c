/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!3277174364);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((((((!1017792931) ? 0 : var_0))) ? ((min(((~(arr_5 [i_0] [i_0]))), (~3277174364)))) : (1017792932 | 3437423667239108277))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_19 -= (((!(((15 ? var_11 : 3277174364))))));
                                var_20 += ((((((3137216456136483643 ? 1 : (arr_0 [i_0] [17]))) - (arr_11 [i_0] [9] [0] [i_4] [i_4]))) - (((-(arr_12 [i_2] [i_1] [i_1] [10] [2] [i_4] [i_4 + 1]))))));
                                arr_13 [i_0] [0] [6] [i_3] [18] = 2098075322;
                            }
                        }
                    }
                }
                var_21 = (max(var_21, ((min((!-117), (min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [14]))))))));
            }
        }
    }
    var_22 += (((((!(!var_0)))) << (((((var_8 ? var_7 : var_3))) - 3801138296))));
    var_23 = ((((~var_2) * var_3)));
    #pragma endscop
}
