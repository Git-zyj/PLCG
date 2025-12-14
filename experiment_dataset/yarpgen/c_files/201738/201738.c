/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] &= (arr_1 [i_2]);
                    var_11 = (max(((((arr_4 [i_1] [i_2]) ? (arr_4 [i_0] [i_1]) : (arr_4 [i_0] [1])))), ((var_4 ? var_7 : (arr_7 [i_0])))));
                }
            }
        }
    }
    var_12 = -var_3;
    var_13 = (min((var_7 <= var_10), ((((max(var_3, var_9))) ? var_5 : var_4))));
    var_14 = ((-8988 <= (max((19904 <= -32762), 1938782235))));
    #pragma endscop
}
