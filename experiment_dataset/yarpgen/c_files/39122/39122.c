/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_2 ? ((21442 ? var_4 : 1)) : 15969624978491552196))) ? var_7 : var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (max(var_11, 6823963565940361441));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_3] = ((~(((arr_2 [i_1 - 1]) ^ (arr_10 [i_0] [i_1] [i_2 + 1] [i_3 + 3] [i_1 - 2])))));
                                arr_13 [i_3] [i_2] [i_3] = ((((min(var_7, (((18 ? 59879 : 5656)))))) && (arr_4 [i_1 - 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 |= var_7;
    #pragma endscop
}
