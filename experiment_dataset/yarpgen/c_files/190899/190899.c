/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_15;
    var_21 = (min((((var_12 ^ ((-1915925556 ? -70 : 2052947863))))), (((((max(var_17, 3584)))) / ((3367594779 ? var_14 : var_2))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_22 = ((((((arr_3 [i_0] [i_0]) == (arr_1 [16] [0])))) << (((arr_2 [i_0]) - 14358854267351654493))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_23 = (2052947863 > 46125);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_3] [i_2] [i_0] [i_0] = ((((arr_2 [i_0]) ^ (arr_2 [i_2]))) - (var_3 || var_16));
                                arr_17 [i_0] [i_2] = var_14;
                                var_24 = (max(var_24, 31744));
                                var_25 = ((2147483647 ? 1 : 32864));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
