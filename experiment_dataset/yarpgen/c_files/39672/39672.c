/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((((max(var_6, var_3))) ? var_13 : var_8)), (((var_8 || ((max(var_13, var_13))))))));
    var_16 = (max((383838402 & var_12), (min((var_14 | var_9), (~var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_9 [i_2] [i_0] [i_0] [i_2] = ((((-(arr_7 [i_0 - 2] [i_1]))) + -var_5));
                    arr_10 [i_1] [i_2] [i_2] = (max((max((arr_5 [i_0 - 1]), (arr_0 [i_0 + 1]))), (((arr_0 [i_0 - 3]) << (var_8 - 219)))));
                }
                var_17 = var_1;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    var_18 = (min((((var_5 ? (arr_3 [i_5] [i_3]) : (arr_5 [i_3])))), (max(var_7, (arr_8 [i_3] [i_3] [i_5] [i_3])))));
                    arr_17 [i_3] [i_5] [i_3] = (((~(arr_7 [i_5] [i_3]))));
                }
            }
        }
    }
    #pragma endscop
}
