/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_10 / var_11);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] = (arr_7 [15] [i_1] [i_2 - 2] [i_2]);
                    arr_10 [i_2] [2] = 0;
                    var_16 = var_9;
                    var_17 = (min((!0), ((min(var_3, (arr_8 [i_0 - 1] [i_0 - 1] [i_1] [i_2 - 2]))))));
                    arr_11 [6] [i_2] [i_2] [2] = (((max(-var_12, -var_2)) % (arr_2 [i_0 + 2])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                arr_17 [6] [i_4] = ((((((arr_5 [i_3 - 2] [i_4] [i_4]) < (arr_5 [i_3 + 2] [i_3 + 2] [2])))) >> (((((arr_15 [i_3]) <= (arr_8 [i_3 + 1] [i_3] [i_4] [i_4])))))));
                var_18 |= (((arr_14 [i_3 + 1] [i_3 + 2]) == (((arr_12 [i_3 + 1]) / (arr_14 [i_3 - 2] [i_3 + 2])))));
            }
        }
    }
    var_19 |= (max((min((min(var_2, 7384112035410667134)), (((var_11 ? var_14 : 64993))))), (((!(var_6 * var_13))))));
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                {
                    var_20 = (min(((var_0 ? (arr_6 [8]) : (arr_22 [i_5 - 1]))), (((((arr_22 [i_5]) / var_2))))));
                    var_21 = (min(((((2914019291 ? var_3 : (arr_2 [i_5]))))), var_13));
                    arr_27 [i_5 - 1] [i_6] [i_6 - 1] [i_6 - 1] = max((((1 <= (((arr_3 [i_5] [8]) + 2715121965))))), 17773);
                    arr_28 [i_5 - 1] [i_6] = var_11;
                    var_22 = ((!(2914019291 & var_10)));
                }
            }
        }
    }
    #pragma endscop
}
