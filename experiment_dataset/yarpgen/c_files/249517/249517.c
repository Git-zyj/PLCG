/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-((min(var_12, var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_1] = (((min((((arr_1 [i_0]) ? var_3 : var_15)), ((16 ? 732 : var_11)))) <= (((arr_5 [i_1] [i_1]) ? ((min(var_0, var_0))) : (((!(arr_2 [i_1]))))))));
                    var_17 = (((((arr_1 [i_0 + 3]) || (arr_1 [i_0 + 3]))) ? ((((arr_1 [i_0 + 3]) && (arr_1 [i_0 + 3])))) : (arr_1 [i_0 + 3])));
                    var_18 = var_14;
                    arr_10 [i_1] = (min((((arr_4 [i_0 + 2] [i_0 - 1]) << (((var_5 + 1888629767537215877) - 12)))), var_11));
                }
            }
        }
    }
    #pragma endscop
}
