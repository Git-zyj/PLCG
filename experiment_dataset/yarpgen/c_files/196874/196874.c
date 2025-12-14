/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_12);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] = (((min(1, 138))));
                    arr_7 [i_0] [i_0] = (((((2591004378 ? (arr_4 [i_0] [i_0] [i_2 + 4] [i_2 + 2]) : var_3))) ? (((~(arr_4 [i_0] [i_0] [i_2 - 2] [i_2 + 1])))) : (~1531899190)));
                }
            }
        }
    }
    var_18 -= ((!((-11913 > (1 % var_13)))));
    #pragma endscop
}
