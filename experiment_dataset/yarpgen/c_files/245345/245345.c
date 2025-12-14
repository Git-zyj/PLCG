/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (((((arr_1 [i_0 - 1]) + 2147483647)) >> (((arr_3 [1] [1]) + 1195019114))));
                var_12 = (min(var_12, (arr_2 [i_0 + 1] [i_0 - 1])));
                var_13 |= arr_1 [1];
                var_14 = (arr_0 [i_0 + 1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_15 = ((((((5727 >> (5727 - 5717))))) ? 5727 : (((arr_5 [i_3]) ^ (((!(arr_2 [i_2] [5]))))))));
                arr_8 [i_2] [i_2] = (arr_2 [i_3] [i_2]);

                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    var_16 -= ((-((max(59821, (arr_11 [i_4 + 2] [i_4 - 1] [i_4 - 1]))))));
                    var_17 = var_4;
                    var_18 -= ((5727 ? 5745 : (((arr_4 [i_4 + 1] [i_4 + 2]) ? (arr_2 [i_2] [i_4 + 2]) : (arr_2 [i_2] [i_4 + 1])))));
                    var_19 = (min(var_19, var_3));
                }
                arr_12 [i_2] = (max(5745, 59790));
                var_20 = (max(var_20, (arr_7 [6])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 7;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            {
                var_21 = ((-var_2 && ((((arr_7 [i_5]) ? (arr_7 [i_5]) : var_6)))));
                var_22 = ((~(((arr_5 [i_5 + 1]) ? 5727 : (arr_5 [i_5 + 3])))));
            }
        }
    }
    #pragma endscop
}
