/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_18 = (arr_0 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_19 = (((max((max(1, (arr_8 [0] [i_1] [i_1] [i_1] [3] [i_1]))), 2517740906)) * ((((arr_1 [i_0 - 1]) >> (var_3 + 120))))));
                        arr_10 [i_0 + 3] [i_1] [i_2] [i_1] = ((~(((!(arr_4 [i_1]))))));
                        var_20 = (((((((3800624595 % var_8) <= ((max(var_0, (arr_3 [i_0] [i_0])))))))) / ((494342700 ? 2517740906 : 1777226388))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 22;i_6 += 1)
                {
                    {
                        var_21 = (min(var_21, (((((((arr_17 [8] [i_4 + 1] [4]) ? (arr_6 [i_4] [i_4] [i_4 - 1] [i_5]) : var_2))) ? ((~(arr_4 [12]))) : (arr_7 [i_6]))))));
                        var_22 -= ((((var_5 ? 31 : ((((!(arr_12 [i_5] [i_6]))))))) >> (((((-1 + var_12) | (arr_15 [i_0 + 2] [i_0] [i_0 - 1]))) + 3497684313541083815))));
                    }
                }
            }
        }
        arr_21 [i_0] = (arr_4 [16]);
        arr_22 [i_0] [i_0 + 2] = (arr_13 [i_0] [i_0]);
    }

    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        arr_26 [22] [i_7] = (arr_6 [i_7] [i_7] [1] [5]);
        var_23 += (((min((arr_8 [i_7] [i_7] [i_7] [1] [17] [i_7]), (arr_8 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) ? (!198) : 18);
    }
    #pragma endscop
}
