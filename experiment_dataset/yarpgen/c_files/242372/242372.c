/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = (~var_17);
                    var_19 += (max(((-var_2 ? (arr_5 [i_1 - 4] [i_1 - 4]) : (var_2 / 7316139906376925143))), (max((arr_1 [i_0]), (arr_5 [i_1 + 3] [i_2 - 1])))));
                    var_20 = ((((!(arr_3 [i_1])))));
                }
            }
        }
    }
    var_21 = var_4;
    #pragma endscop
}
