/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((~(var_6 | var_2))), var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((max(var_9, (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((arr_0 [i_0]) / (arr_4 [i_0] [i_1])))));
                arr_7 [i_0] = ((((((arr_4 [i_0] [0]) ? (((arr_0 [i_0]) ? var_1 : 16381021166350244310)) : var_10))) ? (arr_2 [i_0] [i_1] [i_0]) : ((((arr_5 [i_1]) || var_4)))));
                arr_8 [5] = ((((max((arr_0 [i_1]), (arr_0 [i_1])))) & (((!(arr_0 [i_0]))))));
                var_15 = (-8000972130269186245 % 8000972130269186260);
                var_16 = (max(var_16, 24));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_17 = (min((((((var_13 > (arr_11 [i_3] [i_3])))))), -8000972130269186245));
                    arr_17 [i_3] [i_3] [i_2] [i_3] = (((~(arr_14 [i_2] [i_3]))));
                }
            }
        }
    }
    #pragma endscop
}
