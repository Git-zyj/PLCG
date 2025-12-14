/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, -var_0));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_1 - 1] [i_2] = ((-((-(var_8 - var_0)))));
                    arr_12 [i_0 + 1] [i_2] [i_2 + 1] [i_0] = ((~(((((arr_6 [i_0] [i_0] [i_1 - 2]) & var_9))))));
                    var_12 *= ((-1 ? 63 : (((26405 & 4197739480656750264) ^ (((min(79, (arr_7 [i_2] [i_1] [i_0 - 2])))))))));
                    arr_13 [i_2 - 1] [i_2] [i_2] [i_0] = ((((max((arr_0 [i_0 - 3]), (((var_3 ? var_5 : var_0)))))) ? ((min((((-(arr_7 [i_0] [i_0] [i_0])))), (arr_3 [i_1 - 1] [i_1])))) : (((((var_6 ? (arr_3 [i_0] [i_2]) : (arr_2 [i_0])))) ? (arr_0 [i_0 + 1]) : ((min(var_9, (arr_8 [i_1 - 3] [i_1 - 3] [11]))))))));
                }
            }
        }
    }
    var_13 = ((((((var_3 ? var_4 : var_10)))) ? (~var_1) : ((((max(var_1, var_1))) ? ((var_6 ? var_3 : var_6)) : var_5))));
    #pragma endscop
}
