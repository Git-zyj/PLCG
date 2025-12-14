/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_12 != (min(((min(var_10, var_2))), ((var_5 ? var_0 : 118))))));
    var_14 = (min(var_12, 3630475007150606386));
    var_15 = (((max(-3630475007150606386, var_7)) / (min(var_11, 56))));
    var_16 = (min(var_16, (((~(((!74) + (min(var_3, var_9)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_17 = ((~((-(arr_9 [i_2] [7] [i_2 + 1] [i_2 + 1])))));
                        arr_11 [i_2] [i_2] = ((((((!(arr_5 [i_0] [i_2] [i_2] [i_0])))) <= (arr_5 [5] [i_1] [i_2] [2]))));
                    }
                    var_18 -= max(((((max(56, (arr_7 [i_0] [i_1] [4] [i_2 - 1])))) ? var_9 : (arr_8 [i_0] [i_2] [i_1] [2] [i_2]))), (min((((!(arr_10 [8])))), var_1)));
                }
            }
        }
    }
    #pragma endscop
}
