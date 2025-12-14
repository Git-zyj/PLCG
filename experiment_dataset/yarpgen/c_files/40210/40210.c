/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_4 == -var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] = ((~((-(arr_5 [i_2])))));
                    var_18 = var_0;
                    var_19 = (min(var_19, -812092446));
                    arr_7 [7] [1] [i_2] = var_3;
                    var_20 = ((~(((-127 + 2147483647) << var_8))));
                }
            }
        }
    }
    var_21 = ((((((!var_10) + var_2))) - var_3));
    var_22 = (!var_14);
    var_23 = ((1 ? var_0 : var_13));
    #pragma endscop
}
