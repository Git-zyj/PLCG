/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(((!(9451976947715411394 && -1705086930))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 += (max(((~(arr_2 [i_0] [i_1]))), ((-(((!(arr_1 [6]))))))));
                    var_14 += ((arr_6 [i_0] [1] [14] [i_0]) ? 1 : (max((~1705086929), (1927755863 < 427095193))));
                    arr_8 [i_0] [1] [4] |= ((((arr_4 [10] [i_1] [i_1]) ? (arr_6 [i_0] [i_1] [12] [i_0]) : 3458764513820540928)));
                    var_15 = -1927755880;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            {
                arr_14 [i_3] [i_3] [i_3] = (min((arr_13 [i_3] [i_3]), (((!((((arr_13 [i_3] [i_4 - 1]) ^ 14691559705902880919))))))));
                arr_15 [i_3] = var_5;
            }
        }
    }
    var_16 = (~638840561);
    var_17 &= (((((var_7 || var_0) ? var_2 : var_5)) * var_2));
    #pragma endscop
}
