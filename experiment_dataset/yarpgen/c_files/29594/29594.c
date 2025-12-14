/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 |= (((((((max(var_5, var_7))) ? (arr_3 [i_0] [i_0]) : (arr_5 [10] [i_1] [i_2])))) ? (((!((min(var_1, 13814168619748494916)))))) : var_7));
                    var_14 = (max(((min(-var_5, var_8))), (((((arr_3 [i_0] [i_0]) <= var_1)) ? (arr_4 [i_0] [i_0]) : (-18658 == var_3)))));
                }
            }
        }
    }
    var_15 = (~var_1);
    #pragma endscop
}
