/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [14] [i_0] [i_2] = ((((((var_3 - var_5) < (1394968034 + var_3)))) + ((((((arr_10 [i_0] [i_3] [i_2] [i_3] [i_0]) && 0)) || (var_3 && var_0))))));
                                arr_15 [i_0] [i_0] [i_0] [i_3] [i_4 - 4] = (0 >> 0);
                            }
                        }
                    }
                }
                var_13 = ((((((-1394968035 && 18446744073709551615) > ((((arr_13 [i_0] [i_0] [i_1]) || var_6)))))) != (((((((arr_2 [i_0] [i_0]) > 1394968034))) > (((arr_6 [i_0 + 1]) + (arr_4 [16] [i_1] [18]))))))));
                var_14 = (min(var_14, (((((((((var_12 > (arr_5 [i_0] [i_0] [i_1])))) * (1 > var_9)))) || ((((((arr_1 [i_1]) * var_7)) * ((((arr_4 [i_0] [i_0] [i_0]) / 1394968034)))))))))));
            }
        }
    }
    var_15 = (min(var_15, ((((((-1394968035 < var_1) / (1394968053 % 647646004))) < (((((((-2147483647 - 1) % -1394968035)) < (var_1 == 96))))))))));
    #pragma endscop
}
