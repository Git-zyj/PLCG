/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_4 [i_1] = 11561453546488389910;

            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                var_11 = ((max((arr_5 [i_2 - 1] [i_2] [i_1]), ((var_4 ? 11561453546488389910 : 6885290527221161705)))) > (((6885290527221161709 ? -var_6 : (!6885290527221161727)))));

                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    arr_11 [i_1] [i_2 + 2] = (((arr_3 [i_1]) > var_6));
                    var_12 += (max(var_7, 6885290527221161705));
                }
                var_13 += (min(((~(arr_7 [i_2] [6] [i_2 - 1]))), (arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                var_14 += (arr_1 [i_0]);
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                arr_14 [i_1] = 5824149491972720537;
                var_15 = 2510499496;
                arr_15 [i_0] [i_1] [i_4] = (((arr_9 [i_0] [3] [i_4] [i_1]) ? ((((var_4 <= (arr_12 [i_1] [i_4]))) ? var_2 : ((min(var_3, 5768849753239565855))))) : var_0));
                var_16 = var_1;
            }
            var_17 = var_9;
        }
        for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
        {
            var_18 ^= var_0;
            var_19 += (arr_0 [6]);
            var_20 = 2390894019;
        }
        for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
        {
            var_21 = (arr_2 [i_6] [0]);
            arr_22 [i_6] [8] [i_6] = (((((~((min(9400, -90)))))) > (max((arr_5 [i_0] [i_6 + 1] [i_6]), 8695435932330032060))));
        }
        for (int i_7 = 1; i_7 < 9;i_7 += 1) /* same iter space */
        {
            var_22 = ((-(!var_1)));
            var_23 = (max(var_23, (((-(((arr_8 [i_0] [i_7] [i_7 - 1]) ? (arr_6 [i_0] [7]) : (((arr_24 [8] [8] [6]) / (arr_9 [i_0] [i_7] [6] [4]))))))))));
        }
        arr_25 [i_0] [i_0] = -28;
    }
    #pragma endscop
}
