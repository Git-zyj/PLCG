/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max(var_8, ((var_2 ? var_3 : 7243729080817977637))))) ? 53 : ((2040330834 ? var_6 : (~var_1)))));
    var_13 = ((min(2040330834, ((min(1, 1))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((var_10 != -14973) == ((var_10 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))));
        var_14 = (arr_1 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        var_15 = (arr_1 [i_1 + 2]);
                        var_16 = (var_6 && 255);
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_12 [i_0] [i_4] [i_4] = (arr_1 [i_0]);
            arr_13 [i_4] [i_4] [i_4] = 1;
        }
    }
    #pragma endscop
}
