/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    var_12 = (arr_8 [i_0] [i_0] [i_1] [i_2]);
                    var_13 |= (arr_3 [i_0]);
                    var_14 = (max(var_14, -51));
                }
            }
        }
    }
    var_15 = (max(var_15, ((max((((min(17592186044415, 2911085007975947054)) / 1)), 23)))));
    #pragma endscop
}
