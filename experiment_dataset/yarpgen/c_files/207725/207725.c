/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = ((!((((arr_0 [i_0 + 2]) ? var_19 : (arr_0 [i_0 + 2]))))));
                    arr_8 [i_0 - 1] [i_1] = (arr_6 [i_0] [i_0] [i_0 + 1]);
                    arr_9 [i_0 - 1] [i_0] [i_1] [i_2] = ((+(((arr_5 [i_0 + 1]) ? (arr_6 [i_0 - 1] [i_1] [i_2]) : var_5))));
                    var_21 = (max(var_21, (((1995965357 < ((-(((arr_6 [i_0] [i_0] [i_0]) ? -2147483638 : var_10)))))))));
                }
            }
        }
    }
    var_22 = (min(var_22, var_4));
    var_23 = (max((!var_11), 3849995892));
    #pragma endscop
}
