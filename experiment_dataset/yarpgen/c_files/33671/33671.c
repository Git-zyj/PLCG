/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = 6;
                var_18 = 64234;
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((max((arr_3 [i_2] [i_2] [i_2]), (arr_4 [i_2]))) + (((arr_4 [i_2]) / (((-(arr_8 [i_2])))))));
        arr_11 [i_2] [i_2] = (arr_5 [i_2] [i_2] [24]);
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = -11;
        var_19 = (max(var_19, (((((11 - (arr_7 [i_3]))) + (max((arr_7 [i_3]), (arr_7 [i_3]))))))));
    }
    var_20 = var_10;
    #pragma endscop
}
