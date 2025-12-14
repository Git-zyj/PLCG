/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~8);
    var_15 = ((-((var_4 ? (min(2369969932, 0)) : var_7))));
    var_16 = (max((min(((var_8 ? 10490676377058129825 : 11)), (var_2 / var_3))), var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0] = var_13;
                    var_17 = (max(var_17, (((0 ? (((0 ? -1 : var_8))) : (arr_4 [i_1] [i_1] [i_2] [6]))))));
                }
            }
        }
    }
    var_18 += ((var_11 ? var_5 : ((-(var_3 * var_9)))));
    #pragma endscop
}
