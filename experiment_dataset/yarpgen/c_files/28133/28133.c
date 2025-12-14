/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = -108;
                    var_14 = (arr_2 [i_1]);

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_15 = ((arr_10 [i_0] [i_0] [i_0] [i_0] [5] [i_0]) % (((((-31 ? 109 : -118))) ? ((11685321196346966123 ? var_6 : 8139754950984036116)) : 4294967295)));
                        var_16 = ((((2025121497980090560 ? (148 + 6079) : (arr_2 [i_1]))) == (((arr_2 [i_3 + 1]) ? ((367383379 ? var_11 : (arr_1 [1] [i_1]))) : var_3))));
                    }
                    var_17 += (var_0 / var_12);
                }
            }
        }
    }
    var_18 = ((var_1 ? var_6 : var_1));
    var_19 = ((((var_6 ? var_10 : (max(2748563108613682500, 0))))) ? var_5 : var_3);
    #pragma endscop
}
