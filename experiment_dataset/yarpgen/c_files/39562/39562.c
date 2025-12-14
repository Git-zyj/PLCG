/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 &= (arr_1 [i_0] [i_0]);
        arr_2 [i_0] = (1 || -32758);
        arr_3 [i_0] = 511;
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_12 [i_4] [i_2] = 5909458462701754540;
                        var_14 = (max(var_14, ((((((-(arr_10 [i_3] [i_4 - 3] [i_4] [i_3])))) | (max(2469, (min((arr_11 [i_4] [i_3] [i_3] [i_1]), 13739668032347749057)))))))));
                    }
                }
            }
            arr_13 [i_2] [4] [i_2] = ((((((arr_6 [i_1] [i_1 - 1] [i_2]) >> (((arr_6 [i_1 - 1] [i_2] [i_2]) - 102))))) ? 14124699860052255785 : (((min((arr_6 [i_1] [i_1] [i_1]), (arr_6 [i_1 + 1] [i_1] [i_2])))))));
            var_15 = (min(var_15, (arr_8 [i_2] [20] [i_1 + 1] [i_1])));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_16 = ((((((arr_9 [i_1 + 1]) << (((arr_10 [i_1] [i_1] [i_1 + 1] [12]) + 680205765605527645))))) ? ((((arr_4 [i_1] [i_1 - 1]) ? (arr_4 [i_1 + 1] [i_1 - 1]) : (arr_9 [i_1 - 1])))) : (min((arr_10 [i_1] [i_1 - 1] [i_1 + 1] [2]), (arr_9 [i_1 + 1])))));
            arr_16 [i_5] = (max(((((arr_9 [i_1]) >= (arr_11 [i_1 - 1] [i_1 + 1] [24] [i_5])))), -1088579849));
            var_17 = (min((arr_6 [i_1] [i_5] [i_5]), (arr_15 [i_1 + 1] [i_1] [i_1])));
        }
        for (int i_6 = 1; i_6 < 24;i_6 += 1)
        {
            var_18 = arr_5 [i_1] [i_6];
            arr_20 [i_6] [i_1] [i_1] = 4707076041361802575;
            arr_21 [i_1] = (arr_19 [i_1 - 1]);
        }
        arr_22 [i_1] = 18030;
    }
    var_19 = var_7;
    #pragma endscop
}
