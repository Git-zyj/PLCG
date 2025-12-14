/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_2] = ((((min(((11791 ? var_15 : (arr_5 [i_0]))), 32558))) ? (!var_2) : (((!(arr_4 [i_0] [i_2 + 1] [i_1 + 1]))))));
                    arr_10 [i_0] [i_0] = ((((((arr_6 [i_0] [i_0] [i_0] [i_0]) == ((((arr_1 [i_0]) + (arr_2 [i_0] [i_0] [i_2]))))))) + (((((var_2 ? (arr_4 [i_0] [i_1] [i_0]) : var_8)) != (var_17 + var_10))))));
                    arr_11 [i_0] [i_1] [i_2] [i_0] = ((!(~1)));
                }
            }
        }
    }
    var_19 = (min(var_19, ((min(1, (!221))))));
    var_20 = var_5;
    var_21 = var_15;
    #pragma endscop
}
