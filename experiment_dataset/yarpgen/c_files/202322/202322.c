/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_0);
    var_20 = ((!(((-(18446744073709551615 && var_11))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = 511;
                    var_22 = min(((((arr_1 [9] [i_1]) < (arr_4 [i_0] [5] [i_2])))), (((var_9 ? var_8 : 16220470286874865441))));
                    arr_6 [i_0] [i_1] [i_0] = ((((+(((arr_1 [8] [6]) * 4260277403)))) != -1));
                    var_23 = 4294967295;
                }
            }
        }
        arr_7 [1] [i_0] = (arr_3 [2] [i_0] [i_0]);
    }
    #pragma endscop
}
