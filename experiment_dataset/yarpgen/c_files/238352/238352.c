/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0 - 1] [1] [i_1] = 751963213;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_11 [1] [1] [i_2 - 3] [i_1] [i_3] &= ((((-8163619858713204342 || var_0) ? (arr_3 [16] [i_2] [2]) : (((max(var_8, var_10)))))));
                            arr_12 [i_0 - 1] [i_2] [i_3] = (arr_3 [i_0] [i_2 + 1] [i_2 + 1]);
                        }
                    }
                }
            }
        }
    }
    var_11 &= var_0;
    #pragma endscop
}
