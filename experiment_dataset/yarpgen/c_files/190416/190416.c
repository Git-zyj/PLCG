/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (max(((((((-(arr_1 [14])))) ? (arr_2 [1] [1]) : -var_7))), ((~(min((arr_5 [i_0] [i_1 - 2] [i_1 - 2] [5]), (arr_2 [i_0] [i_0])))))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_13 *= ((((-(max((arr_4 [i_3]), var_2)))) / ((max((arr_1 [1]), var_4)))));
                        arr_10 [i_0] [i_0] = (arr_2 [i_1 - 2] [i_1 - 1]);
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_14 [6] [6] [i_2] [i_2] [i_0] [i_2] = (((arr_0 [i_0]) ? ((((arr_3 [i_0] [i_1] [i_2]) ? var_8 : ((var_7 << (((arr_5 [i_0] [i_0] [9] [i_0]) - 14897))))))) : (min((min(var_8, var_9)), (arr_6 [i_0] [i_1 - 1] [i_1 - 1])))));
                        arr_15 [i_0] [i_1 + 2] [i_2] = ((!(arr_6 [i_0] [i_0] [i_4])));
                        var_14 ^= (((arr_12 [i_1 + 1] [i_1 + 2] [2] [i_4]) ? (arr_12 [i_1 - 2] [i_1 + 2] [4] [i_1]) : (min((arr_12 [i_1 + 2] [i_1 - 1] [18] [10]), var_6))));
                    }
                }
            }
        }
    }
    var_15 = ((!(((var_9 ? var_1 : (((max(var_11, var_10)))))))));
    #pragma endscop
}
