/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_10 = ((!(3511905601 | 1)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_0] [i_0] = (min(1, ((-(7676 >= -7670)))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_11 = -286867428;
                        arr_12 [i_3] [i_1] [i_1] [i_3] [i_2] = ((((776497588 | ((-7677 ? 4294967295 : 2473094326)))) ^ ((((~1) ? ((9485632023517657236 ? -7670 : 1)) : ((7696 ? -1147005349 : 50)))))));
                        var_12 = (max(var_12, (((((-1 ? (((((-9223372036854775807 - 1) >= 16)))) : -7303473845369373713)) >= (((((!9) != 7676)))))))));
                    }
                }
            }
        }
    }
    var_13 += 0;
    #pragma endscop
}
