/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-124 > 124);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_1] = ((-(arr_9 [i_0] [i_0] [5])));
                    var_18 *= ((((arr_6 [i_2] [7] [i_0]) & (max(1941764257, (arr_0 [i_0]))))) & ((((((~(arr_2 [i_0] [i_0])))) ? (arr_3 [i_0]) : (~0)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_3] [i_5] [10] = ((var_4 != ((((arr_2 [i_3] [i_3]) + (arr_4 [i_3]))))));

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_21 [i_4] [i_4] [i_4] [i_4] [i_4] [i_6] = ((((1 ? (arr_4 [i_5]) : (arr_6 [i_3] [i_4] [i_5]))) * (((arr_6 [i_3] [i_3] [i_3]) ? (arr_4 [i_6]) : (arr_6 [i_4] [i_5] [i_6])))));
                        var_19 = max((223 <= -1), (arr_0 [i_6]));
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_20 -= 0;
                        arr_25 [i_4] [i_4] [i_3] [i_7] = (((arr_23 [i_3] [i_4] [i_5] [i_5]) ? -124 : (((((arr_22 [2] [i_4]) || (arr_3 [i_4]))) ? ((-125 ? 125 : 1246118801)) : var_8))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
