/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_19 += (((arr_4 [i_0 - 3]) ? var_6 : (((arr_4 [i_0 + 1]) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 - 3])))));
                var_20 = (min(var_20, (((((((arr_4 [i_0 - 1]) * (arr_4 [i_0 - 4])))) ? (((((arr_1 [i_1 + 1] [i_0]) ? (arr_1 [i_0] [i_1]) : var_6)) & (((min((arr_3 [i_0] [i_1]), var_6)))))) : (((32329 ? -29 : -44681753))))))));

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_21 = ((~(arr_1 [i_1 + 1] [i_0 - 4])));
                    arr_7 [i_0] [i_1] [i_2] = (((arr_6 [i_2] [i_1] [i_0] [i_0]) && (arr_6 [i_0 - 2] [i_1] [i_0 - 2] [i_2 - 1])));
                    var_22 = var_9;
                    var_23 = (max((arr_5 [i_0] [i_1] [i_1]), var_18));
                }
            }
        }
    }
    var_24 &= ((-var_12 < ((var_9 ? var_2 : var_13))));
    var_25 = var_1;
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                {
                    var_26 += (max(((var_5 ? (arr_0 [i_3 + 1]) : (arr_0 [i_3 - 1]))), (((arr_0 [i_3 - 1]) ? (arr_0 [i_3 - 2]) : (arr_0 [i_3 - 2])))));
                    var_27 = var_14;
                    var_28 = ((((~(((arr_2 [i_3] [14]) ? var_17 : (arr_8 [i_3]))))) >= ((((arr_8 [i_3 + 1]) ? (arr_5 [i_5 - 2] [i_3 - 2] [i_3 - 2]) : (arr_5 [i_5 - 1] [i_3 + 1] [i_3 + 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
