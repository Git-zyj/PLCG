/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_3));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = var_8;
                var_20 = ((-(((((var_14 ? (arr_0 [i_1]) : 65)) >= (arr_2 [i_0 - 1]))))));
                arr_5 [i_0] [i_0] [i_0] = (min((arr_4 [i_0] [i_1] [i_1]), (((1 ? 1 : 30)))));
                var_21 = (min(var_21, (arr_2 [i_0 + 1])));
                arr_6 [i_0] [i_0] [i_0] = (arr_3 [i_0]);
            }
        }
    }
    var_22 = var_12;
    var_23 = var_8;
    var_24 = (min(((((92 & -72) & var_11))), (min((var_1 ^ 14), var_6))));
    #pragma endscop
}
