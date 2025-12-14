/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, var_10));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (((((var_10 ? var_7 : ((-(arr_4 [6])))))) ? (arr_6 [i_2] [i_0] [i_0] [i_0]) : ((~((var_5 ? var_8 : 17592186044415))))));
                }
            }
        }
    }
    var_14 = (-22 ^ 70300024700928);
    #pragma endscop
}
