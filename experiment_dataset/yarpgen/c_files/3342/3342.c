/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((255 + ((max(var_6, var_4)))))) ? 4147851107 : ((min(4092, 61444)))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_11 = (max((((arr_8 [i_0] [i_1] [i_0] [i_3] [i_0 + 1]) ? var_4 : (arr_6 [i_0] [i_1 - 2] [i_3]))), (arr_4 [i_0 + 1] [i_0])));
                        arr_12 [i_0] [15] [i_2 + 2] [i_3] = -61444;
                        var_12 += (((~var_4) < (min(61436, (arr_2 [i_0 - 1])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    var_13 = (min(var_13, (((((max((arr_11 [i_0] [i_0 + 1] [i_0 - 1] [i_4 + 2] [i_5 - 1] [i_5 - 1]), (arr_13 [i_0 - 1] [i_4])))) ? (((arr_11 [i_0] [i_0 + 2] [i_0 + 2] [i_4 - 4] [i_5] [i_5]) ? 61444 : (arr_11 [19] [i_0 + 2] [5] [i_4 - 2] [i_5] [15]))) : (arr_11 [i_0] [i_0 - 1] [i_4] [i_4 + 1] [i_4] [i_5 - 1]))))));
                    var_14 = ((((arr_1 [i_0]) ? (arr_8 [i_0 + 1] [i_4 + 2] [i_0] [i_5 - 1] [14]) : ((4091 ^ (arr_10 [i_0]))))));
                }
            }
        }
    }
    var_15 = var_3;
    var_16 = var_5;
    #pragma endscop
}
