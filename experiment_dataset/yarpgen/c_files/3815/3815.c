/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [4] &= max((arr_1 [i_1 + 1] [i_1 - 3]), (((!(arr_4 [i_0] [0])))));
                arr_7 [i_0] [i_1] = (((arr_1 [i_1 + 1] [i_1 - 3]) << (var_14 - 33)));
                var_19 -= (arr_3 [0]);
            }
        }
    }
    var_20 = (!((!(-102 & var_2))));
    var_21 = var_4;
    var_22 = (((((~((max(var_8, var_0)))))) % var_13));
    #pragma endscop
}
