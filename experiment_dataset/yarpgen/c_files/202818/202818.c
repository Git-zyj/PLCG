/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((-14402 ? 6 : (1 + 235))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_2] [i_3 - 4] [14] = -14390;
                        var_18 = ((~(((((-544292828 ? 52 : 207))) ? -24649 : 8192))));
                        var_19 = (min(var_19, ((((!52) < ((-((52 ? 235 : 0)))))))));
                        arr_11 [i_0] [6] &= (((((~(1 * 9119653368537818754)))) ? 1724615729547814603 : ((-((20 ? 16128 : 18446744073709551614))))));
                    }
                    arr_12 [i_0] [i_1] [i_2] [i_2] = 1633168028;
                }
            }
        }
    }
    var_20 *= (((((255 == 1) ^ (-6778 > 1))) + 209));
    #pragma endscop
}
