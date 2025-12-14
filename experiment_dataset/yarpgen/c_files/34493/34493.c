/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 = (max((max(((max(8191, 1067582624))), (max(var_7, var_0)))), ((((((4294959105 ? 131 : 8189))) >= (~0))))));
    var_12 += (max((!131), 2226788538702662426));
    var_13 = ((683772176395605930 | (((((-117 == var_1) < var_9))))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = ((arr_2 [i_0 + 1]) ? (min(var_6, (arr_2 [i_0 - 1]))) : var_5);
                    var_15 = (~8203);
                }
            }
        }
        var_16 = (max(var_16, 17));
        var_17 = (((!4294959118) ? (((arr_1 [i_0 + 1]) ? 8196 : (arr_1 [i_0 + 1]))) : 3637692661));
    }
    #pragma endscop
}
