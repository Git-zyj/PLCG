/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [8] = ((-0 ? (arr_1 [1]) : var_0));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_15 [i_0] [i_2] [12] [i_0] = var_10;
                        arr_16 [i_0] [i_0] [10] [i_0] [18] [i_0] = (min((min(-54, 7748939864976279699)), 1));
                    }
                }
            }
            arr_17 [i_0] = (max(((((max(20, var_11))) ? ((((var_2 == (arr_9 [i_0]))))) : (min(10697804208733271920, (arr_4 [i_0]))))), (((((((arr_5 [23] [16]) ? (arr_9 [i_0]) : 0))) ? ((~(arr_12 [i_1] [i_1] [i_0] [i_1]))) : (arr_6 [i_0 + 1]))))));
        }
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            arr_21 [i_0] [i_0] = (arr_0 [i_0 + 1]);
            arr_22 [i_0] [i_0] = (((((~(arr_14 [i_0])))) && ((((arr_4 [2]) ? (max(20, (arr_20 [i_0]))) : (min(20, 0)))))));
            arr_23 [i_0] = ((-(max(0, 6948687004793146253))));
            arr_24 [i_0] [i_0] = (max((arr_20 [i_0 - 1]), (((!(((var_7 * (arr_14 [i_0])))))))));
            arr_25 [i_0 + 1] [i_0] [i_0 - 2] = (min((((arr_10 [i_4 + 3] [i_4 + 1] [i_4 + 2] [i_4 - 2]) ? -var_5 : (var_3 <= 113100121))), (!1316571514755131542)));
        }
        arr_26 [i_0] = (((max(45, 10697804208733271920)) * ((max(20, 12477)))));
    }
    var_14 = var_1;
    var_15 = (((-(max(var_5, var_6)))) == ((min(((var_12 ? var_11 : var_5)), var_10))));
    #pragma endscop
}
