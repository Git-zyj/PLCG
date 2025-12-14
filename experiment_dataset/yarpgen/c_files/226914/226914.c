/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [4] [i_2] [i_2] = ((max(((arr_1 [17] [17]), (arr_4 [i_0] [i_1] [i_2])))));
                    var_12 &= (-((-(arr_2 [i_0]))));
                }
            }
        }
    }
    var_13 = (min(var_13, var_9));

    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_14 &= (-292638602 * 0);
        var_15 = (min(var_15, ((((max(526862507, (min(-292638596, 1)))) ^ (arr_0 [i_3]))))));
        var_16 = ((292638602 & (arr_8 [i_3])));
        var_17 = (max((min((((arr_9 [i_3] [i_3]) ? (arr_2 [i_3]) : var_6)), -2023111827)), (((arr_9 [i_3] [i_3]) ? ((-(arr_7 [i_3]))) : 0))));
    }
    #pragma endscop
}
