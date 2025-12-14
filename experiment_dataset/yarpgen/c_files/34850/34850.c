/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (min(var_14, var_4));
                var_15 |= (((((max(0, 5)))) ? ((max((max(var_12, (arr_2 [i_1] [i_1]))), -var_2))) : (max((max((arr_3 [i_1] [i_0] [i_0]), 8210141046930194391)), (-11426 != var_13)))));
                var_16 += ((~(arr_3 [i_0] [i_0] [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            {
                var_17 = (((arr_6 [i_2]) ? var_3 : var_6));
                var_18 |= ((((((~(arr_2 [i_2] [i_3 + 3]))))) ? ((((!((((arr_9 [i_2] [i_3]) ? var_10 : var_13))))))) : (min(var_1, (((~(arr_3 [i_2] [i_3] [i_3]))))))));
                var_19 = (max(var_19, (((~((-(arr_0 [i_2 + 1]))))))));
                arr_10 [2] |= (min((((~var_3) * ((~(arr_7 [10] [i_2] [10]))))), ((((!var_9) ? (arr_5 [6]) : ((750063876094366552 % (arr_6 [6]))))))));
            }
        }
    }
    var_20 = var_8;
    #pragma endscop
}
