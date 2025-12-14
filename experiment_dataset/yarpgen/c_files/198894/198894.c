/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] = (min(((((((5 ? (arr_2 [i_1] [i_0] [i_0]) : (arr_1 [i_0 - 4] [i_0 - 1])))) || (((0 - (arr_0 [i_0]))))))), ((~(((arr_1 [i_0] [i_1]) ? 5 : (arr_3 [i_0] [i_1])))))));
                var_16 = ((1957692924 ? -52 : (max(4611668426241343488, 1957692935))));
                var_17 &= (arr_1 [i_0] [i_0]);
            }
        }
    }

    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_13 [i_4] |= (min((~0), (--14177657066180084372)));
                    arr_14 [i_3] [i_3 - 1] [i_3] = ((-(((((arr_7 [i_2 + 2] [4]) ? (arr_7 [i_3 + 2] [i_4]) : (arr_10 [9] [i_3]))) + (((-(arr_6 [i_2]))))))));
                    arr_15 [7] [i_3] [i_4] [i_4] = -22;
                    var_18 = 1099511627775;
                    var_19 = ((~(arr_10 [i_4] [i_4])));
                }
            }
        }
        arr_16 [i_2 + 1] = ((!(((~(~536870912))))));
    }
    #pragma endscop
}
