/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((!(min((arr_1 [7]), (arr_1 [i_0]))))));
        arr_3 [i_0] = var_14;

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [1] [3] [i_2] [4] |= ((((var_5 ? (arr_10 [i_0] [i_1] [i_2] [i_3] [i_1 + 1]) : var_3))));
                        arr_12 [i_3] [i_1 + 2] = (min(4294967267, ((min(-63, -76)))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_4 = 3; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 7;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] [i_1] [6] [i_5] [i_6] = (min((((min(var_1, (arr_5 [i_0] [i_0] [i_0]))))), ((min((arr_4 [i_0] [i_1] [i_0]), (arr_10 [i_0] [9] [i_5] [9] [9]))))));
                            arr_23 [i_6] [i_4] [i_4] [3] [3] = (min(var_3, (min((!var_1), var_16))));
                        }
                    }
                }
            }
        }
        arr_24 [i_0] = ((((-(arr_8 [1] [i_0] [i_0] [i_0] [1] [i_0]))) == (arr_7 [i_0] [7] [7] [i_0])));
    }
    var_20 = (min((!var_14), var_18));
    #pragma endscop
}
