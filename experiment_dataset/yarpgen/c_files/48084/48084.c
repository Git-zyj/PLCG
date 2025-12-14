/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 38;
    var_15 = var_13;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (max(var_16, (((((max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))) + 0)))));
        arr_3 [i_0] [i_0] = (((max((arr_1 [i_0]), (arr_1 [i_0])))) - ((-(arr_1 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_17 = 5324;
        arr_6 [i_1] = ((!(arr_5 [i_1] [i_1])));
        arr_7 [i_1] = (42506 ^ 14824);
    }
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 13;i_4 += 1)
            {
                {
                    var_18 = ((~(arr_8 [i_4 - 2])));
                    var_19 = (max(var_19, ((((((arr_15 [i_2 - 3] [i_4 - 1]) != (arr_9 [i_2 + 1] [i_2 + 3])))) << (23 / 2147483647)))));
                    arr_17 [i_2] [0] [i_2] [i_2 + 2] = (min(941816256, ((-(~2163758676483134822)))));
                }
            }
        }
        arr_18 [i_2] = 112;
        arr_19 [i_2 - 1] = (max(((~(-941816244 >= 25875))), (arr_1 [i_2 - 3])));
    }
    #pragma endscop
}
