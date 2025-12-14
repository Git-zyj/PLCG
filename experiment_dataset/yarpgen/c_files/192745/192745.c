/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 = (min(var_21, ((((~((max(var_13, var_14)))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_22 = (min((((arr_3 [0] [i_0 - 2]) ? var_5 : -1)), (max((arr_3 [i_2] [i_0 - 2]), (((((arr_3 [i_1] [i_2]) + 2147483647)) << (((((arr_3 [1] [i_1 + 1]) + 79)) - 30))))))));
                    var_23 &= ((!((((arr_0 [9] [i_1]) | (arr_1 [i_0 - 1]))))));
                    var_24 += var_15;
                    var_25 = (max((min(((min(-124, var_6))), ((-124 ? (arr_5 [i_0 - 2] [i_0] [i_0]) : var_13)))), (min(104, 123))));
                }
            }
        }
    }
    var_26 = var_4;
    var_27 = (max(var_27, 41));
    #pragma endscop
}
