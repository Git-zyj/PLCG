/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((min((min((max(2586172339, -33)), (((var_5 ? var_8 : var_4))))), (var_6 % 8421172506604634375))))));
    var_11 = (min((((min(var_4, var_7)))), var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_12 = (min(var_12, ((max(((((var_3 ? var_5 : -2)) & 12744049657448462632)), ((min((~var_1), ((max(31492, 25)))))))))));
                            var_13 ^= 390731732385789115;
                        }
                    }
                }
                arr_8 [i_0] [i_1] [i_1] = (max((arr_4 [i_1] [i_1 - 2] [i_0]), 108));
            }
        }
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_14 = (max(var_14, var_0));
        arr_11 [i_4] [i_4] = ((~(((arr_4 [i_4] [i_4] [i_4]) - (arr_4 [i_4] [i_4] [i_4])))));
    }
    for (int i_5 = 3; i_5 < 19;i_5 += 1)
    {
        var_15 = (max(var_15, (arr_5 [i_5 + 2] [i_5] [i_5 - 3] [i_5 - 1])));
        var_16 = (~(arr_7 [18] [i_5 + 1] [i_5 - 1] [i_5] [i_5 - 3]));
    }
    #pragma endscop
}
