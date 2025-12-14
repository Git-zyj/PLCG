/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_1] = ((((min(var_15, (arr_1 [i_1 - 2] [i_1 - 2])))) ? 0 : -683));
                    var_19 = ((((((arr_6 [i_1 + 1] [i_1 + 2] [i_1 + 1]) ? 0 : (arr_6 [i_1 - 3] [i_1 - 3] [i_1 + 2])))) ? (arr_6 [i_1 - 2] [i_1 - 3] [i_1 - 3]) : (((!(arr_6 [i_1 - 1] [i_1 + 1] [i_1 + 1]))))));
                }
            }
        }
    }
    var_20 = (max(var_20, -3992979713388435869));
    var_21 = var_14;
    #pragma endscop
}
