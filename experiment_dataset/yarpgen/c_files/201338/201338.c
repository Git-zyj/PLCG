/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= 2093053040;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = ((max(((max(22055, 8096678159165108406)), 9269273537142157307))));
                    var_22 |= 75;

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_12 [i_0] = (((((95 ? 0 : 1))) ? 98 : -62));
                        var_23 = (max(var_23, -3002444260035071214));
                        arr_13 [i_0 + 2] [i_0] [i_0] = max(47861, 1);
                    }
                }
            }
        }
    }
    #pragma endscop
}
