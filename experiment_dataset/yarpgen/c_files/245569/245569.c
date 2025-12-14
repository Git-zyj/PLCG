/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [1] [i_1] [i_0] = (!(arr_0 [i_0 - 1]));
                arr_6 [i_0] [i_0] = (((!var_1) + ((-2642220492862588774 ? (arr_2 [i_1] [i_1]) : var_1))));
                arr_7 [i_0] [i_0] = ((-(arr_1 [i_1])));
                arr_8 [i_0] [i_1] = (((((var_6 << (((arr_3 [i_1] [i_0]) - 60088907)))) % (37297 + 1))) & (arr_0 [i_0]));
            }
        }
    }
    var_10 = (((-1313727059 + 2147483647) << (5108 - 5108)));
    var_11 = ((-1313727062 ? 0 : -10345));
    var_12 = var_8;
    #pragma endscop
}
